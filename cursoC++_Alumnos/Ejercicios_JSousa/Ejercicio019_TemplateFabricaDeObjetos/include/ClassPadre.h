#ifndef PADRE_H
#define PADRE_H

#include <iostream>

using namespace std;

class ClassPadre {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string nombre;
    private: int edad;

    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: ClassPadre();
    public: ClassPadre(string nombre, int edad);
    public: virtual ~ClassPadre();


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setNombre(string nombre) { this->nombre = nombre;}
    public: string getNombre(void) {return nombre;}
    public: void setEdad(int edad) { this->edad = edad;}
    public: int getEdad(void) {return edad;}

};

#endif // PADRE_H
