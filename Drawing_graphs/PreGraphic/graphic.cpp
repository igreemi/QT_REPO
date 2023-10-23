#include "graphic.h"
#include "ui_graphic.h"

graphic::graphic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::graphic)
{
    ui->setupUi(this);
}

graphic::~graphic()
{
    delete ui;
}

void graphic::setWidget(QWidget *w)
{
    ui->gL_graphic->addWidget(w);
}
