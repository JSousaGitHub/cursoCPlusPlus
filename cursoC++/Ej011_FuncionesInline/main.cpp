#include <iostream>
using namespace std;
inline void  mi_funcion_inline() {cout << "\nInstruccion funci�n inline" ;}

int main()
{   mi_funcion_inline();
    mi_funcion_inline();
    mi_funcion_inline();

    // Equivale a : (el preprocesadror reemplaza antes de compilar
    //                la funcion inline por su implementanci�n -
    //                 -instrucciones que est�n dentro de las {}
    /*
       cout << "\nInstruccion funicion inline" ;
       cout << "\nInstruccion funicion inline" ;
       cout << "\nInstruccion funicion inline" ;
    */
    cout << "Hello world!" << endl;
    return 0;
}
