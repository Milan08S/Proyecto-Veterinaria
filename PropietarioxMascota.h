#include <iostream>
#include "Propietarios.h"
#include "Mascota.h"

class PropietarioxMascota{
    private:
        Propietario propietario;
        Mascota mascota;
        int idPropMasco;

    public:
        Propietario getPropietario();
        Mascota getMascota();
        int getIdPropMasco();
};;