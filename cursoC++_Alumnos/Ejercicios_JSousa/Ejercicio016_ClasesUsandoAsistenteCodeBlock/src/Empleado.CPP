#include "Empleado.h"


//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
Empleado::Empleado() {

    salario = 0;
    seguridadSocial = "";

}

 Empleado::Empleado(string nombre, string dni, string nacionalidad, double salario, string seguridadSocial, string deporte)
                    :Persona(nombre, dni, nacionalidad), Deportista(deporte) {

    this->salario = salario;
    this->seguridadSocial = seguridadSocial;

}

Empleado::~Empleado() {  }



//================================================================
//=
//=                M�TODOS
//=
//================================================================
string Empleado::print() { return "     desde la clase Empleado"; }

