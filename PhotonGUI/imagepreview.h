#ifndef IMAGEPREVIEW_H
#define IMAGEPREVIEW_H

#include <QDialog>

namespace Ui {
class imagePreview;
}

class imagePreview : public QDialog
{
    Q_OBJECT

public:
    explicit imagePreview(QWidget *parent = 0);
    ~imagePreview();

private:
    Ui::imagePreview *ui;
};

#endif // IMAGEPREVIEW_H
