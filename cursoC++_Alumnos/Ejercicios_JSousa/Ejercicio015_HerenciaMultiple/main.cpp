#include <iostream>
#include <string.h>
using namespace std;


//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Persona {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    private: string nombre;
    private: string dni;
    protected: string nacionalidad;



    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Persona() {

        nombre = "";
        dni = "";
        nacionalidad = "";

    }


     public: Persona(string nombre, string dni, string nacionalidad) {

        this->nombre = nombre;
        this->dni = dni;
        this->nacionalidad = nacionalidad;

    }


    ~Persona() {

        // Para liberar la memoria que se ha resrevado y que esté apuntando por
        // puntero que sea tributo de esta clase
        // delete ptrarray_ma;

        // ----- En caso de utilizarse el puntero, es necesario crear un constructor copia ------"

    }


    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setNombre(string nombre) { this->nombre = nombre;}
    public: string getNombre(void) { return nombre;}
    public: void setDni(string dni) { this->dni = dni;}
    public: string getDni(void) {return dni;}
    public: void setNacionalidad(string nacionalidad) {this->nacionalidad = nacionalidad;}
    public: string getNacionalidad(void) {return nacionalidad;}



    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    public: string print() { return "     desde la clase Persona"; }



};//class Persona {



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Deportista {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    string deporte;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Deportista() {

        deporte = "";

    }

     public: Deportista(string deporte) {

        this->deporte = deporte;

    }

    ~Deportista() {  }



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setDeporte(string deporte) { this->deporte = deporte;}
    public: string getDeporte(void) { return deporte;}

};



//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Empleado: public Persona, public Deportista {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    double salario;
    string seguridadSocial;




    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Empleado() {

        salario = 0;
        seguridadSocial = "";

    }

     public: Empleado(string nombre, string dni, string nacionalidad, double salario, string seguridadSocial, string deporte)
                        :Persona(nombre, dni, nacionalidad), Deportista(deporte) {

        this->salario = salario;
        this->seguridadSocial = seguridadSocial;

    }

    ~Empleado() {  }



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setSalario(double salario) { this->salario = salario;}
    public: double getSalario(void) { return salario;}
    public: void setSeguridadSocial(string seguridadSocial) { this->seguridadSocial = seguridadSocial;}
    public: string getSeguridadSocial(void) {return seguridadSocial;}


    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    public: string print() { return "     desde la clase Empleado"; }




};//class Empleado: private Persona {







//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
//
//                                  C L A S S
//
//--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__--__
class Print {

    //================================================================
    //=
    //=                 ATRIBUTOS
    //=
    //================================================================
    Empleado *empleado;


    //================================================================
    //=
    //=           CONSTRUCTORES / DESTRUCTORES
    //=
    //================================================================
    public: Print() {

        empleado = 0;

    }

     public: Print(Empleado *empleado) {

        this->empleado = empleado;

    }

    ~Print() {  }



    //================================================================
    //=
    //=                PROPIEDADES
    //=
    //================================================================
    public: void setSalario(Empleado *empleado) { this->empleado = empleado;}


    //================================================================
    //=
    //=                MÉTODOS
    //=
    //================================================================
    public: void mostrar() {

        cout << "\n   DNI:... " << empleado->getDni()
             << "\n   Nombre:... " << empleado->getNombre()
             << "\n   Nacionalidad:... " << empleado->getNacionalidad() << endl;


    }


};//class Empleado: private Persona {






//****************************************************************
//*
//*
//*
//**********************************************************
int main() {

    // Asigna la información local del entorno
    //--------------------------------------------
    setlocale(LC_ALL, "");  // Acentos, moneda, formato de hora etc., la del entorno por defecto


    // Declarar y utilizar la clase Persona
    //-----------------------------------------
    Persona persona ("Carlos", "952O5850T", "Español");
    cout << "\n   ----- La clase persona - Persona persona (\"Carlos\", \"952O5850T\", \"Español\") -----"
         << "\n        persona.getDni() :... " << persona.getDni()
         << "\n    Npersona.getNombre() :... " << persona.getNombre() << endl;

    ////////////////////////////////////////////////////////////////////////////////
    //
    //  No podemos invocar persona.nacionalidad() al tener un acceso protected
    //
    //    cout << "Nacionalidad: " << persona1.nacionalidad() << endl;
    //
    ////////////////////////////////////////////////////////////////////////////////


    // Declarar y utilizar la clase Empleado que contiene la clase Persona
    //------------------------------------------------------------------------
    Empleado empleado ("Carmen", "43543865R", "Española", 100000, "A3585BC85267", "futbolista");
    cout << "\n\n   ----- La clase Empleado: public Persona, public Deportista -------"
         << "\n    Empleado empleado (\"Carmen\", \"43543865R\", \"Española\", 100000, \"A3585BC85267\", \"futbolista\"); -----"
         << "\n             empleado.getNombre() :... " << empleado.getNombre()
         << "\n                empleado.getDni() :... " << empleado.getDni()
         << "\n            empleado.getSalario() :... " << empleado.getSalario()
         << "\n    empleado.getSeguridadSocial() :... " << empleado.getSeguridadSocial() << endl;

        ////////////////////////////////////////////////////////////////////////////////
        // No podemos invocar "empleado1.nacionalidad()" al tener acceso protected
        //
        //    << "Nacionalidad: " << empleado1.nacionalidad()
        //
        ////////////////////////////////////////////////////////////////////////////////


    // llamamos al método print() desde un tipo Empleado y desués desde el tipo Persona
    //-------------------------------------------------------------------------------------
    cout << "\n\n  ------ Usamos el método print() de empleado y persona -------";
    cout << "\n    empleado.print() :... "<< empleado.print();      // Empleado sobrescribe el método print() de Persona
    cout << "\n     persona.print() :... " << persona.print();      // Desde Persona accedemos a su propio método


    // Creamos una clase Prit para mostrar datos de Empleado y Persona
    //--------------------------------------------------------------------
    cout << "\n\n\n ------- Usamos la clase Print y el método mostrar() con un puntero a empleado -------"
         << "\n     Print print(&empleado);" << "  print.mostrar();\n";
    Print print(&empleado);
    print.mostrar();



    cout << endl;
    return 0;
}
