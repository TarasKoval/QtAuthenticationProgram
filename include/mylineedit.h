#ifndef MY_LINE_EDIT_H
#define MY_LINE_EDIT_H

#include<QtWidgets>
#include<QDebug>
#include<QKeyEvent>
#include<QDateTime>

class myLineEdit : public QLineEdit {
Q_OBJECT
private:
    ulong timeTemp;
    int keyPressesCounter;
    std::vector<ulong> *timeVector;
public:
    explicit myLineEdit(QWidget *obj);

    const std::vector<ulong> &getTimeVector() const;

    void keyPressEvent(QKeyEvent *event) override;

    void keyReleaseEvent(QKeyEvent *event) override;

signals:

    void timeVectorDone();

public slots:

    void keyPressed(QKeyEvent *event);

    void keyReleased(QKeyEvent *event);
};

#endif // MY_LINE_EDIT_H
