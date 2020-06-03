#include "login.h"
#include "ui_login.h"

Login::Login( QWidget * parent ) : QWidget( parent),
                                   ui( new Ui::Login),
                                   ventana( new Ventana() ),
                                   formulario( new Formulario() )
{
    ui->setupUi(this);
    ui->leUsuario->setFocus();

    connect( ui->lIngresar,    SIGNAL( signalCLic() ), this, SLOT( slot_MostrarVentana() ) );
    connect( ui->lRegistrarse, SIGNAL( signalCLic() ), this, SLOT( slot_MostrarFormulario() ) );
}

Login::~Login()
{
    delete ui;
}

void Login::slot_MostrarVentana()
{
    ventana->setWindowTitle( ui->leUsuario->text() );
    ventana->show();
    this->hide();
}

void Login::slot_MostrarFormulario()
{
    formulario->show();
    this->hide();
}
