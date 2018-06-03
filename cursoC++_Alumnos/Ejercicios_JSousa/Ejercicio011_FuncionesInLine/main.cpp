#include <iostream>

using namespace std;


inline void mi_funcion_inline() {cout << "\nInstrucciones de la función InLine";}

int main() {

    //Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declara varias funciones seguidas que el compilador sustituirá literalemnte por lo que hay en su implementación
    mi_funcion_inline();
    mi_funcion_inline();
    mi_funcion_inline();

    // Equivale a : {el preprocesador reemplaza antes de compilar
    //                 la función inline por su implementacón -
    //                  -insrucciones que están dentro de las {} )
    /*
        cout << "\nInstacia de la función InLine";
        cout << "\nInstacia de la función InLine";
        cout << "\nInstacia de la función InLine";
    */

    cout << endl;
    return 0;

}
