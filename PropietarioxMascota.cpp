#include <iostream>
#include "PropietarioxMascota.h"

PropietarioxMascota::PropietarioxMascota()
        :idPropMasco(0)
{

}

PropietarioxMascota::PropietarioxMascota( Propietario propietario, Mascota mascota, int idPropMasco ){
        this -> propietario = propietario;
        this -> mascota = mascota;
        this -> idPropMasco = idPropMasco;
}

Propietario PropietarioxMascota::getPropietario(){
        return this -> propietario;
}

Mascota PropietarioxMascota::getMascota(){
        return this -> mascota;
}