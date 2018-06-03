#include <iostream>

using namespace std;

struct Persona {

    string dni;
    string nombre;

};

class Perro {

    public: string nombre;
    public: string raza;

};


int main() {

    //Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declara variables y muestra sus valores y direcciones en memoria
    //----------------------------------------------------------------------
    int numHijos = 3;
    int *ptrInt = &numHijos;

    cout << "\n  ------- Declaramos un int y un puntero a este -------  \n"
         << "\n   int numHijos = 3;  int *ptrInt = &numHijos;\n"
         << "\n            Valor de numHijos :... " << numHijos << "      Dirección &numHijos :... "  << &numHijos
         << "\n      ptrInt apunta a *ptrInt :... " << *ptrInt <<  "      Contenido de ptrInt :... "  << ptrInt;

    // Declara otro int y muestra valores y direcciones en memoria
    //----------------------------------------------------------------
    int otroInt = 45;
    ptrInt = &otroInt;
    cout << "\n\n\n\n  ------- Declaración de un nuevo int pero usamos el mismo puntero que antes -------  \n"
         << "\n   int otroInt = 45;  ptrInt = &otroInt;\n"
         << "\n             Valor de otroInt :... " << otroInt << "      Dirección &otroInt :... "  << &otroInt
         << "\n      ptrInt apunta a *ptrInt :... " << *ptrInt <<  "     Contenido de ptrInt :... "  << ptrInt;


    // Otro ejemplo con un float
    //-----------------------------------------------------
    float salario = 300000.45F;
    float *ptrFloat = &salario;
    cout << "\n\n\n\n  ------- Otro ejemplo con un tipo float -------  \n"
         << "\n   float salario = 300000.45F;  float *ptrFloat = &salario;\n"
         << "\n                 Valor de salario :... " << salario << "        Dirección &salario :... "  << &salario
         << "\n      ptrFloat apunta a *ptrFloat :... " << *ptrFloat <<  "     Contenido de ptrFloat :... "  << ptrFloat;


    // Declara y visualiza una instancia de la estructura Persona
    //---------------------------------------------------------------
    Persona yo = {"12345", "Manuel"};
    Persona *ptrPersona = &yo;
    cout << "\n\n\n\n  ------- Una estructura Persona, dos formas de obtener los valores -------  \n"
         << "\n   Persona yo = {\"12345\", \"Manuel\"};   Persona *ptrPersona = &yo;\n"
         << "\n      (*ptrPersona).nombre :...  " << (*ptrPersona).nombre
         << "\n        ptrPersona->nombre :...  " << ptrPersona->nombre
         << "\n           ptrPersona->dni :...  " << ptrPersona->dni << endl;


    // Asigna nuevo valor y muestra su contenido
    //----------------------------------------------
    ptrPersona->nombre = "Carlos";
    cout << "\n\n\n  ------- Cambiamos el nombre en Persona -------  \n"
         << "\n   ptrPersona->nombre = \"Carlos\";\n"
         << "\n      ptrPersona->nombre :...  " << ptrPersona->nombre
         << "\n         ptrPersona->dni :...  " << ptrPersona->dni;


    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  ptrFloat = ptrInt; // están apuntando a direcciones de memoria que contiene tipos de datos diferentes
    //
    /////////////////////////////////////////////////////////////////////////////////////////////////////////


    cout << "\n\n" << endl;
    return 0;
}
