#include <iostream>
#include "Veterinaria.h"

void Veterinaria::imprimirPropietario(){
    /*for( itr = unmapPropietarios.begin(); itr != unmapPropietarios.end(); itr++ ){
        cout << itr->first << " " << itr->second;
    }*/
    for( auto x:unmapPropietarios ){
        cout<< x.first << " " << x.second.getNombre();
    }
}

void Veterinaria::imprimirNumnPropietario(){


}

void Veterinaria::imprimirMascota(){
    for (auto y:unmapMascota ){
        cout << y.first << " " << y.second.getName();
    }
}

void Veterinaria::mascotasPropietario(){


}

void Veterinaria::propietariosMascotas(){


}

void Veterinaria::nuevaMascota(){
    string name, tipo, raza;
    float peso;
    int edad;
    string tipoS; //tipo Sangre
    bool estatus;
    int id = 1;
    
    cout << "Ingrese nombre: ";
    cin >> name;
    cout << "Ingrese tipo: ";
    cin >> tipo;
    cout << "Ingrese raza: ";
    cin >> raza;
    // error en este punto - loop del menu
    cout << "Ingrese peso: ";
    cin >> peso;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Ingrese tipo de Sangre: ";
    cin >> tipoS;
    cout << "Ingrese estatus: ";
    cin >> estatus;
    string fechaDef = ( "NINGUNA" );
    Mascota mascota( name, tipo, raza, peso, edad, tipoS, estatus, fechaDef );
    unmapMascota.insert( make_pair( id++, mascota ));


}

void Veterinaria::nuevoPropietario(){
    string name;
    int id;
    string email;
    int telefono;
    cout << "Ingrese nombre: ";
    cin >> name;
    cout << "Ingrese id: ";
    cin >> id;
    cout << "Ingrese email: ";
    cin >> email;
    cout << "Ingrese telefono: ";
    cin >> telefono;
    // error en este punto - loop del menu
    Propietario propietario( name, email, telefono );
    unmapPropietarios.insert( make_pair( id, propietario ) );
}

void Veterinaria::statusMascota(Mascota mascota){
    mascota.getEstatus();

}

void Veterinaria::eliminarPropMascota(int id){
    unmapMascota.erase(id);
}

//mymap.erase ("France");             erasing by key