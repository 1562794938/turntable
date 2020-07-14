#ifndef WIDGET_H
#define WIDGET_H

#include <QPainter>
#include <QTimer>
#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    virtual void paintEvent(QPaintEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
signals:
    void luckStartSignal();
public slots:
    void luckStartSlot();
    void rtTimerOutSlot();
private:
    Ui::Widget *ui;
    QPainter rotain;
    QPainter pointPainter;
    QTimer rtTimer;  //旋转定时器
    qreal rtAngle;   //旋转因子
    int randNumber;   //目标转多少
    int i=0;
};
#endif // WIDGET_H
