#include "Print.h"


//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
Print::Print() {

    empleado = 0;

}

Print::Print(Empleado *empleado) {

    this->empleado = empleado;

}

Print::~Print() {  }



//================================================================
//=
//=                M�TODOS
//=
//================================================================
void Print::mostrar() {

    cout << "\n   DNI:... " << empleado->getDni()
         << "\n   Nombre:... " << empleado->getNombre()
         << "\n   Nacionalidad:... " << empleado->getNacionalidad() << endl;


}
