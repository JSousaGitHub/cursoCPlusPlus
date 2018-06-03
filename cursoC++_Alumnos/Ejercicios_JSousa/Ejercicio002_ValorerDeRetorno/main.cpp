#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int escogerOperacion(void);
double leer_y_retornar_numero(void);

int main() {

    //Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Obtener un valor seleccionado por el usuario
    //---------------------------------------------------
    int opcion = escogerOperacion();


    // Prepara la primera parte de la presentación final
    //------------------------------------------------------
    system("cls");
    cout << "\n"
         << "\n     **************************************"
         << "\n     *                                    *"
         << "\n     *    ";


    // En función de la opción recibida añade el texto correspondiente
    //--------------------------------------------------------------------
    if (opcion == 1) { cout << "Se ha seleccionado Sumar      ";
    } else if (opcion == 2) { cout << "Se ha seleccionado Restar     ";
    } else if (opcion == 3) { cout << "Se ha seleccionado Multiplicar";
    } else if (opcion == 4) { cout << "Se ha seleccionado Dividir    ";
    } else if (opcion == 5) { cout << "Se ha seleccionado Salir      ";
    } else { cout << "Opción desconocida            "; }


    // Añade la parte final de la presentación
    //--------------------------------------------
    cout << "  *"
         << "\n     *                                    *"
         << "\n     **************************************\n\n\n";


    cout << endl;
    return 0;

}


int escogerOperacion() {

   char opcion = '0';

    do {

        // Borra la pantalla y presenta el menú
        //-------------------------------------------
        system("cls");
        cout << "\n   1. Sumar"
             << "\n   2. Restar"
             << "\n   3. Multiplicar"
             << "\n   4. Dividir"
             << "\n   5. Salir"
             << "\n\n --- Escoger:...  ";

        // Espera la introducción de un dato
        //-------------------------------------
        opcion = getche();

        // Si la opción no es correcta lo indica y maneja la situación
        //---------------------------------------------------------------
        if(!isdigit(opcion) || opcion < '1' || opcion > '5') {

            system("cls");
            cout << "\n"
                 << "\n     **************************************"
                 << "\n     *                                    *"
                 << "\n     *    Teclear una opción válida       *"
                 << "\n     *                                    *"
                 << "\n     **************************************";

                 // Espera la pulsación de una tecla
                //-------------------------------------
                cout << "\n Pulsar una tecla"; getch();
                cout << "\r                 \r";

        }


    } while ((opcion < '1') || (opcion  > '5'));


    return atoi(&opcion);

}

