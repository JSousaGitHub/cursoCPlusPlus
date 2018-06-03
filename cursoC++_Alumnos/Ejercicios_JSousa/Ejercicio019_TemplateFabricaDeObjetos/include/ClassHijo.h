#ifndef CLASSHIJO_H
#define CLASSHIJO_H

#include <iostream>

using namespace std;

class ClassHijo {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    public: int pagaSemanal;

    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
        ClassHijo(int paga);
        virtual ~ClassHijo();



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setPagaSemanal(int pagaSemanal) { this->pagaSemanal = pagaSemanal;}
    public: int getPagaSemanal(void) {return pagaSemanal;}


};

#endif // CLASSHIJO_H
