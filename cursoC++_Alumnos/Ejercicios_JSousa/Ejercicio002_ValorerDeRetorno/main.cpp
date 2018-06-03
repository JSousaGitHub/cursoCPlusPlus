#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int escogerOperacion(void);
double leer_y_retornar_numero(void);

int main() {

    //Asigna la informaci�n local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Obtener un valor seleccionado por el usuario
    //---------------------------------------------------
    int opcion = escogerOperacion();


    // Prepara la primera parte de la presentaci�n final
    //------------------------------------------------------
    system("cls");
    cout << "\n"
         << "\n     **************************************"
         << "\n     *                                    *"
         << "\n     *    ";


    // En funci�n de la opci�n recibida a�ade el texto correspondiente
    //--------------------------------------------------------------------
    if (opcion == 1) { cout << "Se ha seleccionado Sumar      ";
    } else if (opcion == 2) { cout << "Se ha seleccionado Restar     ";
    } else if (opcion == 3) { cout << "Se ha seleccionado Multiplicar";
    } else if (opcion == 4) { cout << "Se ha seleccionado Dividir    ";
    } else if (opcion == 5) { cout << "Se ha seleccionado Salir      ";
    } else { cout << "Opci�n desconocida            "; }


    // A�ade la parte final de la presentaci�n
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

        // Borra la pantalla y presenta el men�
        //-------------------------------------------
        system("cls");
        cout << "\n   1. Sumar"
             << "\n   2. Restar"
             << "\n   3. Multiplicar"
             << "\n   4. Dividir"
             << "\n   5. Salir"
             << "\n\n --- Escoger:...  ";

        // Espera la introducci�n de un dato
        //-------------------------------------
        opcion = getche();

        // Si la opci�n no es correcta lo indica y maneja la situaci�n
        //---------------------------------------------------------------
        if(!isdigit(opcion) || opcion < '1' || opcion > '5') {

            system("cls");
            cout << "\n"
                 << "\n     **************************************"
                 << "\n     *                                    *"
                 << "\n     *    Teclear una opci�n v�lida       *"
                 << "\n     *                                    *"
                 << "\n     **************************************";

                 // Espera la pulsaci�n de una tecla
                //-------------------------------------
                cout << "\n Pulsar una tecla"; getch();
                cout << "\r                 \r";

        }


    } while ((opcion < '1') || (opcion  > '5'));


    return atoi(&opcion);

}

