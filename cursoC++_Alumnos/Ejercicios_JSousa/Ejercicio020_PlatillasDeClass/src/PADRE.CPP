#include "Padre.h"

//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
Padre::Padre() {

    this->nombre = "";
    this->edad = 0;

}

Padre::Padre(string nombre, int edad) {

    this->nombre = nombre;
    this->edad = edad;

}

Padre::~Padre() { }
