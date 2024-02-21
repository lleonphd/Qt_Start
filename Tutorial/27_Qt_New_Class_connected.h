#ifndef WINDOW_H
#define WINDOW_H

#include "widget.h"

class Window : public Widget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);

    // add destructor
    ~Window();

    // connect signals from the widget to this class
    void connect_signals();

signals:

public slots:
    void slot_button1();
    void slot_button2();
    void slot_button3();
    void slot_button4();
    void slot_checkbox1(bool flg);
    void slot_checkbox2(bool flg);

};

#endif // WINDOW_H

