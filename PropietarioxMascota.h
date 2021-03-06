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
        PropietarioxMascota();
        PropietarioxMascota( Propietario propietario, Mascota mascota, int idPropMasco );

        //gets
        Propietario* getPropietario();
        Mascota* getMascota();
        int getIdPropMasco();
};

#endif