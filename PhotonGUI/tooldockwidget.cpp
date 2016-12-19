#include "tooldockwidget.h"
#include "ui_tooldockwidget.h"

toolDockWidget::toolDockWidget(QString toolName,QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::toolDockWidget)
{
    ui->setupUi(this);
    ui->label->setText(toolName);
}

toolDockWidget::~toolDockWidget()
{
    delete ui;
}
