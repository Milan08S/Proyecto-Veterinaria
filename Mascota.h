#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Mascota{
    private:
        string name;
        string raza;
        string tipo;
        float peso;
        int edad;
        string tipoS; //tipo Sangre
        bool estatus;
        string fechaDef; //fecha defuncion

    public:
        //contructores
        Mascota();
        Mascota( string, string, string, float, int, string, bool, string); //todos los datos

        //declaracion set
        void setName( string );
        void setRaza( string );
        void setTipo( string );
        void setPeso( float );
        void setEdad( int ); 
        void setFechaDef( string );
        void setTipoS( string );
        void setEstatus( bool );

        //declaracion get();
        string getName();
        float getPeso();
        string getTipo();
        bool getStatus();
        string getRaza();
        int getEdad();
        string getTipoSangre();
        bool getEstatus();
        string getFechaDefuncion();
};

#endif