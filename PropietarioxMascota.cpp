#include <iostream>
#include "PropietarioxMascota.h"

Propietario PropietarioxMascota::getPropietario(){
        cout<<propietario.getId();
        cout<<propietario.getNombre();
        cout<<propietario.getEmail();
        cout<<propietario.getTelefono();
        return propietario;
}
