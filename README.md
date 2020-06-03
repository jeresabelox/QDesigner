Ejercicio. Se pide entregar una aplicación con las siguientes características:

- Definir la clase LineaDeClave que herede de QLineEdit
- Definir la clase Label que hereda de QLabel para poder usarla como un botón en el QtDesigner.
Es decir, debe tener definida una señal que se emita cuando el usuario hace clic sobre el mismo
- Crear un login de usuaros (en la clase Login) con el siguiente aspecto:
https://drive.google.com/file/d/1zmk4XbprK2ZNv0_RmZ8qzkgue18Eb11_/view?usp=sharing

  - El primer widget es para ingresar el usuario y será un objeto de QLineEdit.
  - El segundo widget es para ingresar la clave y será un objeto de LineaDeClave.
  - Los otros dos widgets (“Ingresar” y “Registrarse”) son objetos de la clase Label.
  - Esta ventana debe llevar como título “Login de Usuario”
  - Alinear los textos tal como se muestran en la figura.
  
- Las funcionalidades que se deben programar en la clase LineaDeClave son:
    - Emitir una señal signal_dosNumerosJuntos() cada vez que un usuario ingrese dos
    números consecutivos. Tener en cuenta que en LineaDeClave se puede ingresar cualquier
    caracter (números, letras, etc.)
    - La clave debe mostrarse como asteriscos.
    - Si se ingresan dos números juntos, automáticamente eliminar ambos. Utilizar la señal para
saber cuándo se ingresaron los dos números y eliminarlos

- Cuando se presione “Ingresar” se debe abrir una ventana vacía, la cual debe estar definida en la
clase Ventana y creada con QtDesigner. Esta Ventana deberá llevar como título, el nombre de usuario que
fue colocado en el QLineEdit del usuario.

- Cuando se presione “Registrarse” se debe abrir otra ventana vacía, la cual debe estar definida en
la clase Formulario y creada con QtDesigner


Además se pide:
  - Defina como funciones const a todas las que considere. Que no falte ninguna por definir.
  - Convención de nombres e indentación según lo visto en clase.
  - Usar los nombres tal cual se piden en el enunciado.
  - Eliminar el .pro.user
