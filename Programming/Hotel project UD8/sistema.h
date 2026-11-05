#include <iostream>
#include "hotel.h"

using namespace std;

class Sistema{
    private:

        // Atributos para gestionar el vector dinámico de hoteles del sistema
        
        Hotel *vector_hoteles;
        int dim_vector_hoteles;
        int util_vector_hoteles;

        Hotel *vector_hoteles_aux;
        int dim_vector_hoteles_aux;
        int util_vector_hoteles_aux;

        Hotel *vector_hoteles_resutlados;
        int dim_vector_hoteles_resultados;
        int util_v_resultados;

        void redimensionar_vector(int utiles_vector, Hotel* &vector_hoteles, int &dim_vector);
        void aumentar_diemnsion(int nueva_dim_v, Hotel* &vector_h, int &dim_vector);
        void disminuir_dimension(int nueva_dim_v, Hotel* &vector_h, int &dim_vector);

    public:

        //===================//
        //*** CONSTRUCTOR ***//
        //===================//

        Sistema();


        //==================//
        //*** DESTRUCTOR ***//
        //==================//

        ~Sistema();


        //=====================//
        //*** MODULOS-FRONT ***//
        //=====================//

        void front_menu_main();
        int front_eleccion_menu(int rango);
        void front_menu_sistema();
        unsigned int front_pedir_id(unsigned int &id);
        void front_pedir_nombre(Cadena &nombre);
        void front_pedir_localizacion(Cadena &localizacion);
        void front_pedir_puntuacion(float &puntuacion);
        void front_pedir_estrellas(int &estrellas);
        void front_ranking_puntuacionPonderada();
        void imprimir_hoteles_sistema(Hotel* &vector_hoteles, int util_vector);
        void imprimir_MenuOpcionesModificar();
        void imprimir_MenuIntroducirHotel();
        void imprimir_MenuOrdenar();
        void imprimir_MenuBuscar();
        void imprimir_MenuEliminar();


        //=====================//
        //*** CONTROLADORES ***//
        //=====================//

        void ctrl_imprimir_hoteles_sistema(Hotel* &vector_hoteles, int util_vector);
        void ctrl_agregar_hotel_sistema(unsigned int &id_a_asignar);
        void ctrl_modificar_hotel();
        void ctrl_cambiar_nombre_hotel(int posicion);
        void ctrl_cambiar_localizacion_hotel(int posicion);
        void ctrl_cambiar_estrellas_hotel(int posicion);
        void ctrl_cambiar_puntuacion_hotel(int posicion);
        void ctrl_eliminar_hotel();
        void ctrl_ordenar_hotel();
        void ctrl_ordenar_por_estrellas();
        void ctrl_ordenar_por_puntuacion();
        void ctrl_buscar_hotel();
        void ctrl_buscar_por_id();
        void ctrl_buscar_por_estrellas();
        void ctrl_buscar_por_localizacion();
        void ctrl_buscar_por_nombre();
        void ctrl_buscar_por_puntuacion_mayor_que();
        void ctrl_reiniciar_sistema(unsigned int &id);
        void ctrl_ranking_puntuacionPonderada();


        //====================//
        //*** MODULOS-BACK ***//
        //====================//


        bool buscar_por_id(unsigned int &id, Hotel &hotel);
        bool buscar_por_estrellas(int &estrellas);
        bool buscar_por_localizacion(Cadena &localizacion);
        bool buscar_por_nombre(Cadena &nombre);
        bool buscar_por_puntuacion_mayor_que(float &puntuacion);
        bool buscar_hotel_general(unsigned int id, int &posicion);
        void agregar_hotel_en_vector_hoteles_al_final(int &dimension, int &utiles, Hotel* &vector_hoteles, Hotel &hotel_insertar);
        void agregar_hotel_en_vector_hoteles_al_principio(int &dimension, int &utiles, Hotel* &vector_hoteles, Hotel &hotel_insertar);
        void eliminar_hotel_en_vector_hoteles(int posicion);
        void eliminar_hoteles_es_vector_hoteles(float margen);
        void copiar_vector_de_hoteles_en_vector_resultado(Hotel* &v_origen, int util_v_origen, Hotel* &v_destino, int &util_v_destino, int &dim_v_destino);
        void ordenar_vector_hoteles_por_estrellas(Hotel* &vector, int utiles);
        void ordenar_vector_hoteles_por_puntuacion(Hotel* &vector, int utiles);
        void ordenar_raking_puntuacionPonderada(Hotel* &vector, int util_vector, int cantidad_hoteles);
        void inicializar_vector(unsigned int &id);
};