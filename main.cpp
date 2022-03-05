#include <iostream>
#include "Veterinaria.h"

/*Los archivos veterinaria.cpp y propietarioxmascota.cpp presentan problemas*/


void menu(Veterinaria veterinaria){
    int option;
    string name, tipo, raza;
    float peso;
    int edad;
    string sangre;
    bool estatus;
    string fechaDef;
    do{
        cout<<"***Menu***\n============\n1. Agregar mascota\n2. Agragar propietario\n3. Buscar propietario\n4. Buscar mascota\n5. Editar mascota\n6. Editar propietario\n7. Eliminar mascota\n8. Eliminar propietario\n0. Salir\nOpcion: ";
        cin>>option;
        switch(option){
        case 1:
            veterinaria.nuevaMascota();
            break;
        
        case 2:
            veterinaria.nuevoPropietario();
            break;
        case 3:
            veterinaria.statusMascota();
            break;
        default:
            cout<<"lol";
            break;
        }    
    }while(option!=0);
}

int main(){
    Veterinaria veterinaria;
    menu(veterinaria);
    return 0;
}