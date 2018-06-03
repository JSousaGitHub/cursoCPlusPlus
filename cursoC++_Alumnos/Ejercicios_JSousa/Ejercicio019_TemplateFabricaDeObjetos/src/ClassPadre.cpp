#include "ClassPadre.h"


//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
ClassPadre::ClassPadre() {

    this->nombre = "";
    this->edad = 0;

}


ClassPadre::ClassPadre(string nombre, int edad) {

    this->nombre = nombre;
    this->edad = edad;

}


ClassPadre::~ClassPadre() {

    //dtor

}
