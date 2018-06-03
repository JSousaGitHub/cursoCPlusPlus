#include <iostream>
#include <Deportista.h>
#include <Empleado.H>
#include <Persona.H>
#include <Print.H>

using namespace std;

int main() {

    // Asigna la informaci�n local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declarar y utilizar la clase Persona
    //-----------------------------------------
    Persona persona ("Carlos", "952O5850T", "Espa�ol");
    cout << "\n   ----- La clase persona - Persona persona (\"Carlos\", \"952O5850T\", \"Espa�ol\") -----"
         << "\n        persona.getDni() :... " << persona.getDni()
         << "\n    Npersona.getNombre() :... " << persona.getNombre() << endl;

    ////////////////////////////////////////////////////////////////////////////////
    //
    //  No podemos invocar persona.nacionalidad() al tener un acceso protected
    //
    //    cout << "Nacionalidad: " << persona1.nacionalidad() << endl;
    //
    ////////////////////////////////////////////////////////////////////////////////


    // Declarar y utilizar la clase Empleado que contiene la clase Persona
    //------------------------------------------------------------------------
    Empleado empleado ("Carmen", "43543865R", "Espa�ola", 100000, "A3585BC85267", "futbolista");
    cout << "\n\n   ----- La clase Empleado: public Persona, public Deportista -------"
         << "\n    Empleado empleado (\"Carmen\", \"43543865R\", \"Espa�ola\", 100000, \"A3585BC85267\", \"futbolista\"); -----"
         << "\n             empleado.getNombre() :... " << empleado.getNombre()
         << "\n                empleado.getDni() :... " << empleado.getDni()
         << "\n            empleado.getSalario() :... " << empleado.getSalario()
         << "\n    empleado.getSeguridadSocial() :... " << empleado.getSeguridadSocial() << endl;

        ////////////////////////////////////////////////////////////////////////////////
        // No podemos invocar "empleado1.nacionalidad()" al tener acceso protected
        //
        //    << "Nacionalidad: " << empleado1.nacionalidad()
        //
        ////////////////////////////////////////////////////////////////////////////////


    // llamamos al m�todo print() desde un tipo Empleado y desu�s desde el tipo Persona
    //-------------------------------------------------------------------------------------
    cout << "\n\n  ------ Usamos el m�todo print() de empleado y persona -------";
    cout << "\n    empleado.print() :... "<< empleado.print();      // Empleado sobrescribe el m�todo print() de Persona
    cout << "\n     persona.print() :... " << persona.print();      // Desde Persona accedemos a su propio m�todo


    // Creamos una clase Prit para mostrar datos de Empleado y Persona
    //--------------------------------------------------------------------
    cout << "\n\n\n ------- Usamos la clase Print y el m�todo mostrar() con un puntero a empleado -------"
         << "\n     Print print(&empleado);" << "  print.mostrar();\n";
    Print print(&empleado);
    print.mostrar();



    cout << endl;
    return 0;
}
