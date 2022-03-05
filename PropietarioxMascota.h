#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H
#include <iostream>
#include "Propietarios.h"
#include "Mascota.h"

class PropietarioxMascota{
    private:
        Propietario propietario;
        Mascota mascota;
        int idPropMasco;

    public:
        //constructor
        int propietarioxMascota( Propietario propietario, Mascota mascota, int idPropMasco );

        //gets
        Propietario getPropietario();
        Mascota getMascota();
        int getIdPropMasco();
        Mascota getEstatusMasc(Mascota mascota);
};

#endif