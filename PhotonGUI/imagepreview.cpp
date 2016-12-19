#include "imagepreview.h"
#include "ui_imagepreview.h"

imagePreview::imagePreview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imagePreview)
{
    ui->setupUi(this);
}

imagePreview::~imagePreview()
{
    delete ui;
}
