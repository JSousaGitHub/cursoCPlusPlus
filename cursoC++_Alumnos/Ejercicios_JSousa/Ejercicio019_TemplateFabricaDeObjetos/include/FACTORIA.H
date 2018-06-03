#ifndef FACTORIA_H
#define FACTORIA_H

#include <iostream>

using namespace std;

//=================================================================================
//
//                       Class Factoria
//
//  Contiene tres métodos estáticos que por lo tanto no requieren un objeto para
//    ser invocados.
//
//=================================================================================
class Factoria {


    // Método para instanciar una clase de 1 parámetro
    //-------------------------------------------------------
    public: template <class T, class T1>
    static T* getInstance(T1 dato1) {    // Método estático
                                                // No requiere crear un objeto para invocarlo

        return new T(dato1);

    }


    // Método para instanciar una clase de 2 parámetros
    //-------------------------------------------------------
    public: template <class T, class T1, class T2>
    static T* getInstance(T1 dato1, T2 dato2) {      // Método estático
                                                            // No requiere crear un objeto para invocarlo

        return new T(dato1, dato2);

    }


    // Método para liberar una instancia
    //----------------------------------------
    template <class T>
    static void freeMemory(T *t) {


        delete t;

    }

};

#endif // FACTORIA_H
