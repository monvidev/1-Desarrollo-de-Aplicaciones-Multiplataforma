#include <iostream>
#include "sistema.h"

#define RED_COLOR "\033[1;31m"
#define ORANGE "\033[1;33m"
#define GREEN_COLOR "\033[1;32m"
#define BLUE "\033[1;34m"
#define CIAN "\033[1;36m"
#define PURPLE "\033[1;35m"
#define RESET "\033[0m"


//===================//
//*** CONSTRUCTOR ***//
//===================//

Sistema::Sistema()
{
    cout << RED_COLOR << "DEBUG: Construyendo el objeto sistema" << RESET << endl;

    dim_vector_hoteles = 1;
    util_vector_hoteles = 0;

    vector_hoteles = new Hotel[dim_vector_hoteles];

    dim_vector_hoteles_resultados = 1;
    util_v_resultados = 0;

    vector_hoteles_resutlados = new Hotel[dim_vector_hoteles_resultados];

    if (vector_hoteles == 0)
    {
        cerr << "ERROR: No hay espacio en memoria" << endl;
        exit(-1);
    }
}


//==================//
//*** DESTRUCTOR ***//
//==================//

Sistema::~Sistema()
{
    cout << RED_COLOR << "DEBUG: Desstruyendo el objeto sistema" << RESET << endl;

    //Aquí viene la destrucción del vector dinámico

    delete [] vector_hoteles;
    delete [] vector_hoteles_resutlados;
}


//=====================//
//*** MODULOS-FRONT ***//
//=====================//

void Sistema::front_menu_main()
{
    cout << CIAN;
    cout << "PROGRAMA DE GESTIÓN DE HOTELES: CRISTOBOOKING" << endl;
    cout << "===Menu principal===" << endl;
    cout << "   [-1] Reiniciar sistema." << endl;
    cout << "   [1] Imprimir hoteles del sistema." << endl;
    cout << "   [2] Agregar hotel al sistema." << endl;
    cout << "   [3] Eliminar hotel del sistema." << endl;
    cout << "   [4] Modificar hotel." << endl;
    cout << "   [5] Buscar hotel." << endl;
    cout << "   [6] Ordenar hoteles del sistema." << endl;
    cout << "   [7] Ranking por puntuacion ponderada." << endl;
    cout << "   [0] Salir." << endl;
    cout << RESET;
}

int Sistema::front_eleccion_menu(int rango)
{
    int eleccion = -1;
    
    do
    {
        cout << "Introduzca una de las opciones del menú: ";
        cin >> eleccion;
        cin.ignore();
        cout << endl;
    }
    while(eleccion < -1 || eleccion > rango);
    
    return eleccion;
}

void Sistema::front_menu_sistema()
{
    // Variables

    unsigned int id_a_asignar = 1;
    int rango_main_menu = 7;
    bool salir = false;
    
    // Inicialozamos el vector del hoteles

    inicializar_vector(id_a_asignar);


    do
    {
        front_menu_main();

        int eleccion = front_eleccion_menu(rango_main_menu);
        
        switch (eleccion)
        {
            case -1:
                ctrl_reiniciar_sistema(id_a_asignar);
            case 1:
                ctrl_imprimir_hoteles_sistema(this->vector_hoteles, this->util_vector_hoteles);
            break;
            case 2:
                ctrl_agregar_hotel_sistema(id_a_asignar);
            break;
            case 3:
                ctrl_eliminar_hotel();
            break;
            case 4:
                ctrl_modificar_hotel();
            break;
            case 5:
                ctrl_buscar_hotel();
            break;
            case 6:
                ctrl_ordenar_hotel();
            break;
            case 7:
                ctrl_ranking_puntuacionPonderada();
            break;
            case 0:
                salir = true;
            break;
            default:
                cout << "Opción no válida, inténtelo de nuevo." << endl;
            break;
        }
    }
    while(salir == false);
}

unsigned int Sistema::front_pedir_id(unsigned int &id)
{
    cout << "Introduzca el id:" << "\n";
    cin >> id;

    return id;
}

void Sistema::front_pedir_nombre(Cadena &nombre)
{
    char nombre_aux[51];

    cout << "Introduzca el nombre del hotel:" << "\n";
    cin.getline(nombre_aux, 51);

    nombre = nombre_aux;
}

void Sistema::front_pedir_localizacion(Cadena &localizacion)
{
    char localizacion_aux[51];

    cout << "Introduzca la localizacion del hotel:" << "\n";
    cin.getline(localizacion_aux, 51);

    localizacion = localizacion_aux;
}

void Sistema::front_pedir_puntuacion(float &puntuacion)
{
    cout << "Introduca la puntuacion del hotel:" << "\n";
    cin >> puntuacion;

    while (puntuacion < 0 || puntuacion > 10)
    {
        cout << "Introduzca de nuevo la puntuacion" << "\n";
        cin >> puntuacion;
    }
}

void Sistema::front_pedir_estrellas(int &estrellas)
{
    cout << "Introduzca las estrellas del hotel:" << "\n";
    cin >> estrellas;

        while (estrellas < 0 || estrellas > 5)
    {
        cout << "Introduzca de nuevo las estrellas" << "\n";
        cin >> estrellas;
    }
}

void Sistema::front_ranking_puntuacionPonderada()
{
    cout << "===Ranking Puntuacion Ponderada===" << endl;
    cout << "\n";
}

void Sistema::imprimir_hoteles_sistema(Hotel* &vector_hoteles, int util_vector)
{
    if (util_vector == 0)
    {
        cout << "El vector de hoteles esta vacio." << "\n";
    }
    else
    {
        for (int i = 0; i < util_vector; i++)
        {
            vector_hoteles[i].printHotel();
        }
    }
}

void Sistema::imprimir_MenuOpcionesModificar()
{
    cout << "===Menu modificar hotel===" << endl;
    cout << "   [1] Modificar nombre." << endl;
    cout << "   [2] Modificar localizacion." << endl;
    cout << "   [3] Modifciar estrellas." << endl;
    cout << "   [4] Modificar puntuacion." << endl;
}

void Sistema::imprimir_MenuIntroducirHotel()
{
    cout << "===Menu introducir hoteles===" << endl;
    cout << "   [1] Introducir al final." << endl;
    cout << "   [2] Introducir al principio." << endl;
}

void Sistema::imprimir_MenuOrdenar()
{
    cout << "===Menu ordenar hoteles===" << endl;
    cout << "   [1] Ordenar por puntuacion." << endl;
    cout << "   [2] Ordenar por estrellas." << endl;
}

void Sistema::imprimir_MenuBuscar()
{
    cout << "===Menu buscar hotel===" << endl;
    cout << "   [1] Buscar por id." << endl;
    cout << "   [2] Buscar por nombre." << endl;
    cout << "   [3] Buscar por localizacion." << endl;
    cout << "   [4] Buscar por estrellas." << endl;
    cout << "   [5] Buscar por puntuacion." << endl;
}

void Sistema::imprimir_MenuEliminar()
{
    cout << "===Menu eliminar hoteles===" << endl;
    cout << "   [1] Eliminar un hotel." << endl;
    cout << "   [2] Eliminar varios hoteles." << endl;
}



//=====================//
//*** CONTROLADORES ***//
//=====================//

void Sistema::ctrl_imprimir_hoteles_sistema(Hotel* &vector_hoteles, int util_vector)
{
    imprimir_hoteles_sistema(vector_hoteles, util_vector);
}

void Sistema::ctrl_agregar_hotel_sistema(unsigned int &id_a_asignar)
{
    // Varaibles

    int opcion = 0;

    Cadena nombre;
    Cadena localizacion;
    int num_estrellas = 0;
    float puntuacion = 0;

    Hotel hotel = Hotel(id_a_asignar, puntuacion, num_estrellas, nombre, localizacion);


    // Insertamos valores a los hoteles creados
    
    id_a_asignar++;
    front_pedir_nombre(nombre);
    front_pedir_localizacion(localizacion);
    front_pedir_estrellas(num_estrellas);
    front_pedir_puntuacion(puntuacion);


    // Insertamos los datos en el hotel auxiliar

    hotel.insertar_datos_hotel(id_a_asignar, nombre, localizacion, puntuacion, num_estrellas);


    // Agregamos el hotel al vector del hoteles

    imprimir_MenuIntroducirHotel();
    cout << "Seleccione como quiere introducir el hotel" << "\n";
    cin >> opcion;

    if (opcion == 1)
    {
        agregar_hotel_en_vector_hoteles_al_final(this->dim_vector_hoteles, this->util_vector_hoteles, this->vector_hoteles, hotel);
    }
    else if (opcion == 2)
    {
        agregar_hotel_en_vector_hoteles_al_principio(this->dim_vector_hoteles, this->util_vector_hoteles, this->vector_hoteles, hotel);
    }
    else
    {
        cout << "No se ha seleccionado ninguna opción" << "\n";
    }
}

void Sistema::ctrl_modificar_hotel()
{
    // Varaibles

    int opcion = 0;
    int posicion = 0;
    unsigned int id = 0;
    bool encontrado = false;


    // Selección del hotel a modificar

    imprimir_hoteles_sistema(this->vector_hoteles, util_vector_hoteles);
    cout << "Seleccione que hotel quiere modificar escribiendo el id del hotel." << "\n";
    cin >> id;

    if (buscar_hotel_general(id, posicion))
    {
        // Introducción de la opción

        imprimir_MenuOpcionesModificar();

        cout << "Seleccione que desea modificar." << endl;
        cin >> opcion;


        // Estructura de selección del atributo a modificar

        if (opcion == 1)
        {
            ctrl_cambiar_nombre_hotel(posicion);
        }
        else if (opcion == 2)
        {
            ctrl_cambiar_localizacion_hotel(posicion);
        }
        else if (opcion == 3)
        {
            ctrl_cambiar_estrellas_hotel(posicion);
        }
        else if (opcion == 4)
        {
            ctrl_cambiar_puntuacion_hotel(posicion);
        }
        else
        {
            cout << "No se ha seleccionado ninguna opcion" << "\n";
        }
    }
    else
    {
        cout << "¡NO SE HA ENCONTRADO EL HOTEL" << "\n";
    }
}

void Sistema::ctrl_cambiar_nombre_hotel(int posicion)
{
    Cadena nombre;
    cin.ignore();
    front_pedir_nombre(nombre);
    vector_hoteles[posicion].setNombreHotel(nombre);
}

void Sistema::ctrl_cambiar_localizacion_hotel(int posicion)
{
    Cadena localizacion;
    cin.ignore();
    front_pedir_localizacion(localizacion);
    vector_hoteles[posicion].setLocalizacionHotel(localizacion);
}

void Sistema::ctrl_cambiar_estrellas_hotel(int posicion)
{
    float puntuacion_ponderada = 0.0;
    int num_estrellas;

    front_pedir_estrellas(num_estrellas);
    vector_hoteles[posicion].setEstrellas(num_estrellas);

    puntuacion_ponderada = vector_hoteles[posicion].calcular_puntuacion_ranking(vector_hoteles[posicion].getEstrellas(), vector_hoteles[posicion].getPuntuacion());
    vector_hoteles[posicion].setPuntuacionPonderada(puntuacion_ponderada);
}

void Sistema::ctrl_cambiar_puntuacion_hotel(int posicion)
{
    float puntuacion_ponderada = 0.0;
    float puntuacion;

    front_pedir_puntuacion(puntuacion);
    vector_hoteles[posicion].setPuntuacion(puntuacion);

    puntuacion_ponderada = vector_hoteles[posicion].calcular_puntuacion_ranking(vector_hoteles[posicion].getEstrellas(), vector_hoteles[posicion].getPuntuacion());
    vector_hoteles[posicion].setPuntuacionPonderada(puntuacion_ponderada);
}

void Sistema::ctrl_eliminar_hotel()
{
    // Varibles
    
    int opcion = 0;

    unsigned int id = 0;
    int posicion = -1;
    float margen = 0.0;

    imprimir_MenuEliminar();
    cout << "Seleccione un opcion" << "\n";
    cin >> opcion;

    if (opcion == 1)
    {
        imprimir_hoteles_sistema(this->vector_hoteles, this->util_vector_hoteles);

        cout << "\n";
        cout << "Escriba el id del hotel que quiere eliminar." << "\n";
        cin >> id;

        if (buscar_hotel_general(id, posicion))
        {
            eliminar_hotel_en_vector_hoteles(posicion);
        }
        else
        {
            cout << "¡NO SE HA ENCONTRADO EL HOTEL" << "\n";
        }
    }
    else if (opcion == 2)
    {
        imprimir_hoteles_sistema(this->vector_hoteles, this->util_vector_hoteles);

        cout << "\n";
        cout << "Escriba los hoteles que quiere eliminar con puntuacion menor que." << "\n";
        cin >> margen;
        eliminar_hoteles_es_vector_hoteles(margen);
    }
    else
    {
        cout << "No se ha seleccionado ninguna opcion" << "\n";
    }
}

void Sistema::ctrl_ordenar_hotel()
{
    // Varaibles

    int opcion = 0;


    // Estructura de selección
    
    imprimir_MenuOrdenar();
    cout << "Seleccione por que creterio desea ordenar los hoteles" << "\n";
    cin >> opcion;


    if (opcion == 1)
    {
        ctrl_ordenar_por_puntuacion();
    }
    else if (opcion == 2)
    {
        ctrl_ordenar_por_estrellas();
    }
    else
    {
        cout << "No se ha seleccionado ninguna opcion" << "\n";
    }

    
}

void Sistema::ctrl_ordenar_por_estrellas()
{
    this->util_v_resultados = 0;
    cout << "estramos copiar" << endl;
    copiar_vector_de_hoteles_en_vector_resultado(this->vector_hoteles, this->util_vector_hoteles, this->vector_hoteles_resutlados, this->util_v_resultados, this->dim_vector_hoteles_resultados);
    cout << "Entramos en el ordenar" << endl;
    ordenar_vector_hoteles_por_estrellas(this->vector_hoteles_resutlados, this->util_v_resultados);

    imprimir_hoteles_sistema(this->vector_hoteles_resutlados, this->util_v_resultados);
}

void Sistema::ctrl_ordenar_por_puntuacion()
{
    this->util_v_resultados = 0;
    cout << "estramos copiar" << endl;
    copiar_vector_de_hoteles_en_vector_resultado(this->vector_hoteles, this->util_vector_hoteles, this->vector_hoteles_resutlados, this->util_v_resultados, this->dim_vector_hoteles_resultados);
    cout << "Entramos en el ordenar" << endl;
    ordenar_vector_hoteles_por_puntuacion(this->vector_hoteles_resutlados, this->util_v_resultados);

    imprimir_hoteles_sistema(this->vector_hoteles_resutlados, this->util_v_resultados);
}

void Sistema::ctrl_buscar_hotel()
{
    // Varaibles

    this->util_v_resultados = 0;
    int opcion = 0;

    // Selección de opción
    
    imprimir_MenuBuscar();

    cout << "Selecciona una opción:" << "\n";
    cin >> opcion;


    if (opcion == 1)
    {
        ctrl_buscar_por_id();
    }
    else if (opcion == 2)
    {
        ctrl_buscar_por_nombre();
    }
    else if (opcion == 3)
    {
        ctrl_buscar_por_localizacion();
    }
    else if (opcion == 4)
    {
        ctrl_buscar_por_estrellas();
    }
    else if (opcion == 5)
    {
        ctrl_buscar_por_puntuacion_mayor_que();
    }
    else
    {
        cout << "No se ha seleccioando ninguna opcion" << "\n";
    }
}

void Sistema::ctrl_buscar_por_id()
{
    // Varaibles

    Hotel hotel;
    unsigned int id_a_buscar = 0;


    // Busque del hotel

    front_pedir_id(id_a_buscar);


    // Comprobación de si hay hoteles

    if (buscar_por_id(id_a_buscar, hotel))
    {
        hotel.printHotel();
    }
    else
    {
        cout << "¡NO HAY HOTELES" << "\n";
    } 
}

void Sistema::ctrl_buscar_por_estrellas()
{
    // Varaibles

    int estrellas_a_buscar = 0;


    // Busque del hotel

    front_pedir_estrellas(estrellas_a_buscar);


    // Comprobación de si hay hoteles

    if (buscar_por_estrellas(estrellas_a_buscar))
    {
        imprimir_hoteles_sistema(vector_hoteles_resutlados, util_v_resultados);
    }
    else
    {
        cout << "¡NO HAY HOTELES" << "\n";
    }   
}

void Sistema::ctrl_buscar_por_localizacion()
{
    // Varaibles

    Cadena localizacion_a_buscar;


    // Busque del hotel

    cin.ignore();
    front_pedir_localizacion(localizacion_a_buscar);


    // Comprobación de si hay hoteles

    if (buscar_por_localizacion(localizacion_a_buscar))
    {
        imprimir_hoteles_sistema(vector_hoteles_resutlados, util_v_resultados);
    }
    else
    {
        cout << "¡NO HAY HOTELES" << "\n";
    } 
}

void Sistema::ctrl_buscar_por_nombre()
{
    // Varaibles

    Cadena nombre_a_buscar;


    // Busque del hotel

    cin.ignore();
    front_pedir_nombre(nombre_a_buscar);


    // Comprobación de si hay hoteles

    if (buscar_por_nombre(nombre_a_buscar))
    {
        imprimir_hoteles_sistema(vector_hoteles_resutlados, util_v_resultados);
    }
    else
    {
        cout << "¡NO HAY HOTELES" << "\n";
    }
}

void Sistema::ctrl_buscar_por_puntuacion_mayor_que()
{
    // Varaibles

    float puntuacion_a_buscar = 0;


    // Busque del hotel

    front_pedir_puntuacion(puntuacion_a_buscar);


    // Comprobación de si hay hoteles

    if (buscar_por_puntuacion_mayor_que(puntuacion_a_buscar))
    {
        imprimir_hoteles_sistema(vector_hoteles_resutlados, util_v_resultados);
    }
    else
    {
        cout << "¡NO HAY HOTELES" << "\n";
    }
}

void Sistema::ctrl_reiniciar_sistema(unsigned int &id)
{
    inicializar_vector(id);
}

void Sistema::ctrl_ranking_puntuacionPonderada()
{
    // Varaibles

    int cantidad_hoteles = 3;

    front_ranking_puntuacionPonderada();

    if (cantidad_hoteles <= this->util_vector_hoteles)
    {
        copiar_vector_de_hoteles_en_vector_resultado(this->vector_hoteles, this->util_vector_hoteles, this->vector_hoteles_resutlados, this->util_v_resultados, this->dim_vector_hoteles_resultados);
        ordenar_raking_puntuacionPonderada(this->vector_hoteles_resutlados, this->util_v_resultados, cantidad_hoteles);
    }

    imprimir_hoteles_sistema(this->vector_hoteles_resutlados, this->util_v_resultados);
}


//====================//
//*** MODULOS-BACK ***//
//====================//

bool Sistema::buscar_por_id(unsigned int &id, Hotel &hotel)
{
    bool encontrado = false;

    for (int i = 0; i < util_vector_hoteles && encontrado == false; i++)
    {
        if (vector_hoteles[i].getIdHotel() == id)
        {
            hotel = vector_hoteles[i];
            encontrado = true;
        }
    }

    return encontrado;
}

bool Sistema::buscar_por_estrellas(int &estrellas)
{
    bool encontrado = false;

    for (int i = 0; i < util_vector_hoteles; i++)
    {
        if (vector_hoteles[i].getEstrellas() == estrellas)
        {
            agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles_resultados, util_v_resultados, vector_hoteles_resutlados, vector_hoteles[i]);
            encontrado = true;

            if (util_v_resultados == dim_vector_hoteles_resultados)
            {
                redimensionar_vector(dim_vector_hoteles_resultados, vector_hoteles_resutlados, dim_vector_hoteles_resultados);
            }
        }
    }

    return encontrado;
}

bool Sistema::buscar_por_localizacion(Cadena &localizacion)
{
    bool encontrado = false;

    for (int i = 0; i < util_vector_hoteles; i++)
    {
        if (vector_hoteles[i].getLocalizacion() == localizacion)
        {
            agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles_resultados, util_v_resultados, vector_hoteles_resutlados, vector_hoteles[i]);
            encontrado = true;

            if (util_v_resultados == dim_vector_hoteles_resultados)
            {
                redimensionar_vector(dim_vector_hoteles_resultados, vector_hoteles_resutlados, dim_vector_hoteles_resultados);
            }
        }
    }

    return encontrado;
}

bool Sistema::buscar_por_nombre(Cadena &nombre)
{
    bool encontrado = false;

    for (int i = 0; i < util_vector_hoteles; i++)
    {
        if (vector_hoteles[i].getNombreHotel() == nombre)
        {
            agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles_resultados, util_v_resultados, vector_hoteles_resutlados, vector_hoteles[i]);
            encontrado = true;

            if (util_v_resultados == dim_vector_hoteles_resultados)
            {
                redimensionar_vector(dim_vector_hoteles_resultados, vector_hoteles_resutlados, dim_vector_hoteles_resultados);
            }
        }
    }

    return encontrado;
}

bool Sistema::buscar_por_puntuacion_mayor_que(float &puntuacion)
{
    bool encontrado = false;

    for (int i = 0; i < util_vector_hoteles; i++)
    {
        if (vector_hoteles[i].getPuntuacion() >= puntuacion)
        {
            agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles_resultados, util_v_resultados, vector_hoteles_resutlados, vector_hoteles[i]);
            encontrado = true;

            if (util_v_resultados == dim_vector_hoteles_resultados)
            {
                redimensionar_vector(dim_vector_hoteles_resultados, vector_hoteles_resutlados, dim_vector_hoteles_resultados);
            }
        }
    }

    return encontrado;
}

bool Sistema::buscar_hotel_general(unsigned int id, int &posicion)
{
    bool encontrado = false;

    for (posicion = 0; posicion < util_vector_hoteles && encontrado == false; posicion++)
    {
        if (vector_hoteles[posicion].getIdHotel() == id)
        {
            encontrado = true;
            posicion -= 1;
        }
    }

    return encontrado;
}

void Sistema::redimensionar_vector(int util_vector, Hotel* &vector_h, int &dim_vector)
{
    if (util_vector == dim_vector)
    {
        aumentar_diemnsion(dim_vector+1, vector_h, dim_vector);
    }
    else if (util_vector < dim_vector)
    {
        disminuir_dimension(dim_vector-1, vector_h, dim_vector);
    }
}

void Sistema::aumentar_diemnsion(int nueva_dim_v, Hotel* &vector_h, int &dim_vector)
{
    // Copia de los valores del vector original en el vector auxiliar

    vector_hoteles_aux = new Hotel[nueva_dim_v];


    // Copiamos las componentes

    for (int i = 0; i < dim_vector; i++)
    {
        vector_hoteles_aux[i] = vector_h[i];
    }


    // Borramos el vector antiguo

    delete[] vector_h;


    // Igualamos el vector principal al nuevo vector mas grande

    vector_h = vector_hoteles_aux;
    dim_vector = nueva_dim_v;
    vector_hoteles_aux = 0;
}

void Sistema::disminuir_dimension(int nueva_dim_v, Hotel* &vector_h, int &dim_vector)
{
    // Copia de los valores del vector original en el vector auxiliar

    vector_hoteles_aux = new Hotel[nueva_dim_v];


    // Copiamos las componentes

    for (int i = 0; i < nueva_dim_v; i++)
    {
        vector_hoteles_aux[i] = vector_h[i];
    }


    // Borramos el vector antiguo

    delete[] vector_h;


    // Igualamos el vector principal al nuevo vector mas grande

    vector_h = vector_hoteles_aux;
    dim_vector = nueva_dim_v;
    vector_hoteles_aux = 0;
}

void Sistema::agregar_hotel_en_vector_hoteles_al_final(int &dimension, int &utiles, Hotel* &vector_h, Hotel &hotel_insertar)
{
    // Varaibles

    float puntuacion_ponderada = 0.0;


    // Añadimos el hotel al vector de hoteles

    vector_h[utiles] = hotel_insertar;
    puntuacion_ponderada = hotel_insertar.calcular_puntuacion_ranking(hotel_insertar.getEstrellas(), hotel_insertar.getPuntuacion());
    vector_h[utiles].setPuntuacionPonderada(puntuacion_ponderada);

    
    // Aumentos de las utiles

    utiles++;


    // Redimension del vector

    redimensionar_vector(utiles, vector_h, dimension);
}

void Sistema::agregar_hotel_en_vector_hoteles_al_principio(int &dimension, int &utiles, Hotel* &vector_h, Hotel &hotel_insertar)
{
    // Varaibles

    float puntuacion_ponderada = 0.0;

    Hotel hotel_aux = vector_h[0];
    vector_h[0] = hotel_insertar;
    vector_h[utiles] = hotel_aux;


    // Aumento de las utiles

    vector_h[utiles] = hotel_insertar;
    puntuacion_ponderada = hotel_insertar.calcular_puntuacion_ranking(hotel_insertar.getEstrellas(), hotel_insertar.getPuntuacion());
    vector_h[utiles].setPuntuacionPonderada(puntuacion_ponderada);

    utiles++;


    // Redimension del vector

    redimensionar_vector(utiles, vector_h, dimension);
}

void Sistema::eliminar_hotel_en_vector_hoteles(int posisicion)
{
    this->vector_hoteles[posisicion] = this->vector_hoteles[util_vector_hoteles-1];
    this->util_vector_hoteles--;

    redimensionar_vector(this->util_vector_hoteles, this->vector_hoteles, this->dim_vector_hoteles);
    cout << dim_vector_hoteles << endl;
}

void Sistema::eliminar_hoteles_es_vector_hoteles(float margen)
{
    Hotel hotel_aux;
    this->util_v_resultados = 0;
    this->dim_vector_hoteles_resultados = 1;


    for (int i = 0; i < this->util_vector_hoteles; i++)
    {
        if (this->vector_hoteles[i].getPuntuacion() > margen)
        {
            vector_hoteles_resutlados[util_v_resultados] = vector_hoteles[i];
            util_v_resultados++;
            redimensionar_vector(this->util_v_resultados, this->vector_hoteles_resutlados, this->dim_vector_hoteles_resultados);
        }
    }

    copiar_vector_de_hoteles_en_vector_resultado(this->vector_hoteles_resutlados, this->util_v_resultados, this->vector_hoteles, this->util_vector_hoteles, this->dim_vector_hoteles);
}

void Sistema::copiar_vector_de_hoteles_en_vector_resultado(Hotel* &v_origen, int util_v_origen, Hotel* &v_destino, int &util_v_destino, int &dim_v_destino)
{
    if (util_v_destino > util_v_origen)
    {
        util_v_destino = util_v_origen;
        dim_v_destino = util_v_origen;
        redimensionar_vector(util_v_destino, v_destino, dim_v_destino);
    }

    for (int i = 0; i < util_v_origen; i++)
    {
        v_destino[i] = v_origen[i];

        if (util_v_destino < util_v_origen)
        {
            util_v_destino++;
        }

        redimensionar_vector(util_v_destino, v_destino, dim_v_destino);
    }
}

void Sistema::ordenar_vector_hoteles_por_estrellas(Hotel* &vector, int utiles)
{
    Hotel hotel_aux;
    int posicion_minima = 0;

    for (int i = 0; i < utiles-1; i++)
    {
        posicion_minima = i;

        for (int j = i+1; j < utiles; j++)
        {
            if (vector[j].getEstrellas() < vector[posicion_minima].getEstrellas())
            {
                posicion_minima = j;
            }
        }

        hotel_aux = vector[i];
        vector[i] = vector[posicion_minima];
        vector[posicion_minima] = hotel_aux;
    }
}

void Sistema::ordenar_vector_hoteles_por_puntuacion(Hotel* &vector, int utiles)
{
    Hotel hotel_aux;
    int posicion_minima = 0;

    for (int i = 0; i < utiles-1; i++)
    {
        posicion_minima = i;

        for (int j = i+1; j < utiles; j++)
        {
            if (vector[j].getPuntuacion() < vector[posicion_minima].getPuntuacion())
            {
                posicion_minima = j;
            }
        }


        hotel_aux = vector[i];
        vector[i] = vector[posicion_minima];
        vector[posicion_minima] = hotel_aux;
    }
}

void Sistema::ordenar_raking_puntuacionPonderada(Hotel* &vector, int util_vector, int cantidad_hoteles)
{
    util_v_resultados = 0;
    Hotel hotel_aux;

    for (int i = 0; i < cantidad_hoteles; i++)
    {
        for (int j = i+1; j < util_vector; j++)
        {
            if (vector[i].getPuntuacionPonderada() < vector[j].getPuntuacionPonderada())
            {
                hotel_aux = vector[i];
                vector[i] = vector[j];
                vector[j] = hotel_aux;
            }
        }

        util_v_resultados++;
    }
}

void Sistema::inicializar_vector(unsigned int &id)
{
    // Varaibles

    Cadena nombre;
    Cadena localizacion;
    this->util_vector_hoteles = 0;
    this->dim_vector_hoteles = 1;
    this->util_v_resultados = 0;
    this->dim_vector_hoteles_resultados = 1;
    id = 1;


    // Hoteles
    nombre = "Hotel Aleix";
    localizacion = "Barcelona";
    Hotel hATM(id, 8.4, 3, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hATM);

    id++;

    nombre = "Hotel Luna";
    localizacion = "Sevilla";
    Hotel hLEL(id, 5, 3, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hLEL);

    id++;

    nombre = "Hotel Iman";
    localizacion = "Granada";
    Hotel hICM(id, 6.7, 2, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hICM);

    id++;

    nombre = "Hotel Vicente";
    localizacion = "Torremolinos";
    Hotel hVOP(id, 6.8, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hVOP);

    id++;

    nombre = "Hotel Marquez";
    localizacion = "Pinospuente";
    Hotel hAMR(id, 8.7, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hAMR);

    id++;

    nombre = "Hotel Marouane";
    localizacion = "Granada";
    Hotel hMBN(id, 7.5, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hMBN);

    id++;

    nombre = "Hotel Diego";
    localizacion = "Granada";
    Hotel hDRG(id, 6.5, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hDRG);

    id++;

    nombre = "Hotel Victor Manuel";
    localizacion = "Granada";
    Hotel hVMMO(id, 7.9, 3, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hVMMO);

    id++;

    nombre = "Hotel Varela";
    localizacion = "Escocia";
    Hotel hJMVC(id, 8.8, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hJMVC);

    id++;

    nombre = "Hotel Alex";
    localizacion = "Pisos Picados";
    Hotel hAMG(id, 7.4, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hAMG);

    id++;

    nombre = "Hotel Jonatan";
    localizacion = "Almería";
    Hotel hJAHL(id, 7.7, 3, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hJAHL);

    id++;

    nombre = "Hotel Guillermo";
    localizacion = "Granada";
    Hotel hGLC(id, 6.5, 3, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hGLC);

    id++;

    nombre = "Hotel Gb";
    localizacion = "Ushuaia";
    Hotel hGMG(id, 0.2, 1, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hGMG);

    id++;

    nombre = "Hotel Pablo";
    localizacion = "Balsa Botin";
    Hotel hPRF(id, 7.8, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hPRF);

    id++;

    nombre = "Hotel Francisco";
    localizacion = "Kambumbom";
    Hotel hFGN(id, 5.999, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hFGN);

    id++;

    nombre = "Hotel Vela";
    localizacion = "Fuente Vaqueros";
    Hotel hLDVM(id, 8.7, 4, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hLDVM);

    id++;

    nombre = "Hotel Victor Montero";
    localizacion = "Granada";
    Hotel hVMG(id, 9.1, 3, nombre, localizacion);
    agregar_hotel_en_vector_hoteles_al_final(dim_vector_hoteles, util_vector_hoteles, vector_hoteles, hVMG);
}