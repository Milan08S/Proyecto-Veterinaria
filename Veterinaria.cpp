#include <iostream>
#include "Veterinaria.h"

void Veterinaria::imprimirPropietario(){
    for ( int i = 0; i < propietariosXMascota.size(); i++ )
    {
        propietariosXMascota[ i ].getPropietario();
    }
}

void Veterinaria::imprimirNumnPropietario(){


}

void Veterinaria::imprimirMascota(){

}

void Veterinaria::mascotasPropietario(){


}

void Veterinaria::propietariosMascotas(){


}

void Veterinaria::nuevaMascota(){
    string name;
    string raza;
    string tipo;
    float peso;
    int edad;
    string tipoS; //tipo Sangre
    bool estatus;
    int id = 1;
    cin >> name;
    cin >> raza;
    cin >> tipo; 
    cin >> peso;
    cin >> edad;
    cin >> tipoS;
    cin >> estatus;
    cin >> name;
    string fechaDef = ( "NINGUNA" );
    Mascota mascota( name, tipo, raza, peso, edad, tipoS, estatus, fechaDef );
    unmapMascota.insert( make_pair( id++, mascota ));


}

void Veterinaria::nuevoPropietario(){
    string name;
    int id;
    string email;
    int telefono;
    cin >> name;
    cin >> id;
    cin >> email;
    cin >> telefono;
    
    Propietario propietario( name, email, telefono );
    unmapPropietarios.insert( make_pair( id, propietario ) );
}

void Veterinaria::statusMascota(){


}

void Veterinaria::eliminarPropMascota(){


}
