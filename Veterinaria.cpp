#include "Veterinaria.h"

void Veterinaria::imprimirPropietario(){//muestra los propietarios en el sistema
    cout << "\n\nPropietariosd\n===================\nID          NOMBRE\n===================\n";
    for( auto x:unmapPropietarios ){
        cout<< x.first << " " << x.second.getNombre();
    }
}

void Veterinaria::imprimirNumnPropietario(){//imprime la cantidad de propietarios en el sistema
    cout << unmapPropietarios.size();

}

void Veterinaria::imprimirMascota(){//muestra las mascotas en el sistema
    cout << "\n\nMascotas\n===================\nID          NOMBRE\n===================\n";
    for (auto y:unmapMascota ){
        cout << y.first << " " << y.second.getName();
    }
}

void Veterinaria::imprimirRelacion(){
    cout << propietariosXMascotas.size();
    cout << "\n\nImpresion Propietario Mascota\n====================\n" << "Mascota       " << "Propietario\n====================\n";
    for( int i = 0; i < propietariosXMascotas.size(); i++ ){
        cout << propietariosXMascotas[ i ].getMascota()->getName() << "       " << propietariosXMascotas[ i ].getPropietario()->getNombre() << propietariosXMascotas[ i ].getIdPropMasco();
    }
}

void Veterinaria::propietariosMascotas(){
    int idPropietario, idMascota;
    cout << "\nIngrese ID de Propietario: ";
    cin >> idPropietario;
    cout << "\nIngrese ID de mascota: ";
    cin >> idMascota;
    int idPropMasc = 1 + propietariosXMascotas.size();
    PropietarioxMascota pxm = PropietarioxMascota( unmapPropietarios[ idPropietario ], unmapMascota[ idMascota ], idPropMasc );
    propietariosXMascotas.push_back( pxm );
    cout << "Se ha enlazado al propietario con la mascota";
}

void Veterinaria::nuevaMascota(){//agrega los datos de la nueva moscota creada
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
    cout << "Ingrese tipo, recuerde que hay\n1. perro\n2. gato\n3. otro\n";
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
    cout << "Ingrese estatus de Mascota: 1. Vivo\n0. Fallecido\n:";
    cin >> estatus;
    cin.ignore();
    string fechaDef = ( "NINGUNA" );
    Mascota mascota( name, tipo, raza, peso, edad, tipoS, estatus, fechaDef );
    unmapMascota.insert( make_pair( id, mascota ) );
}

void Veterinaria::nuevoPropietario(){//agrega los datos del nuevo prropietorio creado
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
    Propietario propietario( name, email, telefono );
    unmapPropietarios.insert( make_pair( id, propietario ) );
}

void Veterinaria::statusMascota(){//edita el status de una mascota
    cout << "Ingrese ID de la mascota: ";
    int id;
    string status;
    cin >> id;
    cout << "Ingrese estatus de Mascota: 1. Vivo\n2. Fallecido\n:";
    int estado;
    cin >> estado;
    unmapMascota[id].setEstatus( estado );
    if (estado==2){
        cout << "Ingrese fecha de defuncion: ";
        cin.ignore();
        getline( cin, status);
        unmapMascota[id].setFechaDef( status );
        unmapMascota[id].setEstatus( false );
    }
}

void Veterinaria::eliminarMascota(int id){//elimina una mascota segun su id
    unmapMascota.erase(id);
}

void Veterinaria::eliminarPropietario( int id ){//elimina un propietario segun su id
    unmapPropietarios.erase(id);

}

void Veterinaria::editarPropietario( int id ){//edita la informacion de un propietario sigun su id
    int option,telefono;
    string email, nombre;
    cout<< "Seleccione el valor que desee editar:\n1. Editar nombre\n2. Email\n3. Telefono\n>> ";
    cin>>option;
    switch (option){
        case 1:
            cin.ignore();
            cout<<"Digite el nuevo nombre: ";
            getline(cin,nombre);
            unmapPropietarios[id].setNombre(nombre);
            break;
        case 2:
            cin.ignore();
            cout<<"Digite el nuevo email: ";
            getline(cin,email);
            unmapPropietarios[id].setEmail(email);
            break;
        case 3:
            cout<<"Digite el nuevo telefono: ";
            cin>>telefono;
            unmapPropietarios[id].setTelefono(telefono);
            break;
        default:
            break;
    };
}

void Veterinaria::editarMascota( int id ){//edita la informacionde una mascota segun su id
    int edad, option;
    bool status;
    float peso;

    string nombre;
    cout<< "Seleccione el valor que desee editar:\n1. Nombre\n2. Edad\n3. Estatus\n4. Peso\n";
    switch (option){

        case 1:
            cout<<"Digite el nuevo nombre: ";
            getline(cin,nombre);
            unmapMascota[id].setName(nombre);
            break;
        case 2:
            cout<<"Digite la nueva edad: ";
            cin>>edad;
            unmapMascota[id].setEdad(edad);
            break;
        case 3:
            cout<<"Digite el estatus: ";
            cin>>status;
            unmapMascota[id].setEstatus(status);
            break;
        case 4:
            cout<<"Digite el peso: ";
            cin>>peso;
            unmapMascota[id].setPeso(peso);
            break;
        default:
            break;
    };
}