#include "Propietarios.h"

Propietario::Propietario(){//agraga datos predeterminados a la variable propietario
    this->id = 0;
    this -> name = ("Vacio");
    this -> telefono = 0;
    this -> email = ("Vacio");
}

Propietario::Propietario(string name, string email, int telefono){//agrega datos dados a la variable propietario
    this -> name = name;
    this -> telefono = telefono;
    this -> email = email;
}

void Propietario::setId( int id ){//agrega un id dado al propietario
    this -> id = id;
}

void Propietario::setNombre( string nombre ){//agrega un nombre dado al propietario
    this -> name = nombre;
}

void Propietario::setTelefono( int telefono ){//agrega un telefono dado al propietario
    this -> telefono = telefono;
}

void Propietario::setEmail( string email ){//agrega un email dado al propietario
    this -> email = email;
}

int Propietario::getId(){//obtine el id del propietario
    return this->id;
}

string Propietario::getNombre(){//obtine el nombre del propietario
    return this->name;
}

int Propietario::getTelefono(){//obtine el telefono del propietario
    return this->telefono;
}

string Propietario::getEmail(){//obtine el email del propietario
    return this->email;
}