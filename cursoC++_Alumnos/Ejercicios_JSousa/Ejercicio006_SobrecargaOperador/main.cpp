// Ejercicio que suma dos números comlejos

#include <iostream>
#include <cmath>

using namespace std;


struct Complejo {

    double real;
    double imaginaria;

};


void imprimir_complejo(Complejo);
Complejo operator + (Complejo , Complejo);



int main() {

    // Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declara e inicializa dos números complejos
    //------------------------------------------------
    Complejo num1 = {3, -7};
    Complejo num2 = {7, 4};


    // Muestra la suma de dos números complejos
    //---------------------------------------------
    cout << "\n ----- Dos números complejos Complejo num1 = {3, -7};  Complejo num2 = {7, 4}; ----- \n\n       ";
    imprimir_complejo(num1);
    cout << "            ( imprimir_complejo(num1); )\n       ";
    imprimir_complejo(num2);
    cout << "            ( imprimir_complejo(num2); )\n   --------------\n      ";
    imprimir_complejo(num1 + num2);
    cout << "            ( Operador + sobrecargado ) imprimir_complejo(num1 + num2);";


    // asigna nuevos valores
    //-------------------------
    cout << "\n\n\n ---- asignamos nuevos valores ---- \n";
    cout << "\n    num1.real = 4;"; num1.real = 4;
    cout << "\n    num1.imaginaria = 8;"; num1.imaginaria = 8;
    cout << "\n    num2.real = 9;"; num2.real = 9;
    cout << "\n    num2.imaginaria = 12;"; num2.imaginaria = 12;


    // Muestra la nueva suma de dos números complejos
    //--------------------------------------------------
    cout << "\n\n\n ----- Esta es la nueva suma -----\n\n       ";
    imprimir_complejo(num1);
    cout << "\n       ";
    imprimir_complejo(num2);
    cout << "\n   --------------\n      ";
    imprimir_complejo(num1 + num2);


    cout<< "\n" << endl;
    return 0;

}


void imprimir_complejo(Complejo complejo) {

    string signo = " + j";
    if(complejo.imaginaria < 0) { signo = " - j"; }

    cout << complejo.real << signo << abs(complejo.imaginaria);

}


Complejo operator + (Complejo complejoA, Complejo complejoB) {

    return {complejoA.real + complejoB.real, complejoA.imaginaria + complejoB.imaginaria};

}
