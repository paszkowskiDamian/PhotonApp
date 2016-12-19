#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../PhotonApp/image.h"
#include "../PhotonApp/bitmap.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionBrightness_triggered();

private:
    Ui::MainWindow *ui;
    image* _image;
};

#endif // MAINWINDOW_H
