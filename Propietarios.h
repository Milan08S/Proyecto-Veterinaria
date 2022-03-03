#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Propietario{
    private:
        string name;
        int id;
        string email;
        int telefono;
    public:
        //cosntructor
        Propietario(int, string, string, int);

        //sets
        void setId(int);
        void setNombre(string);
        void setEmail(string);
        void setTelefono(int);

        //gets
        int getId();
        string getNombre();
        string getEmail();
        int getTelefono();
};

#endif