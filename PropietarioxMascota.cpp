#include <iostream>
#include "PropietarioxMascota.h"

PropietarioxMascota::propietarioxMascota():idPropMasco(0){}

PropietarioxMascota::propietarioxMascota( Propietario propietario, Mascota mascota, int idPropMasco ){
        this -> propietario = propietario;
        this mascota = mascota;
        this idPropMasco = idPropMasco;
}

Propietario PropietarioxMascota::getPropietario(){
        cout<<propietario.getId();
        cout<<propietario.getNombre();
        cout<<propietario.getEmail();
        cout<<propietario.getTelefono();
}
Mascota PropietarioxMascota::getEstatusMasc(Mascota mascota){
        cout<<mascota.getStatus();
}
