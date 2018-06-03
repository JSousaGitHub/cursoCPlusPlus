#include <iostream>

using namespace std;


inline void mi_funcion_inline() {cout << "\nInstrucciones de la funci�n InLine";}

int main() {

    //Asigna la informaci�n local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declara varias funciones seguidas que el compilador sustituir� literalemnte por lo que hay en su implementaci�n
    mi_funcion_inline();
    mi_funcion_inline();
    mi_funcion_inline();

    // Equivale a : {el preprocesador reemplaza antes de compilar
    //                 la funci�n inline por su implementac�n -
    //                  -insrucciones que est�n dentro de las {} )
    /*
        cout << "\nInstacia de la funci�n InLine";
        cout << "\nInstacia de la funci�n InLine";
        cout << "\nInstacia de la funci�n InLine";
    */

    cout << endl;
    return 0;

}
