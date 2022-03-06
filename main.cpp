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
        cout<<"\n\n***Menu***\n============\n1. Agregar mascota\n2. Agregar propietario\n3. Imprimir Mascotas\n4. Imprimir Propietarios\n5. Buscar propietario\n6. Buscar mascota\n7. Editar mascota\n8. Editar propietario\n9. Eliminar mascota\n10. Eliminar propietario\n11. Numero de propietarios\n0. Salir\nOpcion: ";
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
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                veterinaria.imprimirNumnPropietario();
                break;
            case 0:
                cout << "\nGracias por utilizar nuestro sistema, vuelva pronto :)\n";
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