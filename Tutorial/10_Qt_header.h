#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui/QWidget>

/* add other widget libraries that you might need */
#include <QCheckBox>        // to add a checkbox
#include <QPushButton>      // to add a button
#include <QHBoxLayout>      // to arrange widgets horizontally
#include <QVBoxLayout>      // to arrange widgets vertically
#include <QCloseEvent>      // to detect when widget is closed and initiate clean up routine
#include <QDebug>           // to add messages to the console (similar to std::cout)

class Widget : public QWidget
{
    Q_OBJECT

private:
    QCheckBox * checkbox1;
    QCheckBox * checkbox2;

    QPushButton * button1;
    QPushButton * button2;
    QPushButton * button3;
    QPushButton * button4;

    QHBoxLayout * hlayout1;
    QHBoxLayout * hlayout2;
    QHBoxLayout * hlayout3;

    QVBoxLayout * mainLayout;

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void create_buttons();      // function to initialize the buttons
    void create_checkboxes();   // function to initialize checkboxes
    void create_layouts();      // function to initialize the layout of the gui
};

#endif // WIDGET_H
