#ifndef FACTORIA_H
#define FACTORIA_H

#include <iostream>

using namespace std;

//=================================================================================
//
//                       Class Factoria
//
//  Contiene tres m�todos est�ticos que por lo tanto no requieren un objeto para
//    ser invocados.
//
//=================================================================================
class Factoria {


    // M�todo para instanciar una clase de 1 par�metro
    //-------------------------------------------------------
    public: template <class T, class T1>
    static T* getInstance(T1 dato1) {    // M�todo est�tico
                                                // No requiere crear un objeto para invocarlo

        return new T(dato1);

    }


    // M�todo para instanciar una clase de 2 par�metros
    //-------------------------------------------------------
    public: template <class T, class T1, class T2>
    static T* getInstance(T1 dato1, T2 dato2) {      // M�todo est�tico
                                                            // No requiere crear un objeto para invocarlo

        return new T(dato1, dato2);

    }


    // M�todo para liberar una instancia
    //----------------------------------------
    template <class T>
    static void freeMemory(T *t) {


        delete t;

    }

};

#endif // FACTORIA_H
