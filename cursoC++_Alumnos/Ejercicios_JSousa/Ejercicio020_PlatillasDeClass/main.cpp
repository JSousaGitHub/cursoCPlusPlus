#include <iostream>
#include <Lista.h>
#include <Padre.h>

using namespace std;

int main() {

    // Configura la informaci�n local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");      // Acentos, moneda, formato de hora etc., la del entorno por defecto


    try {

        // Declara e inicializa una Lista
        //------------------------------------
        Lista<Padre> lista(3);     // Declara una lista para cuatro elementos;


        // A�ade los elementos a la lista
        //------------------------------------
        lista.add(Padre("Pedro", 40));          // Con la funci�n lista.add()
        lista + Padre("Ju�n", 25);              // Con el operador + implementado
        lista += Padre("Raul", 30);             // Con el operador += implementado


        // Muestra los elementos a�adidos
        //-----------------------------------
        cout << "\n ------------ A la lista plantilla se han a�adido estos elementos ------------\n"
             << "\n      lista.add(Padre(\"Pedro\", 40));          // Con la funci�n lista.add()"
             << "\n      lista + Padre(\"Ju�n\", 25);              // Con el operador + implementado"
             << "\n      lista += Padre(\"Raul\", 30);             // Con el operador += implementado" << endl;


        // Muestra los elementos de la lista
        //--------------------------------------
        cout << "\n\n\n ------------ La lista plantilla ahora tiene los siguientes elementos ------------\n"
             << "\n lista.getElement(0).getNombre() :... " << lista.getElement(0).getNombre() << "       (M�todo getElement() implementado)"
             << "\n lista[0].getEdad() :...  " << lista[0].getEdad() << "                      (Operador [] sobrecargado )\n"
             << "\n lista[1].getNombre() :...  " << lista[1].getNombre() << " --   lista[1].getEdad() :...  " << lista[1].getEdad()
             << "\n lista[2].getNombre() :...  " << lista[2].getNombre() << " --   lista[2].getEdad() :...  " << lista[2].getEdad();




        // Las siguientes l�neas muestran como funciona la lista al solicitar una operaci�n fuera de rango
        //-----------------------------------------------------------------------------------------------------

        //lista.add(Padre("Lu�s", 15));      // Esta l�nea causar� una excepci�n porque se est� intentando dar de alta un 4� elemento
        //Padre padre = lista[4];            // Esta l�nea causar� una excepci�n porque se est� intentando acceder fuera de rango

        // EStas l�neas causaran una excepci�n porque se ha solicitado un elemento de la lista estando esta vac�a
        Lista<Padre> lista2(4);
        cout << lista2[1].getNombre();

    } catch (const char mensaj[]) {

        cout << "\n\n\n\n\n"
             << "         -------  Se ha producido una excepci�n indicando:   --------\n\n"
             << "                      ===[ " << mensaj << " ]===\n\n"
             << "         ------------------------------------------------------------" << endl;

    }

    cout << endl;
    return 0;

}
