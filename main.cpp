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
        cout<<"***Menu***\n============\n1. Agregar mascota\n2. Agregar propietario\n3. Imprimir Mascotas\n4. Imprimir Propietarios\n5. Buscar propietario\n6. Buscar mascota\n7. Editar mascota\n8. Editar propietario\n9. Eliminar mascota\n10. Eliminar propietario\n0. Salir\nOpcion: ";
        cin>>option;
        switch( option ){
            case 1:
                veterinaria.nuevaMascota();
                break;        
            case 2:
                veterinaria.nuevoPropietario();
                break;
            case 3:
                veterinaria.imprimirMascota();
                break;
            case 4:
                veterinaria.imprimirPropietario();
                break;
            default:
                break;
        }    
    }while(option!=0);
}

int main(){
    Veterinaria veterinaria;
    menu(veterinaria);
    return 0;
}