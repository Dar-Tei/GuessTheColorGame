#include "addcolorwindow.h"
#include "ui_addcolorwindow.h"
#include <QMessageBox>
#include <QRegularExpression>

AddColorWindow::AddColorWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddColorWindow)
{
    ui->setupUi(this);

    if (!m_colorData.loadColorsFromJson("../Guess_color_game/colors/colors.json")) {
        QMessageBox::critical(this, "Помилка завантаження кольорів", "Не вдалося завантажити кольори.");
        return;
    }

    connect(ui->pushButton, &QPushButton::clicked, this, &AddColorWindow::Close_window);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &AddColorWindow::AddColor);
    connect(ui->spinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &AddColorWindow::updateColorPreview);
    connect(ui->spinBox_2, QOverload<int>::of(&QSpinBox::valueChanged), this, &AddColorWindow::updateColorPreview);
    connect(ui->spinBox_3, QOverload<int>::of(&QSpinBox::valueChanged), this, &AddColorWindow::updateColorPreview);
}


AddColorWindow::~AddColorWindow()
{
    delete ui;
}

void AddColorWindow::Close_window(){
    this->close();
}

void AddColorWindow::updateColorPreview()
{

    int red = ui->spinBox->value();
    int green = ui->spinBox_2->value();
    int blue = ui->spinBox_3->value();

    QString styleSheet = QString("background-color: rgb(%1, %2, %3); border-radius: 8px;").arg(red).arg(green).arg(blue);
    ui->frame->setStyleSheet(styleSheet);
}

void AddColorWindow::AddColor()
{
    int red = ui->spinBox->value();
    int green = ui->spinBox_2->value();
    int blue = ui->spinBox_3->value();

    QString colorName = ui->lineEdit->text();

    QRegularExpression regex("[a-zA-Z]+");

    if (!colorName.contains(regex)) {
        QMessageBox::information(this, "Некоректна назва кольору", "Будь ласка, введіть назву кольору із латинських літер.");
        return;
    }

    if (colorName.length() > 15) {
        QMessageBox::information(this, "Некоректна назва кольору", "Назва кольору не може перевищувати 15 символів");
        return;
    }

    for (int i = 0; i < m_colorData.colorsCount(); ++i) {
        if (m_colorData.getColor(i) == QColor(red, green, blue)) {
            QMessageBox::information(this, "Повторення кольору", "Такий колір вже існує.");
            return;
        }
    }

    QMessageBox::StandardButton confirmation = QMessageBox::question(this, "Підтвердження", "Додати цей колір?", QMessageBox::Yes | QMessageBox::No);
    if (confirmation == QMessageBox::No) {
        return;
    }

    m_colorData.addColor(QColor(red, green, blue), colorName);

    if (!m_colorData.saveColorsToJson("../Guess_color_game/colors/colors.json")) {
        QMessageBox::critical(this, "Помилка", "Не вдалося зберегти кольори.");
        return;
    }

    QMessageBox::information(this, "Успішно", "Колір додано.");
    Close_window();
}

