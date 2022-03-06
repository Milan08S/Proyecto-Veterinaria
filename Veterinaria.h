#ifndef VETERINARIA_H
#define VETERINARIA_H

#include <iostream>
#include "Propietarios.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"

#include <utility>
#include <unordered_map>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <iterator>
#include <map>

/*using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::unordered_map;
using std::make_pair;
using std::iterator;*/
using namespace std;

class Veterinaria{
private:
    vector<PropietarioxMascota>propietariosXMascota;
    unordered_map< int, Propietario > unmapPropietarios;
    unordered_map< int, Propietario >:: iterator itr;
    unordered_map< int, Mascota > unmapMascota;
    unordered_map< int, Mascota >:: iterator itr2;
public:
    void imprimirPropietario();
    void imprimirNumnPropietario();
    void imprimirMascota();
    void mascotasPropietario();
    void propietariosMascotas();
    void nuevaMascota();
    void nuevoPropietario();
    void statusMascota(Mascota mascota);
    void eliminarPropMascota(int id);
};

#endif