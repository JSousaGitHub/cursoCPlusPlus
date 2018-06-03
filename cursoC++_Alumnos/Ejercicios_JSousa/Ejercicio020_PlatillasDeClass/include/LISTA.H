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
    private: int posicion;      // Apuntador al último elemento insertado en la lista (-1 ningún elemento)
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
    public: void operator + (T element);                            // Añade un elemento a la lista
    public: void operator += (T element);                           // Añade un elemento a la lista




    //================================================================
    //=
    //=                METODOS
    //=
    //================================================================
    void add(T element);                    // Añade un elemento a la lista


};





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////
////
////            I M P L E M E N T A C I Ó N   D E   L A   P L A N T I L L A   L I S T A
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

    this->posicion = -1;                    // Se pone como vacía en un principio (sin ningún elemento)
    this->dimension = 1;                    // Como no hay valor para dimensión se capacidad para un solo elemento
    this->ptrlista = new T[dimension];      // Creamos la lista

}

template<class T> Lista<T>::Lista(int NumElemt) : dimension(NumElemt) {

    if (dimension < 1) this->dimension = 1;      // Al menos capacidad para aun solo elemento

    this->posicion = -1;                        // Lista vacía en un principio, no hay elemento al que apuntar
    this->ptrLista = new T[dimension];          // Crea la lista

}

template<class T> Lista<T>::Lista(const Lista &lista) {

    // Copia los elemento de lista en este objeto
    //-----------------------------------------------
    this->dimension = lista.dimension;
    this->posicion = lista.posicion;
    this->dimension = lista.dimension;

    // Crea un nuevo array vacío de tipos
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

        throw "La lista está vacía";        // Lanzamos una excepción indicando el problema

    } else {

        throw "Posición fuera de rango";        // Lanzamos una excepción indicando el problema

    }

    return T();     // Devolvemos un elemento vacío

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

    if(posicion >= -1 && posicion <= (dimension -2) ) {     // psoción = -1 es que la lista está vacía

        ptrLista[++posicion] = element;

    } else {

        throw "La lista está llena";                        // Lanzamos una excepción para indicar que se ha intentado desbordar la lista

    }
}



#endif // LISTA_H
