#include <iostream>
#include "Veterinaria.h"

void menu(Veterinaria veterinaria){
    int option, id;
    string name, tipo, raza;
    float peso;
    int edad;
    string sangre;
    bool estatus;
    string fechaDef;
    do{
        cout<<"\n\n***Menu***\n============\n1. Agregar mascota\n2. Agregar propietario\n3. Imprimir Mascotas\n4. Imprimir Propietarios\n5. Editar mascota\n6. Editar propietario\n7. Eliminar mascota\n8. Eliminar propietario\n9. Numero de propietarios\n10. Relacion Propietario Mascota\n11. Estatus Mascota\n12. Imprimir Relacion propietarioxMascota\n0. Salir\nOpcion: ";
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
                cout<<"ingrese id a editar: ";
                cin>>id;
                veterinaria.editarMascota(id);
                break;
            case 6:
                cout<<"ingrese id a editar: ";
                cin>>id;
                veterinaria.editarPropietario(id);
                break;
            case 7:
                cout<<"ingrese id a eliminar: ";
                cin>>id;
                veterinaria.eliminarMascota(id);
                break;
            case 8:
                cout<<"ingrese id a eliminar: ";
                cin>>id;
                veterinaria.eliminarMascota(id);
                break;
            case 9:
                veterinaria.imprimirNumnPropietario();
                break;
            case 10:
                veterinaria.propietariosMascotas();
                break;
            case 11:
                veterinaria.statusMascota();
                break;
            case 12:
                veterinaria.imprimirRelacion();
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