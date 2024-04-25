    #include "gamewindow.h"
    #include "ui_gamewindow.h"
    #include "currentresultwindow.h"
    #include "playermanager.h"
    #include <QMessageBox>

    void GameWindow::setPlayerName(const QString &name) {
        m_playerName = name;
    }

    GameWindow::GameWindow(const QString &playerName, QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::GameWindow)
        , m_playerName(playerName)
    {
        ui->setupUi(this);
        if (!m_colorData.loadColorsFromJson("../Guess_color_game/colors/colors.json")) {
            QMessageBox::critical(this, "Помилка", "Не вдалося завантажити список кольорів.");
            return;
        }

        setPlayerName(m_playerName);
        connect(ui->pushButton, &QPushButton::clicked, this, &GameWindow::checkGuess);

        disconnect(ui->pushButton_2, &QPushButton::clicked, nullptr, nullptr);
        connect(ui->pushButton_2, &QPushButton::clicked, this, &GameWindow::on_pushButton_2_clicked);
        ui->pushButton->setCursor(Qt::PointingHandCursor);
        ui->pushButton_2->setCursor(Qt::PointingHandCursor);
        updateSquareColor();
    }

    void GameWindow::on_pushButton_2_clicked()
    {
        this->close();
    }

    void GameWindow::updateSquareColor() {
        QColor selectedColor = m_colorData.getRandomColor();
        ui->frame->setStyleSheet(QString("background-color: %1; border-radius: 8px;").arg(selectedColor.name()));
    }

    void GameWindow::closeEvent(QCloseEvent *event)
    {
        emit closed();
        QMainWindow::closeEvent(event);
    }

    void GameWindow::checkGuess() {
        int userRed = ui->spinBox->value();
        int userGreen = ui->spinBox_2->value();
        int userBlue = ui->spinBox_3->value();

        QColor selectedColor = ui->frame->palette().color(QPalette::Window);

        double distance = colorDistance(selectedColor.red(), selectedColor.green(), selectedColor.blue(), userRed, userGreen, userBlue);

        QString resultMessage;
        if (distance <= 1) {
            resultMessage = "Відмінно!";
        } else if (distance <= 20 && distance > 1) {
            resultMessage = "Дуже близько!";
        } else if (distance <= 60 && distance > 20) {
            resultMessage = "Близько!";
        } else if (distance <= 100 && distance > 60) {
            resultMessage = "50/50";
        } else {
            resultMessage = "Спробуй ще раз.";
        }

        QColor referenceColor = ui->frame->palette().color(QPalette::Window);
        QColor userColor(userRed, userGreen, userBlue);

        QString referenceColorName = m_colorData.getColorName(selectedColor);
        QString userColorName = m_colorData.getColorName(userColor);

        CurrentResultWindow *resultWindow = new CurrentResultWindow;
        resultWindow->setReferenceColor(selectedColor);
        resultWindow->setUserColor(userColor);
        resultWindow->setResultMessage(resultMessage);
        resultWindow->show();

        m_playerManager.updatePlayerScore(m_playerName, referenceColor, userColor, referenceColorName, userColorName, resultMessage);
        this->close();
    }

    double GameWindow::colorDistance(int r1, int g1, int b1, int r2, int g2, int b2) {
        return sqrt(pow(r2 - r1, 2) + pow(g2 - g1, 2) + pow(b2 - b1, 2));
    }

    GameWindow::~GameWindow()
    {
        delete ui;
    }
