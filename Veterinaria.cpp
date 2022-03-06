#include <iostream>
#include "Veterinaria.h"

void Veterinaria::imprimirPropietario(){
    cout << "\n\nPropietariosd\n===================\nID          NOMBRE\n===================\n";
    for( auto x:unmapPropietarios ){
        cout<< x.first << " " << x.second.getNombre();
    }
}

void Veterinaria::imprimirNumnPropietario(){
    cout << unmapPropietarios.size();

}

void Veterinaria::imprimirMascota(){
    cout << "\n\nMascotas\n===================\nID          NOMBRE\n===================\n";
    for (auto y:unmapMascota ){
        cout << y.first << " " << y.second.getName();
    }
}

void Veterinaria::mascotasPropietario(){


}

void Veterinaria::propietariosMascotas(){
    //propietariosMascotas (unmapPropietarios, unmapMascota, 1);

}

void Veterinaria::nuevaMascota(){
    string name, tipo, raza;
    float peso;
    int edad;
    string tipoS; //tipo Sangre
    bool estatus;
    int id;
    
    cout << "Ingrese ID: ";
    cin >> id;
    cin.ignore();
    cout << "Ingrese nombre: ";
    getline( cin, name );
    cout << "Ingrese tipo: ";
    getline( cin, tipo );
    cout << "Ingrese raza: ";
    getline( cin, raza );
    cout << "Ingrese peso: ";
    cin >> peso;
    cout << "Ingrese edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingrese tipo de Sangre: ";
    getline( cin, tipoS );
    cout << "Ingrese estatus: ";
    cin >> estatus;
    cin.ignore();
    string fechaDef = ( "NINGUNA" );
    Mascota mascota( name, tipo, raza, peso, edad, tipoS, estatus, fechaDef );
    unmapMascota.insert( make_pair( id, mascota ) );
}

void Veterinaria::nuevoPropietario(){
    string name;
    int id;
    string email;
    int telefono;
    cin.ignore();
    cout << "Ingrese nombre: ";
    getline( cin, name );
    cout << "Ingrese id: ";
    cin >> id;
    cin.ignore();
    cout << "Ingrese email: ";
    getline( cin, email );
    cout << "Ingrese telefono: ";
    cin >> telefono;
    // error en este punto - loop del menu
    Propietario propietario( name, email, telefono );
    unmapPropietarios.insert( make_pair( id, propietario ) );
}

void Veterinaria::statusMascota(Mascota mascota){
    mascota.getEstatus();

}

void Veterinaria::eliminarMascota(int id){
    unmapMascota.erase(id);
}

void Veterinaria::eliminarPropietario(int id){
    unmapPropietarios.erase(id);
}
