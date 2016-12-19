#ifndef TOOLDOCKWIDGET_H
#define TOOLDOCKWIDGET_H

#include <QDockWidget>

namespace Ui {
class toolDockWidget;
}

class toolDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit toolDockWidget(QString toolName,QWidget *parent = 0);
    ~toolDockWidget();

private:
    Ui::toolDockWidget *ui;
};

#endif // TOOLDOCKWIDGET_H
