#include <iostream>
#include <ClassHijo.h>
#include <ClassPadre.h>
#include <Factoria.h>

using namespace std;




int main() {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //   Crear una clase servidora Factoria que permita crear un objeto según el tipo de datos parametrizado.
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Configura la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");      // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Creación de una instancia de "ClassPadre" con la plantilla y sin ella
    //-------------------------------------------------------------------------------
    ClassPadre *pPadre = Factoria::getInstance<ClassPadre>("Pedro", 35);
    ClassPadre *pPadre2 = new ClassPadre("Pablo", 30);

    cout << "\n   -------- Creación de una instancia de \"ClassPadre\" con la plantilla y sin ella --------\n"
         << "\n     ClassPadre *pPadre = Factoria::getInstance<ClassPadre>(\"Pedro\", 35)"
         << "\n     ClassPadre *pPadre2 = new ClassPadre(\"Pablo\", 30)" << endl;


    // Creación de una instancia de "ClassHijo" con la plantilla de un parámetro
    //-------------------------------------------------------------------------------
    ClassHijo *pHijo = Factoria::getInstance<ClassHijo>(100);

    cout << "\n\n   ------- Creación de una instancia de \"ClassHijo\" con la plantilla de un parámetro --------\n"
         << "\n     ClassHijo *pHijo = Factoria::getInstance<ClassHijo>(100)\n\n";


    // Muestra los datos asociados a los objetos
    //----------------------------------------------
    cout << "\n\n  ------- Datos disponibles asociados al padre y al hijo --------"
         << "\n\n           pPadre->getEdad() :... " << pPadre->getEdad() << "    pPadre->getNombre() :... " << pPadre->getNombre()
         << "\n\n     pHijo->getPagaSemanal() :... " << pHijo->getPagaSemanal() << "\n\n\n";


    // Libera la memoria asignada
    //----------------------------------
    delete pPadre;                      // de la forma habitual
    Factoria::freeMemory(pPadre2);      // Con la plantilla static
    Factoria::freeMemory(pHijo);        // Liberamos la memoria del objeto hijo con la plantilla

    cout << "\n  ------- Liberación de la memoria con la plantilla y sin ella --------\n"
         << "\n     delete pPadre;                    // de la forma habitual"
         << "\n     Factoria::freeMemory(pPadre2);    // Con la plantilla static"
         << "\n     Factoria::freeMemory(pHijo);      // Liberamos la memoria del objeto hijo con la plantilla\n\n";


    cout << endl;
    return 0;
}
