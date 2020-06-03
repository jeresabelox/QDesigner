#include "label.h"
#include <QMouseEvent>

Label::Label( QWidget * parent ) : QLabel( parent )
{

}

void Label::mousePressEvent(QMouseEvent * ev)
{
    if( ev->button() == Qt::LeftButton )
    {
        emit( signalCLic() );
    }
}
