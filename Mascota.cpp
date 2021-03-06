#include "Mascota.h"

// costructor Mascota

Mascota::Mascota(){
    this -> name = ("Default");
    this -> tipo = ("Default");
    this -> raza = ("Default");
    this -> peso = 0;
    this -> edad = 0;
    this -> tipoS = ("Default");
    this -> estatus = 0;
    this -> fechaDef = ("Default");
}

Mascota::Mascota( string name, string tipo, string  raza, float peso, int edad, string sangre, bool estatus, string fechaDef){
    this -> name = name;
    this -> tipo = tipo;
    this -> raza = raza;
    this -> peso = peso;
    this -> edad = edad;
    this -> tipoS = sangre;
    this -> estatus = estatus;
    this -> fechaDef = fechaDef;
}

// sets Mascota, cada uno edita un dato de la variable mascota

void Mascota::setName( string name ){
   this -> name = name;
}

void Mascota::setRaza(string raza){
    this -> raza = raza;
}

void Mascota::setTipo(string tipo){
    this -> tipo = tipo;
}

void Mascota::setPeso(float peso){
    this -> peso = peso;
}

void Mascota::setEdad(int edad){
    this -> edad = edad;
}

void Mascota::setTipoS(string sangre){
    this -> tipoS = sangre;
}

void Mascota::setEstatus(bool estatus){
    this -> estatus = estatus; // False: muerto, True: Vivo y coleando, si tiene cola
}

void Mascota::setFechaDef(string fechaDef){
    this -> fechaDef = fechaDef;
}



// gets Mascota, cada uno obtiene un dato de la varible mascota
/*======================================================== */
string Mascota::getName(){
    return name;
}

string Mascota::getRaza(){
    return raza;
}

float Mascota::getPeso(){
    return peso;
}

int Mascota::getEdad(){
    return edad;
}

string Mascota::getTipo(){
    return tipo;
}

string Mascota::getTipoSangre(){
    return tipoS;
}

bool Mascota::getEstatus(){
    return estatus;
}

string Mascota::getFechaDefuncion(){
    return fechaDef;
}