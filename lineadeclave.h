#ifndef LINEADECLAVE_H
#define LINEADECLAVE_H
#include <QLineEdit>

class LineaDeClave : public QLineEdit
{
    Q_OBJECT

public:
    LineaDeClave( QWidget * parent = nullptr );

signals:
    void signal_RevisarNumerosJuntos();

private slots:
    void slot_verClave( const QString & );
    void slot_eliminarNumeros();

};

#endif // LINEADECLAVE_H
