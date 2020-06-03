#ifndef LABEL_H
#define LABEL_H
#include <QLabel>


class Label : public QLabel
{
    Q_OBJECT

public:
    Label( QWidget * parent = nullptr );

protected:
    void mousePressEvent( QMouseEvent *ev ) ;

signals:
    void signalCLic();
};

#endif // LABEL_H
