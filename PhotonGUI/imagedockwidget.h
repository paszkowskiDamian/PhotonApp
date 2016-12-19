#ifndef IMAGEDOCKWIDGET_H
#define IMAGEDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class imageDockWidget;
}

class imageDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit imageDockWidget(QWidget *parent = 0);
    ~imageDockWidget();

private:
    Ui::imageDockWidget *ui;
};

#endif // IMAGEDOCKWIDGET_H
