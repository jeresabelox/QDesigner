#include "lineadeclave.h"

LineaDeClave::LineaDeClave(  QWidget * parent ) : QLineEdit( parent )
{
    connect( this, SIGNAL( textChanged( const QString & ) ), this, SLOT( slot_verClave( const QString & )) );
    connect( this, SIGNAL( signal_RevisarNumerosJuntos() ), this, SLOT( slot_eliminarNumeros()) );
}

void LineaDeClave::slot_eliminarNumeros()
{
    this->setText( text().mid( 0, text().size() - 2 ) );
}

void LineaDeClave::slot_verClave( const QString &text )
{
    if( text.size() > 1)
    {
        if( text.at( text.size() - 1 ).isDigit() && text.at( text.size() - 2 ).isDigit() )
        {
            emit signal_RevisarNumerosJuntos();
        }
    }
}
