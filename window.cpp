#include "window.h"

Window::Window(QWidget *parent) :
    Widget(parent)
{
    this->connect_signals();
}

Window::~Window()
{

}

void Window::connect_signals()
{
    connect(this, SIGNAL(signal_button1()), this, SLOT(slot_button1()));
    connect(this, SIGNAL(signal_button2()), this, SLOT(slot_button2()));
    connect(this, SIGNAL(signal_button3()), this, SLOT(slot_button3()));
    connect(this, SIGNAL(signal_button4()), this, SLOT(slot_button4()));

    connect(this, SIGNAL(signal_checkbox1(bool)), this, SLOT(slot_checkbox1(bool)));
    connect(this, SIGNAL(signal_checkbox2(bool)), this, SLOT(slot_checkbox2(bool)));
}


void Window::slot_button1()
{
    qDebug() << "slot_button1()";
}

void Window::slot_button2()
{
    qDebug() << "slot_button2()";
}

void Window::slot_button3()
{
    qDebug() << "slot_button3()";
}

void Window::slot_button4()
{
    qDebug() << "slot_button4()";
}

void Window::slot_checkbox1(bool flg)
{
    qDebug() << "slot_checkbox1() with " << flg;
}

void Window::slot_checkbox2(bool flg)
{
    qDebug() << "slot_checkbox2() with " << flg;
}
