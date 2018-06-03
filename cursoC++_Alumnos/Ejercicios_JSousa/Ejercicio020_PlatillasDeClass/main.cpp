#include <iostream>
#include <Lista.h>
#include <Padre.h>

using namespace std;

int main() {

    // Configura la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");      // Acentos, moneda, formato de hora etc., la del entorno por defecto


    try {

        // Declara e inicializa una Lista
        //------------------------------------
        Lista<Padre> lista(3);     // Declara una lista para cuatro elementos;


        // Añade los elementos a la lista
        //------------------------------------
        lista.add(Padre("Pedro", 40));          // Con la función lista.add()
        lista + Padre("Juán", 25);              // Con el operador + implementado
        lista += Padre("Raul", 30);             // Con el operador += implementado


        // Muestra los elementos añadidos
        //-----------------------------------
        cout << "\n ------------ A la lista plantilla se han añadido estos elementos ------------\n"
             << "\n      lista.add(Padre(\"Pedro\", 40));          // Con la función lista.add()"
             << "\n      lista + Padre(\"Juán\", 25);              // Con el operador + implementado"
             << "\n      lista += Padre(\"Raul\", 30);             // Con el operador += implementado" << endl;


        // Muestra los elementos de la lista
        //--------------------------------------
        cout << "\n\n\n ------------ La lista plantilla ahora tiene los siguientes elementos ------------\n"
             << "\n lista.getElement(0).getNombre() :... " << lista.getElement(0).getNombre() << "       (Método getElement() implementado)"
             << "\n lista[0].getEdad() :...  " << lista[0].getEdad() << "                      (Operador [] sobrecargado )\n"
             << "\n lista[1].getNombre() :...  " << lista[1].getNombre() << " --   lista[1].getEdad() :...  " << lista[1].getEdad()
             << "\n lista[2].getNombre() :...  " << lista[2].getNombre() << " --   lista[2].getEdad() :...  " << lista[2].getEdad();




        // Las siguientes líneas muestran como funciona la lista al solicitar una operación fuera de rango
        //-----------------------------------------------------------------------------------------------------

        //lista.add(Padre("Luís", 15));      // Esta línea causará una excepción porque se está intentando dar de alta un 4º elemento
        //Padre padre = lista[4];            // Esta línea causará una excepción porque se está intentando acceder fuera de rango

        // EStas líneas causaran una excepción porque se ha solicitado un elemento de la lista estando esta vacía
        Lista<Padre> lista2(4);
        cout << lista2[1].getNombre();

    } catch (const char mensaj[]) {

        cout << "\n\n\n\n\n"
             << "         -------  Se ha producido una excepción indicando:   --------\n\n"
             << "                      ===[ " << mensaj << " ]===\n\n"
             << "         ------------------------------------------------------------" << endl;

    }

    cout << endl;
    return 0;

}
