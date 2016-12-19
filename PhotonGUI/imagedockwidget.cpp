#include "imagedockwidget.h"
#include "ui_imagedockwidget.h"

imageDockWidget::imageDockWidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::imageDockWidget)
{
    ui->setupUi(this);
}

imageDockWidget::~imageDockWidget()
{
    delete ui;
}
