#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <stdlib.h>
#include <Padre.h>

using namespace std;


//=============================================================================================
//=============================================================================================
//=
//=                           LISTA
//=
//= Implementa una clase plantilla que puede ser utilizada para almacenar una lista de tipos
//=
//=============================================================================================
//=============================================================================================

template <class T>
class Lista {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: int dimension;     // Cantidad de elementos que contiene la lista
    private: int posicion;      // Apuntador al �ltimo elemento insertado en la lista (-1 ning�n elemento)
    private: T *ptrLista;       // Un puntero a la lista de elementos


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Lista();
    public: Lista(int NumElemt);
    public: Lista(const Lista &lista);
    public: ~Lista();


    //================================================================
    //=
    //=              PROPIEDADES / SOBRECARGAS
    //=
    //================================================================
    public: int getDimension(void) { return this->dimension; };     // Devuelve la cantidad de elementos que puede contener la lista
    public: T getElement(int elementToGet);                         // Devuelve el elemento de la lista indicado por posicion
    public: T operator [] (int posicion);                           // Devuelve el elemento de la lista indicado por en [posicion]
    public: void operator + (T element);                            // A�ade un elemento a la lista
    public: void operator += (T element);                           // A�ade un elemento a la lista




    //================================================================
    //=
    //=                METODOS
    //=
    //================================================================
    void add(T element);                    // A�ade un elemento a la lista


};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
////
////            I M P L E M E N T A C I � N   D E   L A   P L A N T I L L A   L I S T A
////
////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//================================================================
//=
//=           CONSTRUCTORES / DESTRUCTORES
//=
//================================================================
template  <class T> Lista<T>::Lista(void) {

    this->posicion = -1;                    // Se pone como vac�a en un principio (sin ning�n elemento)
    this->dimension = 1;                    // Como no hay valor para dimensi�n se capacidad para un solo elemento
    this->ptrlista = new T[dimension];      // Creamos la lista

}

template<class T> Lista<T>::Lista(int NumElemt) : dimension(NumElemt) {

    if (dimension < 1) this->dimension = 1;      // Al menos capacidad para aun solo elemento

    this->posicion = -1;                        // Lista vac�a en un principio, no hay elemento al que apuntar
    this->ptrLista = new T[dimension];          // Crea la lista

}

template<class T> Lista<T>::Lista(const Lista &lista) {

    // Copia los elemento de lista en este objeto
    //-----------------------------------------------
    this->dimension = lista.dimension;
    this->posicion = lista.posicion;
    this->dimension = lista.dimension;

    // Crea un nuevo array vac�o de tipos
    //---------------------------------------
    this->ptrLista = new T [this->dimension];

    // Inicializa el nuevo array
    //-------------------------------
    for (int i = 0; i <= dimension -1; i++) { this->ptrLista[i] = lista.ptrLista[i]; }

}

template<class T> Lista<T>::~Lista() { delete [] ptrLista; }




//================================================================
//=
//=              PROPIEDADES / SOBRECARGAS
//=
//================================================================
template<class T> T Lista<T>::getElement(int elementToGet) {

    if( elementToGet >= 0 && elementToGet <= (posicion) ) {

        return ptrLista[elementToGet];

    } else if (posicion == -1 && elementToGet <= (dimension - 1) && elementToGet > -1 ) {

        throw "La lista est� vac�a";        // Lanzamos una excepci�n indicando el problema

    } else {

        throw "Posici�n fuera de rango";        // Lanzamos una excepci�n indicando el problema

    }

    return T();     // Devolvemos un elemento vac�o

}

template<class T> T Lista<T>::operator [] (int elementToGet) { return getElement(elementToGet); }

template<class T> void Lista<T>::operator + (T element) { add(element); }

template<class T> void Lista<T>::operator += (T element) { add(element); }



//================================================================
//=
//=                METODOS
//=
//================================================================
template<class T> void Lista<T>::add(T element) {

    if(posicion >= -1 && posicion <= (dimension -2) ) {     // psoci�n = -1 es que la lista est� vac�a

        ptrLista[++posicion] = element;

    } else {

        throw "La lista est� llena";                        // Lanzamos una excepci�n para indicar que se ha intentado desbordar la lista

    }
}



#endif // LISTA_H
