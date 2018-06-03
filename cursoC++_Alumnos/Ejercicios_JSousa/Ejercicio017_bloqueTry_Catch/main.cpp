#include <iostream>

using namespace std;

double funcion (double a, double b);


int main() {

    // Asigna la informaci�n local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    try {

         funcion(20, 0);

    } catch (int e){

        cout << "\n\n  ocurri� un error" << endl;

    }

    // Sin comentar, esta funci�n provoca la finalizaci�n del programa
    //funcion(20, 0);


    cout << "\n   Se puede ver otro ejemplo de un bloque try{}catch{} en \"Ejercicio020_PlatillasDeClass\"";


    cout  << "\n\n" << endl;

    return 0;
}


double funcion (double a, double b) {

    if (b == 0) throw 20;

    return a/b;

}
