#include <iostream>
#include <sstream>

using namespace std;

//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Pantalla {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string tipo;
    private: string resolucion;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Pantalla() {

        tipo = "";
        resolucion = "";
    }

     public: Pantalla(string tipo, string resolucion ) {

        this->tipo = tipo;
        this->resolucion = resolucion;

     }

    ~Pantalla() { }


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setTipo(string tipo) { this->tipo = tipo;}
    public: string getTipo(void) { return tipo;}
    public: void setResolucion(string resolucion) { this->resolucion = resolucion;}
    public: string getResolucion(void) { return resolucion;}


}; //Pantalla {



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Ordenador {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string marca;
    private: Pantalla pantalla;         // Ordenador contendr� su su tipo "Pantalla"


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Ordenador() {

        marca = "";
        pantalla = Pantalla();

    }

     public: Ordenador(string marca_, Pantalla pantalla_ ) {

        marca = marca_;
        this->pantalla = pantalla_;

     }

    ~Ordenador() { }


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setMarca(string marca) { this->marca = marca;}
    public: string getMarca(void) { return marca;}
    public: void setPantalla(Pantalla pantalla) { this->pantalla = pantalla;}
    public: Pantalla getPantalla(void) { return pantalla;}


    //================================================================
    //=
    //=                M�TODOS
    //=
    //================================================================
    string toString(void) {

        return "\n\n  Marca:... " + marca + "    Tipo:... " + pantalla.getTipo() + "    Resoluci�n:... " + pantalla.getResolucion();

    }


}; //Ordenador {



//****************************************************************
//*
//*
//*
//****************************************************************
int main() {

    //Asigna la informaci�n local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // declara e inicializa un tipo Pantalla
    //---------------------------------------------
    Pantalla pantalla1("VGA Led", "20''");

    // Declara e inicializa un tipo Ordenador
    //--------------------------------------------
    string marca = "Hewlen Packard";
    Ordenador ordenador1;
    ordenador1.setMarca(marca);
    ordenador1.setPantalla(pantalla1);

    // Utiliza el m�todo toString()
    //----------------------------------
   cout << ordenador1.toString();


    cout << "\n\n" <<  endl;
    return 0;
}
