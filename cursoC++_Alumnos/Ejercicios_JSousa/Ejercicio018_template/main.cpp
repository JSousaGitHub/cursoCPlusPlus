#include <iostream>

using namespace std;

template <class T1, class T2>
void imprime_numero(T1 num1, T2 num2);


int main()
{

    // implementar métodos permitan  imprimir dos números
     imprime_numero(1, 7);
     cout << endl;
     imprime_numero("uno", "siete");


    cout << "\n" << endl;
    return 0;
}

template <class T1, class T2>
void imprime_numero(T1 num1, T2 num2) {

    cout << "\n    Primer valor es :... " << num1;
    cout << "\n   Segundo valor es :... " << num2;

}
