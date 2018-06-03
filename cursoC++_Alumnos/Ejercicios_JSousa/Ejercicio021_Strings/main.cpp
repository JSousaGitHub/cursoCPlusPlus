#include <iostream>
#include <iomanip>
#include <locale>
#include <conio.h>

using namespace std;

int main() {

    //Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto

    //=============================================
    // Indica que hacen los formatos de salida
    //=============================================
    cout << "\n  --------- Los manipuladores std::... pueden formatear la salida. Por ejemplo: --------- \n\n" << endl;
    cout << "        Manipulador        " << "             Propósito                  " << "      Entrada/Salida\n"
         << "---------------------------------------------------------------------------------------------------\n"
         << "  dec                        " << " Da formato decimal a datos numéricos     " << " Entrada y Salida\n"
         << "  endl                       " << " Carácter nuevalinea y vuelca el stream   " << " Salida\n"
         << "  ends                       " << " Saca un carácter nulo                    " << " Salida\n"
         << "  flush                      " << " Vuelca un stream                         " << " Salida\n"
         << "  hex                        " << " Formato hexadecimal a datos numéricos    " << " Entrada y Salida\n"
         << "  oct                        " << " Formato octal a datos numéricos          " << " Entrada y Salida\n"
         << "  resetiosflags(long indic)  " << " Desactiva indicadores dados en indic     " << " Entrada y Salida\n"
         << "  setbase(mt base)           " << " Fija como base el valor de base          " << " Salida\n"
         << "  setfill(int car)           " << " Carácter de relleno el valor de car      " << " Entrada y Salida\n"
         << "  setiosflag(long indic)     " << " Activa indicadores \"indic\"             " << "   Entrada y Salida\n"
         << "  setprecision(int p)        " << " Cifras que van tras el punto decimal     " << " Entrada y Salida\n"
         << "  setw (int a)               " << " Amplitud del campo = \"a\"               " << "   Entrada y Salida\n"
         << "  ws                         " << " Ignora espacios iniciales                " << " Entrada\n"
         << endl;


    // Espera la pulsación de una tecla
    //-------------------------------------
    cout << "\n Pulsar una tecla"; getch();
    cout << "\r                 \r";


    //=========================================================================
    //
    // Declara una array de valores con con los que trabajar y los muestra
    //
    //=========================================================================
    double data [] = {347.25, 56.2356, 124.50, 456.56, 1500.23};
    double total = 0.0;

    // Configuración de los formatos de salida
    //----------------------------------------------
    cout.precision(2);
    cout.setf(ios::fixed);


    // Muestra los valores del array
    //-----------------------------------
    cout << "\n --------- Valores mostrados con algunos manipuladores como  cout.precision(2) o setw(15) ---------\n\n";
    for (int c =0; c < 5; c++) {

        cout << "   " << setw(15) << data[c] << endl;    // setw( X ) muestra un número mínimo de caracteres, si el valor no alcanza rellena con espacios

        total += data[c];

    }


    // Crea una línea al final de todos los valores
    //--------------------------------------------------
    cout.fill('-');                                             // Causa que el espacio se rellene con los caracteres "-"
    cout << "       |" << setw(15) << "|" << endl;              // Imprime "|" + "|" rellenando este último hasta los 15 caracteres con "-"


    // Muestra el total de la cuenta
    //------------------------------------
    cout.fill(' ');
    cout << setw(18) << total << endl;


    // Espera la pulsación de una tecla
    //-------------------------------------
    cout << "\n Pulsar una tecla"; getch();
    cout << "\r                 \r";


    //===============================================================
    // Explica en pantalla lo que hacen las secuencias de escape
    //===============================================================
    cout << "\n\n  ----- Estas son algunas de las secuencias de escape de C++ -----\n\n"
         << "   \\a" << "  Campana (alerta)\n"
         << "   \\b" << "  Retroceso\n"
         << "   \\f" << "  Avance de página (No afecta a la presentación, pero realiza la operación adecuada en la impresora. )\n"
         << "   \\n" << "  Nueva línea\n"
         << "   \\r" << "  Retorno de carro\n"
         << "   \\t" << "  Tabulación horizontal\n"
         << "   \\v" << "  Tabulación vertical ( No afecta a la presentación, pero realiza la operación adecuada en la impresora. )\n"
         << "   \\'" << "  Comilla simple\n"
         << "   \\\"" << "  Comillas dobles\n"
         << "   \\\\" << "  Barra diagonal inversa\n"
         << "   \\?" << "  Signo de interrogación literal en los casos en los que se malinterpretaría como un trígrafo.\n"
         << "   \\o oo" << "  Carácter ASCII en notación octal (por ejemplo \\033 = ESC)\n"
         << "   \\x hh" << "  Carácter ASCII en notación hexadecimal\n"
         << "   \\x hhhh" << "  Carácter Unicode en notación hexadecimal si se utiliza en caracteres anchos o cadena Unicode.\n\n";

    cout << "\n               ---------- Un Ejemplo -----------\n\n         "
         << "\\x54\\x65\\x78\\x74\\x6F\\x20\\x67\\x65\\x6E\\x65\\x72\\x61\\x64\\x6F\\x20\\x63\\x6F\\x6E\\x20 \n         "
         << "\\x73\\x65\\x63\\x75\\x65\\x6E\\x63\\x69\\x61\\x73\\x20\\x64\\x65\\x20\\x65\\x73\\x63\\x61\\x70\\x65"
         << "\n\n         "
         << "\x54\x65\x78\x74\x6F\x20\x67\x65\x6E\x65\x72\x61\x64\x6F\x20\x63\x6F\x6E\x20"
         << "\x73\x65\x63\x75\x65\x6E\x63\x69\x61\x73\x20\x64\x65\x20\x65\x73\x63\x61\x70\x65\n\n";



    cout << endl;
    return 0;

}
