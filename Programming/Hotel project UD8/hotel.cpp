#include <iostream>
#include "hotel.h"

using namespace std;

        //*** MODULOS-CONSTRUCTORES ***//

Hotel::Hotel(unsigned int id_hotel, float puntuacion_hotel, int num_estrellas, Cadena nombre_hotel, Cadena localizacion_hotel)
{
    this->id_hotel = id_hotel;
    this->puntuacion_hotel = puntuacion_hotel;
    this->num_estrellas = num_estrellas;
    this->nombre_hotel = nombre_hotel;
    this->localizacion_hotel = localizacion_hotel;
    this->puntuacion_ponderada = id_hotel;
}

Hotel::Hotel()
{
    
}


        //*** MODULOS-DESTRUCTORES ***//

Hotel::~Hotel()
{
    
}


        //*** MODULOS-SET ***//

void Hotel::setIdHotel(unsigned int id_a_insertar)  
{
    this->id_hotel = id_a_insertar;                        
}

void Hotel::setPuntuacion(float puntuacion_a_insetar)
{
    this->puntuacion_hotel = puntuacion_a_insetar;
}

void Hotel::setEstrellas(int estrellas_a_insertar)
{
    this->num_estrellas = estrellas_a_insertar;
}

void Hotel::setPuntuacionPonderada(float puntuacion_ponderada)
{
    this->puntuacion_ponderada = puntuacion_ponderada;
}

void Hotel::setNombreHotel(const Cadena nombre)
{
    this->nombre_hotel = nombre;
}

void Hotel::setLocalizacionHotel(const Cadena localizacion)
{
    this->localizacion_hotel = localizacion;
}


        //*** MODULOS-GET ***//

int Hotel::getIdHotel()
{
    return id_hotel;
}

Cadena Hotel::getNombreHotel()
{
    return nombre_hotel;
}

Cadena Hotel::getLocalizacion()
{
    return localizacion_hotel;
}

float Hotel::getPuntuacionPonderada()
{
    return this->puntuacion_ponderada;
}

float Hotel::getPuntuacion()
{
    return puntuacion_hotel;
}

int Hotel::getEstrellas()
{
    return num_estrellas;
}


        //*** MODULOS-FRONT ***//

void Hotel::printHotel()
{
    cout << "--------- HOTEL ---------" << endl;
    cout << "ID: " << getIdHotel() << endl;
    cout << "Nombre: ";
    getNombreHotel().printCadena();
    cout << "\n";
    cout << "Localizacion: ";
    getLocalizacion().printCadena();
    cout << "\n";
    cout << "Puntuacion: " << getPuntuacion() << endl;
    cout << "Estrellas: " << getEstrellas() << endl;
    cout << "Puntuacion Ponderada: " << getPuntuacionPonderada() << endl;
}

        //*** MODULOS-BACK ***//

void Hotel::insertar_datos_hotel(unsigned int &id_automatico, Cadena &nombre_a_insertar, Cadena &localizacion_a_insertar, float &puntuacion_a_insertar, int &estrellas_a_insertar)
{
    setIdHotel(id_automatico);
    setNombreHotel(nombre_a_insertar);
    setLocalizacionHotel(localizacion_a_insertar);
    setPuntuacion(puntuacion_a_insertar);
    setEstrellas(estrellas_a_insertar);
}

float Hotel::calcular_puntuacion_ranking(int estrellas, float puntuacion)
{
    float puntuacion_ponderada = (((estrellas * 0.4) * 2) + puntuacion * 0.6);

    return puntuacion_ponderada;
}

        //*** OPERADORES ***//

void Hotel::operator=(Hotel &hotel_a_asignar)
{
    this->setIdHotel(hotel_a_asignar.getIdHotel());
    this->setNombreHotel(hotel_a_asignar.getNombreHotel());
    this->setLocalizacionHotel(hotel_a_asignar.getLocalizacion());
    this->setPuntuacion(hotel_a_asignar.getPuntuacion());
    this->setEstrellas(hotel_a_asignar.getEstrellas());
    this->setPuntuacionPonderada(hotel_a_asignar.getPuntuacionPonderada());
}