#ifndef START_WINDOW_H
#define START_WINDOW_H

#include <QtWidgets>
#include "inputwindow.h"
#include <QFile>

class startWindow : public QMainWindow {
Q_OBJECT
private:
    inputWindow *myInputWindow;
    QRadioButton *buttonLogIn;
    QRadioButton *buttonSignUp;
    QLineEdit *login;
public:
    explicit startWindow(QWidget *obj = nullptr);

public slots:

    void openInputWindow();
};

#endif // START_WINDOW_H
