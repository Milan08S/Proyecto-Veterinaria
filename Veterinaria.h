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
#include <cstdlib>

/*using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::unordered_map;
using std::make_pair;
using std::iterator;
using std::getline;*/
using namespace::std;


class Veterinaria{
private:
    vector<PropietarioxMascota> propietariosXMascotas;
    unordered_map< int, Propietario > unmapPropietarios;
    unordered_map< int, Mascota > unmapMascota;
public:

    void mascotasPropietario();
    void propietariosMascotas();
    void statusMascota();
    void imprimirRelacion();

    //eliminar, editar, agregar y listar propietarios y mascotas
    void eliminarMascota(int id);
    void eliminarPropietario(int id);

    void editarPropietario(int id);
    void editarMascota(int id);

    void imprimirPropietario();
    void imprimirNumnPropietario();
    void imprimirMascota();
    

    void nuevaMascota();
    void nuevoPropietario();

};

#endif