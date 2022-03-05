#include <iostream>
#include "Veterinaria.h"

void menu(Veterinaria veterinaria){
    int option=0;
    string name, tipo, raza;
    float peso;
    int edad;
    string sangre;
    bool estatus;
    string fechaDef;
    do{
        cout<<"***Menu***\n============\n1. Agregar mascota\n2. Agragar propietario\n3. Buscar propietario\n4. Buscar mascota\n5. Editar mascota\n6. Editar propietario\n7. Eliminar mascota\n8. Eliminar propietario\n 0. Salir";
        switch(option){
        case 1:
            Mascota mascota(name, tipo, raza, peso, edad, sangre, estatus, fechaDef);
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