#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <QWidget>
#include <QGridLayout>

namespace Ui {
class graphic;
}

class graphic : public QWidget
{
    Q_OBJECT

public:
    explicit graphic(QWidget *parent = nullptr);
    ~graphic();

    void setWidget(QWidget *w);

private:
    Ui::graphic *ui;
};

#endif // GRAPHIC_H
