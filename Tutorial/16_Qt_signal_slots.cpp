#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->create_buttons();
    this->create_checkboxes();
    this->connect_slots();
    this->create_layouts();
}

Widget::~Widget()
{

}

void Widget::create_buttons()
{
    this->button1 = new QPushButton();
    this->button1->setText("Button 1");

    this->button2 = new QPushButton();
    this->button2->setText("Button 2");

    this->button3 = new QPushButton();
    this->button3->setText("Button 3");

    this->button4 = new QPushButton();
    this->button4->setText("Button 4");
}

void Widget::create_checkboxes()
{
    this->checkbox1 = new QCheckBox();
    this->checkbox1->setText("Checkbox 1");

    this->checkbox2 = new QCheckBox();
    this->checkbox2->setText("Checkbox 2");
}

void Widget::create_layouts()
{
    // combine buttons 1 and 2 into a horizontal grid
    this->hlayout1 = new QHBoxLayout();
    this->hlayout1->addWidget(this->button1);
    this->hlayout1->addWidget(this->button2);

    // combine buttons 3 and 4 into a horizontal grid
    this->hlayout2 = new QHBoxLayout();
    this->hlayout2->addWidget(this->button3);
    this->hlayout2->addWidget(this->button4);

    // combine checkboxes 1 and 2 into a horizontal grid
    this->hlayout3 = new QHBoxLayout();
    this->hlayout3->addWidget(this->checkbox1);
    this->hlayout3->addWidget(this->checkbox2);

    // stack all horizontal layouts into one vertical layout
    this->mainLayout = new QVBoxLayout();
    this->mainLayout->addLayout(this->hlayout1);
    this->mainLayout->addLayout(this->hlayout2);
    this->mainLayout->addLayout(this->hlayout3);

    // set the main layout
    this->setLayout(this->mainLayout);
}

/* code for slots */
void Widget::emit_checkbox1(bool flg)
{
    emit this->signal_checkbox1(flg);
    qDebug() << "checkbox 1 set to " << flg;
}

void Widget::emit_checkbox2(bool flg)
{
    emit this->signal_checkbox1(flg);
    qDebug() << "checkbox 2 set to " << flg;
}

void Widget::emit_button1()
{
    emit this->signal_button1();
    qDebug() << "button 1 clicked";
}

void Widget::emit_button2()
{
    emit this->signal_button2();
    qDebug() << "button 2 clicked";
}

void Widget::emit_button3()
{
    emit this->signal_button3();
    qDebug() << "button 3 clicked";
}

void Widget::emit_button4()
{
    emit this->signal_button4();
    qDebug() << "button 4 clicked";
}

/* connect the slots to the signals */
void Widget::connect_slots()
{
    /* connect the checkboxes to slots */
    connect(this->checkbox1, SIGNAL(clicked(bool)), this, SLOT(emit_checkbox1(bool)));
    connect(this->checkbox2, SIGNAL(clicked(bool)), this, SLOT(emit_checkbox2(bool)));

    /* connect the pushbuttons to the slots */
    connect(this->button1, SIGNAL(clicked()), this, SLOT(emit_button1()));
    connect(this->button2, SIGNAL(clicked()), this, SLOT(emit_button2()));
    connect(this->button3, SIGNAL(clicked()), this, SLOT(emit_button3()));
    connect(this->button4, SIGNAL(clicked()), this, SLOT(emit_button4()));
}

