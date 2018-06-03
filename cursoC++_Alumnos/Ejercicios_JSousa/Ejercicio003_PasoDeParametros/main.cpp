#include <iostream>

using namespace std;

struct Persona{

    int edad;
    string nombre_completo;

};

void funcion_parametros_valor(int, double, string);
void funcion_para_array_salarios(double []);
void funcion_parametro_valor_struct(Persona);



int main() {

    //Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declara/Inicializa tipos básicos
    //------------------------------------
    int numero = 10;
    double salario = 12000.35;
    string nombre = "Manuel Acevedo";
    double salarios[4] = {1200000, 340000, 480000, 550000};

    // Declara/Inicializa tipos de usuario
    //---------------------------------------
    Persona cliente;
    cliente.edad = 30;
    cliente.nombre_completo = "Antonio Ramírez";

    // Muestra los valores actuales de la estructura
    //--------------------------------------------------
    cout << "\n  ---- Los valores de la estructura cliente son  ----"
         << "\n  cliente.nombre_completo :... " << cliente.nombre_completo
         << "\n             cliente.edad :... " << cliente.edad << endl;

    // Pasa la estructura por valor, no se producen cambios
    //---------------------------------------------------------
    funcion_parametro_valor_struct(cliente);
    cout << "\n\n  ---- pasamos cliente por valor a una función, los valores no cambian ----"
         << "\n  cliente.nombre_completo :... " << cliente.nombre_completo
         << "\n             cliente.edad :... " << cliente.edad << endl;

    // Pasa los valores por valor, no se producen cambios
    //--------------------------------------------------------
    funcion_parametros_valor(numero, salario, nombre);
    cout << "\n\n  ---- Los valores pasados por valor tampoco cambian ----"
         << "\n   numero :... " << numero
         << "\n  Salario :... " << salario
         << "\n   Nombre :... " << nombre << endl;

    // Pasa el nombre de un array, (se comporta como un puntero y se producen cambios)
    //---------------------------------------------------------------------------------
    cout << "\n\n  ---- Los valores actuales del array salrios[] son ----\n";
    for(int i = 0; i < 4; i++) {

        cout << "\n    salario[" << i << "]:...  " << salarios[i];

    }
    funcion_para_array_salarios(salarios);
    cout << "\n\n  ---- Pasamos el nombre del array a una función y se producen cambios ---- \n";
    for(int i = 0; i < 4; i++) {

        cout << "\n    salario[" << i << "]:...  " << salarios[i];

    }
    cout << "      (El nombre del array se comporta como un puntero)";

    cout << "\n" << endl;
    return 0;

}

void funcion_parametros_valor(int numero, double salario, string nombre) {

    numero = 12000;
    salario = 100000000.45;
    nombre = "pepe";


}

void funcion_para_array_salarios(double salarios[]) {

    salarios[0] = salarios[0] * 2;
    salarios[1] = salarios[1] * 2;
    salarios[2] = salarios[2] * 2;
    salarios[3] = salarios[3] * 2;
    salarios[4] = salarios[4] * 2;

}

void funcion_parametro_valor_struct(Persona cliente){

    cliente.edad = 70;
    cliente.nombre_completo = "José María";

}
