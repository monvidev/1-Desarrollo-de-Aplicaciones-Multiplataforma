#include <iostream>
#include "cadena.h"

class Hotel{
    
    private: //atributos y métodos que NO queremos que sean accesibles desde el exterior
        
        //*** ATRIBUTOS ***//

        unsigned int id_hotel; 
        float puntuacion_hotel;
        int num_estrellas;
        float puntuacion_ponderada;
        Cadena nombre_hotel;
        Cadena localizacion_hotel;
    

    public: //atributos y métodos que SÍ queremos que sean accesibles desde el exterior
        
        //===================//
        //*** CONSTRUCTOR ***//
        //===================//

        Hotel(unsigned int id_hotel, float puntuacion_hotel, int estrellas_hotel, Cadena nombre_hotel, Cadena localizacion_hotel);
        Hotel();


        //==================//
        //*** DESTRUCTOR ***//
        //==================//

        ~Hotel();


        //===================//
        //*** MODULOS-SET ***//
        //===================//

        void setIdHotel(unsigned int id_a_insertar);
        void setEstrellas(int estrellas_a_insertar);
        void setPuntuacion(float puntuacion_a_insetar);
        void setPuntuacionPonderada(float puntuacion_ponderada);
        void setNombreHotel(const Cadena nombre);
        void setLocalizacionHotel(const Cadena localizacion);


        //===================//
        //*** MODULOS-GET ***//
        //===================//

        int getIdHotel();
        int getEstrellas();
        float getPuntuacion();
        float getPuntuacionPonderada();
        Cadena getNombreHotel();
        Cadena getLocalizacion();


        //=====================//
        //*** MODULOS-FRONT ***//
        //=====================//

        void printHotel();


        //====================//
        //*** MODULOS-BACK ***//
        //====================//

        void insertar_datos_hotel (unsigned int &id_automatico, Cadena &nombre_a_insertar, Cadena &localizacion_a_insertar, float &puntuacion_a_insertar, int &estrellas_a_insertar);

        void copiar_hotel(Hotel &hotel_origen);

        void operator=(Hotel &hotel_a_asignar);

        float calcular_puntuacion_ranking(int estrellas, float puntuacion);
};