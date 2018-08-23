#ifndef INPUT_WINDOW_H
#define INPUT_WINDOW_H

#include <QtWidgets>
#include <QMessageBox>
#include "mylineedit.h"
#include "workwithfiles.h"
#include "functions.h"

class inputWindow : public QMainWindow {
Q_OBJECT
private:
    QString fileName;
    bool createNewUser;
    myLineEdit *lineEdit;
public:
    explicit inputWindow(QWidget *obj = nullptr, QString rhsFileName = "", bool rhsCreateNewUser = true);

    void closeEvent(QCloseEvent *event) override;

public slots:

    void timeVectorIsReady();

signals:

    void windowCloses();
};

#endif // INPUT_WINDOW_H
