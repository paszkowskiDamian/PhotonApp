#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <tooldockwidget.h>
#include <imagepreview.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"),"C://","Bitmap(*.bmp)");

    if(fileName.length() > 0)
    {
        QString native = QDir::toNativeSeparators(fileName);
        bitmap bmp(native.toStdString());
        _image = &bmp;
        ui->actionSave->setEnabled(true);
        imagePreview *frame = new imagePreview(this);
        frame->show();
    }

}

void MainWindow::on_actionSave_triggered()
{
    if(_image!=nullptr)
    {
        QFileDialog* fileDialog = new QFileDialog;
        fileDialog->setDefaultSuffix(".bmp");
        QString saveFileName = fileDialog->getSaveFileName(this,
                                                            tr("Save File"),
                                                            "C://",".bmp");
        if(saveFileName.length() > 0)
        {
            QString native = QDir::toNativeSeparators(saveFileName);
            QMessageBox::information(this,"save Name",native);
            _image->save(native.toStdString());
        }
    }
}

void MainWindow::on_actionBrightness_triggered()
{
    toolDockWidget *brightness = new toolDockWidget("Brightness",this);
    brightness->setAllowedAreas(Qt::RightDockWidgetArea);
    addDockWidget(Qt::RightDockWidgetArea,brightness);
}
