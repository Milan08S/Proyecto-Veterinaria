all: compilar clean
compilar: Mascota Propietarios PropietarioxMascota Veterinaria main
	g++ -o Salida Veterinaria.o Mascota.o Propietarios.o PropietarioxMascota.o main.o
Veterinaria: Veterinaria.cpp Veterinaria.h Mascota.h Propietarios.h PropietarioxMascota.h
	g++ -c Veterinaria.cpp
PropietarioxMascota: PropietarioxMascota.cpp PropietarioxMascota.h
	g++ -c PropietarioxMascota.cpp
Propietarios: Propietarios.cpp Propietarios.h
	g++ -c Propietarios.cpp
Mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
main: main.cpp Veterinaria.h
	g++ -c main.cpp
clean:
	@echo "Removing junk files..."
	del *.o