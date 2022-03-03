#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <iostream>
#include "Propietarios.h"
#include "Mascota.h"

#include <utility>
#include <map>
#include <iomanip>

using std::string;

class Veterinaria
{
private:
    int cobroAscensor;
    int cobroBase;
    float recargo;
    
    public:
    void imrpimirPropietario();
    void imprimirNumnPropietario();
    void imprimirMascota();
    void mascotasPropietario();
    void propietariosMascotas();
    void nuevaMascota();
    void nuevoPropietario();
    void statusMascota();
    void eliminarPropMascota();
};

#endif