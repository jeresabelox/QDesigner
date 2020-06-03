#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
#include "ventana.h"
#include "formulario.h"

namespace Ui
{
    class Login;
}


class Login : public QWidget
{
    Q_OBJECT

public:
    Login( QWidget *parent = nullptr );
    ~Login();

private:
    Ui::Login *ui;
    Ventana    * ventana;
    Formulario * formulario;

private slots:
    void slot_MostrarVentana();
    void slot_MostrarFormulario();
};
#endif // LOGIN_H
