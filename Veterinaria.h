#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <iostream>
#include "Propietarios.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"

#include <utility>
#include <unordered_map>
#include <iomanip>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::unordered_map;
class Veterinaria
{
private:
    vector<PropietarioxMascota>propietariosXMascota;
    unordered_map< int, Propietario >unmapPropietarios;
    unordered_map< int, Mascota >unmapMascota;

public:
    void imprimirPropietario();
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