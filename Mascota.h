#ifndef "MASCOTA_H"
#define "MASCOTA_H"
#include <iostream>

using namespace std;

class Mascota{
    private:
        string name;
        string raza;
        float peso;
        int edad;
        string tipoSangre;
        bool status;
        string fechaDefuncuin;
    public:
        inicializar(Mascota);
        void setName(string);
        void setRaza(string);
        void setPeso(float);
        void setEdad(int);
        void setTipoSangre(string);
        void setStatus(bool);
        void setFechaDefuncion(string)
        string getName();
        string getRaza();
        float getPeso();
        int getEdad();
        string getTipoSangre();
        bool getStatus();
        string getFechaDefuncion()
};

#endif