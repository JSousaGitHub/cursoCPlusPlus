#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include "Persona.h"
#include "Deportista.h"


using namespace std;

class Empleado : public Persona, public Deportista {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    double salario;
    string seguridadSocial;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Empleado();
    public: Empleado(string nombre, string dni, string nacionalidad, double salario, string seguridadSocial, string deporte);
    ~Empleado();



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setSalario(double salario) { this->salario = salario;}
    public: double getSalario(void) { return salario;}
    public: void setSeguridadSocial(string seguridadSocial) { this->seguridadSocial = seguridadSocial;}
    public: string getSeguridadSocial(void) {return seguridadSocial;}


    //================================================================
    //=
    //=                M�TODOS
    //=
    //================================================================
    public: string print();




};

#endif // EMPLEADO_H
