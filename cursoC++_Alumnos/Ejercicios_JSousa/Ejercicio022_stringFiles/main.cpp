#include <iostream>
#include <fstream>
#include <locale>

using namespace std;


int main() {

    //Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    //=============================================
    // Crea o abre un archivo para escritura
    //=============================================
    ofstream salidaFichero("SePuedeBorrar.txt");                                        // Abre o crea el archivo
    if (!salidaFichero) { cout << "\n  El fichero no ha podido abrirse"; return 0;}   // Comprueba si hay algún error

    // Escribe texto en el archivo
    //--------------------------------
    cout << "\n\n ------------- Creamos un archivo con este texto -------------\n\n";
    salidaFichero << "Esto es un pequeño archivo de texto. \r\n Y esto es la segunda línea";
    cout << "    Esto es un pequeño archivo de texto. \n     Y esto es la segunda línea";

    // Cierra el archivo
    //---------------------
    salidaFichero.close();            // cerrar el archivo


    //===================================================================
    // abre el archivo anterior para leer sus datos en formato texto
    //===================================================================
    ifstream entradaFichero("SePuedeBorrar.txt");                                       // Abre el archivo para leer
    if (!entradaFichero) { cout << "\n\n  El fichero no ha podido abrirse"; return 0;}  // Comprueba si hay algún error

    // Lee texto desde el archivo
    //--------------------------------
    char textoArchivo[80];
    cout << "\n\n\n\n  ------ Lectura textual del contenido del archivo ------- \n\n     ";
    while (!entradaFichero.eof()) { entradaFichero >> textoArchivo; cout << textoArchivo << " ";}   // En modo texto algunos caracteres se moldean


    //====================================================================
    // Lee el contenido del archivo anterior en formato binario
    //====================================================================
    entradaFichero.seekg(0, ios_base::beg);     // Movemos el puntero al principio del archivo
    cout << "\n\n\n\n  ------ Lectura binaria del contenido del archivo ------- \n\n     ";

    // Lee datos desde el archivo
    //--------------------------------
    char car;
    while (entradaFichero) { entradaFichero.get(car); cout << car; if(car == '\n') {cout << "     ";} }


    //========================
    // Cierra el archivo
    //========================
    salidaFichero.close();


    cout << "\n\n" << endl;
    return 0;



}

