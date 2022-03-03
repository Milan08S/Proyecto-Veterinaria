#include "Propietarios.h"
#include <iostream>

Propietario::Propietario(int id, string name, string email, int telefono){
    this -> id = id;
    this -> name = name;
    this -> telefono = telefono;
    this -> email = email;
}

void Propietario::setId( int id ){
    this -> id = id;
}

void Propietario::setNombre( string nombre ){
    this -> name = nombre;
}

void Propietario::setTelefono( int telefono ){
    this -> telefono = telefono;
}

void Propietario::setEmail( string email ){
    this -> email = email;
}

int Propietario::getId(){
    return this->id;
}

string Propietario::getNombre(){
    return this->name;
}

int Propietario::getTelefono(){
    return this->telefono;
}

string Propietario::getEmail(){
    return this->email;
}