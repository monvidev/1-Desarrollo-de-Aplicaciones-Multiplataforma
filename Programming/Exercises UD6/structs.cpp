#include <iostream>
using namespace std;

const int DIM_NOMBRE_HOTEL = 51;
const int DIM_LOCALIZACION_HOTEL = 51;

/** PLANTILLA DEL TDA **/
/** Nos permite crear variables de este "TIPO" **/
struct Hotel{   
    unsigned int id_hotel; 
    char nombre_hotel[DIM_NOMBRE_HOTEL]; //nombre del hotel
    char localizacion[DIM_LOCALIZACION_HOTEL]; 
    float puntuacion_hotel;
    int num_estrellas;
};


//--------------------------------------------------------//
//****************** MODULOS BACK-END ********************//
//--------------------------------------------------------//

void copiar_cadena(const char origen[], char destino[], int MAX);

void agregarHotelenVectorHoteles(Hotel v_hoteles[], const Hotel hotel_auxiliar,int &util_hoteles);

void agregarHotelenVectorHotelesPorDelante(Hotel v_hoteles[], int &util_hoteles);

bool eliminarHotelenVectorHoteles(int id_a_buscar, Hotel v_hoteles[], int &util_hoteles);

int buscarHotelporID(Hotel v_hoteles[], int util_hoteles, const int id_a_buscar);

int buscarHotelporPuntuacion(Hotel v_hoteles[], const int util_hoteles, const float puntuacion_a_buscar);

int buscarHotelenVectorHotelesporNombre(Hotel v_hoteles[], const int util_hoteles, const float nombre_a_buscar[]);

int buscarHotelenVectorHotelesporLocalizacion(Hotel v_hoteles[], const int util_hoteles, const char nombre_a_buscar[]);

bool buscarHotelenVectorHotelesconPunMayorQue(float puntuacion, Hotel v_hoteles[], int util_hoteles);

void ordenarVectorHotelesporEstrellas(Hotel v_hoteles_aux, Hotel v_hoteles, const int util_hoteles);

void ordenarVectorHotelesporPuntuacion(Hotel v_hoteles_aux, Hotel v_hoteles, const int util_hoteles);


//--------------------------------------------------------//
//**************** SETS Y GETS DE HOTEL ******************//
//--------------------------------------------------------//

/**
 * @brief Módulo que obtiene el id de un HOTEL h
 * @param h (E) hotel_al_que_quiero_extraerle_el_id
 * @return El id del hotel 
 */
unsigned int getIdHotel (const Hotel &h);

/** 
 * @brief Módulo que inserta un id en un HOTEL
 * @param h (E/S) hotel_al_que_quiero_insertale_el_id
 * @param id_a_insertar(E) id que quiero insertar en el hotel
 * @pre id_a_insertar > 0
 * @post El id que quiero insertar quedará insertado dentro del hotel, perdiéndose el contenido previo del id que está del hotels
 */
void setIdHotel(Hotel &hotel_al_que_quiero_insertale_el_id, unsigned int id_a_insertar);

void get_nombre_hotel(const Hotel hotel, char nombre_a_imprimir[], const int DIM_NOMBRE_HOTEL);

void setNombreHotel(Hotel &hotel, const char nombre_hotel_a_asignar[], const int DIM_NOMBRE_HOTEL);

void get_localizacion_hotel(const Hotel &hotel, char localizacion_a_imprimir[], const int DIM_LOCALIZACION_HOTEL);

void setLocalizacionHotel(Hotel &hotel, const char localizacion_a_asignar[], const int DIM_LOCALIZACION_HOTEL);

float get_puntuacion_hotel(const Hotel &hotel);

void setPuntuacionHotel(Hotel &puntuacion_del_hotel, float puntuacion_a_insertar);

int get_estrellas_hotel(const Hotel &hotel);

void setEstrellasHotel(Hotel &estrellas_del_hotel, int estrellas);


//--------------------------------------------------------//
//******************** MODULOS FRONT *********************//
//--------------------------------------------------------//

void front_pedir_datos_Hotel_al_User(Hotel &hotel);

void espacio_insuficiente();

void imprimir_cadena(const char cad[]);

/**
 * @brief Módulo que imprime una VARIABLE DE TIPO HOTEL
 * @param h (E) La variable de tipo Hotel que quiero imprimir por pantalla
 * @pre h debería estar inicializado con datos distintos de basura
 * @post h será impreso por pantalla
 */
void imprimirHotel(const Hotel &h);

void imprimirVectorHotel(const Hotel vector_hoteles_que_quiero_imprimir[], int util_vector_hoteles_que_quiero_imprimir);

void menu_opciones();

void menu_opciones_ordenacion();

void front_pedir_id_a_buscar(int &id_a_buscar);

void front_pedir_estrellas_a_buscar(int &estrellas);

void front_pedir_nombre_a_buscar(char nombre_a_buscar[]);

void frotn_pedir_localizacion_a_buscar(char localizacion_a_buscar[]);

void front_pedir_puntuacion_a_buscar(float &puntuacion);

void pedir_id_hotel(Hotel &hotel, unsigned int id_hotel);

void pedir_nombre_hotel(Hotel &hotel, char nombre_a_introducir[]);

void pedir_localizacion_hotel(Hotel &hotel, char localizacion_del_hotel[]);

void pedir_estrellas_hotel(Hotel &hotel, int estrellas_a_introducir);

void pedir_puntuacion_hotel(Hotel &hotel, int puntuacion_a_introducir);


//--------------------------------------------------------//
//******************** CONTROLADORES *********************//
//--------------------------------------------------------//

void controlador_agregar_hotel(Hotel v_hoteles[], int &util_hoteles, const int DIM_HOTELES);

void controlador_eliminar_hotel(Hotel v_hoteles[], int &util_hoteles);

void controlador_modificar_hotel(Hotel v_hoteles[], const int util_hoteles);

void controlador_buscar_hotel(Hotel v_hoteles[], const int util_hoteles);

void controlador_ordenar_hoteles(Hotel v_hoteles[], const int util_hoteles);



int main(){
   
    Hotel h1, h2, h3; //ejemplo de declaración de variables tipo HOTEL

    setIdHotel(h1,1); // equivale a h1.id_hotel = 1;
    setPuntuacionHotel(h1, 9.1);
    //copiar_cadena("Granada", h1.localizacion, DIM_LOCALIZACION_HOTEL);
    setLocalizacionHotel(h1, "Granada", DIM_LOCALIZACION_HOTEL);
    //copiar_cadena("Hotel Cristo Rey", h1.nombre_hotel, DIM_NOMBRE_HOTEL);
    setNombreHotel(h1, "Hotel Cristo Rey", DIM_NOMBRE_HOTEL);
    setEstrellasHotel(h1, 2);

    imprimirHotel(h1);

    setIdHotel(h2,2); //equivale h2.id_hotel = 2;
    setPuntuacionHotel(h2, 4.5);
    //copiar_cadena("Albacete", h2.localizacion, DIM_LOCALIZACION_HOTEL);
    setLocalizacionHotel(h2, "Machu Picchu", DIM_LOCALIZACION_HOTEL);
    //copiar_cadena("Hotel Iniesta", h2.nombre_hotel, DIM_LOCALIZACION_HOTEL);
    setNombreHotel(h2, "Hotel Iniesta", DIM_NOMBRE_HOTEL);
    setEstrellasHotel(h2, 1);

    imprimirHotel(h2);

    setIdHotel(h3,3); // equivale a h3.id_hotel = 1500;
    setPuntuacionHotel(h3, 7.5);
    //copiar_cadena("Brunete", h3.localizacion, DIM_LOCALIZACION_HOTEL);
    setLocalizacionHotel(h3, "Checoslovaquia", DIM_LOCALIZACION_HOTEL);
    //copiar_cadena("Hotel Star", h3.nombre_hotel, DIM_LOCALIZACION_HOTEL);
    setNombreHotel(h3, "Hotel Star", DIM_NOMBRE_HOTEL);
    setEstrellasHotel(h3, 3);

    imprimirHotel(h3);


    /** VECTORES DE HOTELES **/

    const int DIM_HOTELES = 10;
    Hotel v_hoteles[DIM_HOTELES] = {h1, h2, h3};
    int util_hoteles = 3;

    int id_hotel = 4;

    int opcion = 0;

    do
    {
        menu_opciones();
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                    imprimirVectorHotel(v_hoteles, util_hoteles);
                break;
            case 2:
                    controlador_agregar_hotel(v_hoteles, util_hoteles, DIM_HOTELES);
                break;
            case 3:
                    controlador_eliminar_hotel(v_hoteles, util_hoteles);
                break;
            case 4:
                    controlador_modificar_hotel(v_hoteles, util_hoteles);
                break;
            case 5:
                    controlador_buscar_hotel(v_hoteles, util_hoteles);
                break; 
            case 6:
                    controlador_ordenar_hoteles(v_hoteles, util_hoteles);
                break;
            case 7:
                    cout << "!!Hasta la proxima, looUuser" << "\n";
                break;
        }
    }
    while(opcion != 7);


    return 0;
}


//--------------------------------------------------------//
//****************** MODULOS BACK-END ********************//
//--------------------------------------------------------//

void copiar_cadena(const char origen[], char destino[], int MAX) {
    int i = 0;
    while (i < MAX - 1 && origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}

void agregarHotelenVectorHoteles(Hotel v_hoteles[], const Hotel hotel_auxiliar,int &util_hoteles)
{
    char nombre_hotel_auxiliar[DIM_NOMBRE_HOTEL];
    char nombre_localizacion_auxiliar[DIM_LOCALIZACION_HOTEL];


    // Insertar id del hotel
    setIdHotel(v_hoteles[util_hoteles], getIdHotel(hotel_auxiliar));

    // Insertar puntuacion del hotel
    setPuntuacionHotel(v_hoteles[util_hoteles], get_puntuacion_hotel(hotel_auxiliar));

    // Insertar estrellas del hotel
    setEstrellasHotel(v_hoteles[util_hoteles], get_estrellas_hotel(hotel_auxiliar));

    // Insertar nombre del hotel
    get_nombre_hotel(hotel_auxiliar, nombre_hotel_auxiliar, DIM_NOMBRE_HOTEL);
    setNombreHotel(v_hoteles[util_hoteles], nombre_hotel_auxiliar, DIM_NOMBRE_HOTEL);

    // Insertar localización del hotel
    get_localizacion_hotel(hotel_auxiliar, nombre_localizacion_auxiliar, DIM_LOCALIZACION_HOTEL);
    setLocalizacionHotel(v_hoteles[util_hoteles], nombre_localizacion_auxiliar, DIM_LOCALIZACION_HOTEL);

    util_hoteles++;
}

void agregarHotelenVectorHotelesPorDelante(Hotel v_hoteles[], int &util_hoteles)
{
    Hotel hotel_auxiliar = v_hoteles[util_hoteles-1];

    for (int i = util_hoteles; i > 0; i--)
    {
        v_hoteles[i] = v_hoteles[i-1];
    }

    v_hoteles[0] = hotel_auxiliar;
}

bool eliminarHotelenVectorHoteles(int id_a_buscar, Hotel v_hoteles[], int &util_hoteles)
{
    // Varaibles

    Hotel hotel_auxiliar;
    int posicion_encontrado = -1;
    bool encontrado = false;
    

    posicion_encontrado = buscarHotelporID(v_hoteles, util_hoteles, id_a_buscar);

    if (posicion_encontrado != -1)
    {
        encontrado = true;

        for (int i = posicion_encontrado; i < util_hoteles; i++)
        {
            v_hoteles[posicion_encontrado] = v_hoteles[posicion_encontrado+1];
        }
    }

    util_hoteles -= 1;

    return encontrado;
}

int buscarHotelporID(Hotel v_hoteles[], const int util_hoteles, const int id_a_buscar)
{
    int i = 0;
    bool encontrado = false;
    int posicion_encontrado = -1;
    

    // Algoritmo de busqueda

    while ((i < util_hoteles) && !encontrado)
    {
        if (v_hoteles[i].id_hotel == id_a_buscar)
        {
            encontrado = true;
            posicion_encontrado = i;
        }
        else
        {
            i++;
        }
    }

    return posicion_encontrado;
}

int buscarHotelporEstrellas(Hotel v_hoteles[], const int util_hoteles, const int estrellas)
{
    int i = 0;
    bool encontrado = false;
    int posicion_encontrado = -1;
    

    // Algoritmo de busqueda

    while ((i < util_hoteles) && !encontrado)
    {
        if (v_hoteles[i].num_estrellas == estrellas)
        {
            encontrado = true;
            posicion_encontrado = i;
        }
        else
        {
            i++;
        }
    }

    return posicion_encontrado;
}

int buscarHotelenVectorHotelesporNombre(Hotel v_hoteles[], const int util_hoteles, const char nombre_a_buscar[])
{
    int i = 0;
    bool encontrado = false;
    bool igual = true;
    int posicion_encontrado = -1;
    char cadena_coparada[DIM_NOMBRE_HOTEL];
    int longitud = 0;


    // Comparamos las cadenas

    for (i = 0; i < util_hoteles && encontrado == false; i++)
    {
        copiar_cadena(v_hoteles[i].nombre_hotel, cadena_coparada, DIM_NOMBRE_HOTEL);
        igual = true;

        for (int j = 0; cadena_coparada[j] != '\0' && igual == true; j++)
        {

            if (nombre_a_buscar[j] != cadena_coparada[j])
            {
                igual = false;
                encontrado = false;
                posicion_encontrado = -1;
            }
            else if (igual == true)
            {
                encontrado = true;
                posicion_encontrado = i;
            }
        }
    }


    return posicion_encontrado;
}

int buscarHotelenVectorHotelesporLocalizacion(Hotel v_hoteles[], const int util_hoteles, const char localizacion_a_buscar[])
{
    int i = 0;
    bool encontrado = false;
    bool igual = true;
    int posicion_encontrado = -1;
    char cadena_coparada[DIM_NOMBRE_HOTEL];
    int longitud = 0;


    // Comparamos las cadenas

    for (i = 0; i < util_hoteles && encontrado == false; i++)
    {
        copiar_cadena(v_hoteles[i].localizacion, cadena_coparada, DIM_LOCALIZACION_HOTEL);
        igual = true;

        for (int j = 0; cadena_coparada[j] != '\0' && igual == true; j++)
        {

            if (localizacion_a_buscar[j] != cadena_coparada[j])
            {
                igual = false;
                encontrado = false;
                posicion_encontrado = -1;
            }
            else if (igual == true)
            {
                encontrado = true;
                posicion_encontrado = i;
            }
        }
    }


    return posicion_encontrado;
}

bool buscarHotelenVectorHotelesconPunMayorQue(float puntuacion, Hotel v_hoteles[], int util_hoteles, bool hay_hoteles)
{
    for (int i = 0; i < util_hoteles; i++)
    {
        if (v_hoteles[i].puntuacion_hotel >= puntuacion)
        {
            imprimirHotel(v_hoteles[i]);
            hay_hoteles = true;
        }
    }

    return hay_hoteles;
}

void ordenarVectorHotelesporEstrellas(Hotel v_hoteles_aux[], Hotel v_hoteles[], const int util_hoteles)
{
    // Varaibles

    Hotel hotel_aux;
    int pos_min;


    // Copia de los hoteles del vector original al auxiliar

    for (int i = 0; i < util_hoteles; i++)
    {
        v_hoteles_aux[i] = v_hoteles[i];
    }


    // Algoritmo de ordenación

    for (int i = 0; i < util_hoteles; i++)
    {
        pos_min = i;

        for (int j = i+1; j < util_hoteles; j++)
        {
            if (v_hoteles_aux[j].num_estrellas > v_hoteles_aux[pos_min].num_estrellas)
            {
                pos_min = j;
            }
        }

        hotel_aux = v_hoteles_aux[i];
        v_hoteles_aux[i] = v_hoteles_aux[pos_min];
        v_hoteles_aux[pos_min] = hotel_aux;
    }
}

void ordenarVectorHotelesporPuntuacion(Hotel v_hoteles_aux[], Hotel v_hoteles[], const int util_hoteles)
{
    // Varaibles

    Hotel hotel_aux;
    int pos_min;


    // Copia de los hoteles del vector original al auxiliar

    for (int i = 0; i < util_hoteles; i++)
    {
        v_hoteles_aux[i] = v_hoteles[i];
    }


    // Algoritmo de ordenación

    for (int i = 0; i < util_hoteles; i++)
    {
        pos_min = i;

        for (int j = i+1; j < util_hoteles; j++)
        {
            if (v_hoteles_aux[j].puntuacion_hotel > v_hoteles_aux[pos_min].puntuacion_hotel)
            {
                pos_min = j;
            }
        }

        hotel_aux = v_hoteles_aux[i];
        v_hoteles_aux[i] = v_hoteles_aux[pos_min];
        v_hoteles_aux[pos_min] = hotel_aux;
    }
}


//--------------------------------------------------------//
//**************** SETS Y GETS DE HOTEL ******************//
//--------------------------------------------------------//

unsigned int getIdHotel (const Hotel &h){
    int id_a_devolver;
    id_a_devolver = h.id_hotel;
    return id_a_devolver;
}

void setIdHotel(Hotel &hotel_al_que_quiero_insertale_el_id, unsigned int id_a_insertar){
    hotel_al_que_quiero_insertale_el_id.id_hotel = id_a_insertar;
}

void get_nombre_hotel(const Hotel hotel, char nombre_a_imprimir[], const int DIM_NOMBRE_HOTEL)
{
    copiar_cadena(hotel.nombre_hotel, nombre_a_imprimir, DIM_NOMBRE_HOTEL);
}

void setNombreHotel(Hotel &hotel, const char nombre_hotel_a_asignar[], const int DIM_NOMBRE_HOTEL){
    
    copiar_cadena(nombre_hotel_a_asignar, hotel.nombre_hotel, DIM_NOMBRE_HOTEL);
}

void get_localizacion_hotel(const Hotel &hotel, char localizacion_a_imprimir[], const int DIM_LOCALIZACION_HOTEL)
{
    copiar_cadena(hotel.localizacion, localizacion_a_imprimir, DIM_LOCALIZACION_HOTEL);
}

void setLocalizacionHotel(Hotel &hotel, const char localizacion_a_asignar[], const int DIM_LOCALIZACION_HOTEL)
{
    copiar_cadena(localizacion_a_asignar, hotel.localizacion, DIM_LOCALIZACION_HOTEL);
}

float get_puntuacion_hotel(const Hotel &hotel)
{
    float puntuacion_hotel = 0.0;
    puntuacion_hotel = hotel.puntuacion_hotel;
    return puntuacion_hotel;
}

void setPuntuacionHotel(Hotel &puntuacion_del_hotel, float puntuacion_a_insertar){
    puntuacion_del_hotel.puntuacion_hotel = puntuacion_a_insertar;
}

int get_estrellas_hotel(const Hotel &hotel)
{
    int estrellas_hotel = 0.0;
    estrellas_hotel = hotel.num_estrellas;
    return estrellas_hotel;
}

void setEstrellasHotel(Hotel &estrellas_del_hotel, int estrellas){
    estrellas_del_hotel.num_estrellas = estrellas;
}


//--------------------------------------------------------//
//******************** MODULOS FRONT *********************//
//--------------------------------------------------------//

void front_pedir_hotel_a_eliminar(int &hotel_seleccionado, Hotel v_hoteles[], int &util_hoteles)
{
    imprimirVectorHotel(v_hoteles, util_hoteles);

    cout << "Seleccione el hotel que quiera elimar escribiendo su id." << "\n";
    cin >> hotel_seleccionado;
}

void front_pedir_datos_Hotel_al_User(Hotel &hotel){

    // Varaibles

    char nombre_a_introducir[DIM_NOMBRE_HOTEL];
    char localizacion_del_hotel[DIM_LOCALIZACION_HOTEL];
    int puntuacion_a_introducir = 0;
    int estrellas_a_introducir = 0;
    int id_hotel = 0;


    // Pedir datos del hotel

    cout << "Hello LooUser!" << endl;

    pedir_id_hotel(hotel, id_hotel);
    pedir_nombre_hotel(hotel, nombre_a_introducir);
    pedir_localizacion_hotel(hotel, localizacion_del_hotel);
    pedir_puntuacion_hotel(hotel, puntuacion_a_introducir);
    pedir_estrellas_hotel(hotel, estrellas_a_introducir);
    
    imprimirHotel(hotel);
}

void espacio_insuficiente()
{
    cout << "!TODOS LOS ESPACIOS ESTAN OCUPADOS" << endl;
}

void imprimir_cadena(const char cad[]){
    int i = 0;
    while(cad[i] != '\0'){
        cout << cad[i];
        i++;
    }
}

void imprimirHotel(const Hotel &h){
    cout << "------------Información del Hotel--------------" << endl;
    cout << "DEBUG: " << getIdHotel(h) << endl; // equivalente cout << "DEBUG: " << h.id_hotel << endl;

    cout << "Nombre: "; 
    char nombre_a_imprimir[DIM_NOMBRE_HOTEL];
    get_nombre_hotel(h, nombre_a_imprimir, DIM_NOMBRE_HOTEL);
    imprimir_cadena(nombre_a_imprimir);
    cout << endl;

    cout << "Localización: ";
    char localizacion_a_imprimir[DIM_LOCALIZACION_HOTEL];
    get_localizacion_hotel(h, localizacion_a_imprimir, DIM_LOCALIZACION_HOTEL);
    imprimir_cadena(localizacion_a_imprimir);
    cout << endl;

    cout << "Puntuación: " << get_puntuacion_hotel(h) << endl;
    cout << "Estrellas: " << get_estrellas_hotel(h) << endl;
    cout << "----------------------------------------------" << endl;
}

void imprimirVectorHotel(const Hotel vector_hoteles_que_quiero_imprimir[], int util_vector_hoteles_que_quiero_imprimir){
    cout << "DEBUG: ¡Imprimo ahora el vector de Hoteles!" << endl;
    for (int i=0; i < util_vector_hoteles_que_quiero_imprimir; i++)
        imprimirHotel(vector_hoteles_que_quiero_imprimir[i]);
}

void menu_opciones()
{
    cout << "¿Que desea realizar?" << endl;
    cout << "Imprimir hoteles [1]" << endl;
    cout << "Agregar hotel [2]" << endl;
    cout << "Eliminar hotel [3]" << endl;
    cout << "Modificar hotel [4]" << endl;
    cout << "Buscar hotel [5]" << endl;
    cout << "Ordenar hoteles [6]" << endl;
    cout << "Cerrar programa [7]" << endl;
}

void menu_opciones_ordenacion(int &opcion)
{
    cout << "¿Con que criterio desea ordenar los hoteles?" << endl;
    cout << "Por estrellas [1]" << endl;
    cout << "Por puntuacion [2]" << endl;

    cin >> opcion;
}

void front_pedir_id_a_buscar(int &id_a_buscar)
{
    cout << "¿Que hotel esta buscando? Escriba el Id del hotel:" << endl;
    cin >> id_a_buscar;
}

void front_pedir_estrellas_a_buscar(int &estrellas)
{
    cout << "¿Que hotel esta buscando? Escriba las estrellas del hotel:" << endl;
    cin >> estrellas;

    while (estrellas <= 0 || estrellas > 5)
    {
        cout << "Introduce de nuevo las estrellas" << endl;
        cin >> estrellas;
    }
}

void frotn_pedir_nombre_a_buscar(char nombre_a_buscar[])
{
    cout << "¿Que hotel esta buscando? Escriba el nombre del hotel:" << endl;
    cin.ignore();
    cin.getline(nombre_a_buscar, DIM_NOMBRE_HOTEL);
}

void frotn_pedir_localizacion_a_buscar(char localizacion_a_buscar[])
{
    cout << "¿Que hotel esta buscando? Escriba la localizacion del hotel:" << endl;
    cin.ignore();
    cin.getline(localizacion_a_buscar, DIM_LOCALIZACION_HOTEL);
}

void front_pedir_puntuacion_a_buscar(float &puntuacion)
{
    cout << "¿Que hoteles esta buscando? Porfavor introduzca los hoteles que quiere con puntuacion mayor que:" << endl;
    cin >> puntuacion;

    while (puntuacion < 0)
    {
        cout << "Introduzca la puntuacion de nuevo:" << endl;
        cin >> puntuacion;
    }
}

void pedir_id_hotel(Hotel &hotel, unsigned int id_hotel)
{
    cout << "Introduce el id del hotel" << endl;
    cin >> id_hotel;
    setIdHotel(hotel, id_hotel);
}

void pedir_nombre_hotel(Hotel &hotel, char nombre_a_introducir[])
{
    cout << "Introduce el nombre del hotel (Max = " << DIM_NOMBRE_HOTEL << ") : " << endl;
    cin.ignore();
    cin.getline(nombre_a_introducir, DIM_NOMBRE_HOTEL);
    setNombreHotel(hotel, nombre_a_introducir, DIM_NOMBRE_HOTEL);
}

void pedir_localizacion_hotel(Hotel &hotel, char localizacion_del_hotel[])
{
    cout << "Introduce la localizacion del hotel (MAX = " << DIM_LOCALIZACION_HOTEL << ") :" << endl;
    cin.ignore();
    cin.getline(localizacion_del_hotel, DIM_LOCALIZACION_HOTEL);
    setLocalizacionHotel(hotel, localizacion_del_hotel, DIM_LOCALIZACION_HOTEL);
}

void pedir_estrellas_hotel(Hotel &hotel, int estrellas_a_introducir)
{
    cout << "Introduzca las estrellas del hotel (MAX = 5 estrellas)" << endl;
    cin >> estrellas_a_introducir;
    
    while (estrellas_a_introducir < 0 || estrellas_a_introducir > 5)
    {
        cout << "!ERROR: EL NUMERO DE ESTRELLAS EN INCORRECTO" << "\n";
        cin >> estrellas_a_introducir;
    }
    setEstrellasHotel(hotel, estrellas_a_introducir);
}

void pedir_puntuacion_hotel(Hotel &hotel, int puntuacion_a_introducir)
{
    cout << "Introduce la Puntuación: [0-10]" << endl;
    cin >> puntuacion_a_introducir;
    setPuntuacionHotel(hotel, puntuacion_a_introducir);
}


//--------------------------------------------------------//
//******************** CONTROLADORES *********************//
//--------------------------------------------------------//

void controlador_agregar_hotel(Hotel v_hoteles[], int &util_hoteles, const int DIM_HOTELES)
{
    // Variables

    Hotel hotel_auxiliar;
    int opcion = 0;


    // Introducir hotel a vector de hoteles

    cout << "¿Que desea realizar?" << "\n";
    cout << "Introducir hotel por el final del vector [1]" << "\n";
    cout << "Introducir hotel por el principio del vector [2]" << "\n";

    cin >> opcion;

    if (opcion == 1)
    {
            front_pedir_datos_Hotel_al_User(hotel_auxiliar);
            agregarHotelenVectorHoteles(v_hoteles, hotel_auxiliar, util_hoteles);
    }
    else if (opcion == 2)
    {
            front_pedir_datos_Hotel_al_User(hotel_auxiliar);
            agregarHotelenVectorHoteles(v_hoteles, hotel_auxiliar, util_hoteles);
            agregarHotelenVectorHotelesPorDelante(v_hoteles, util_hoteles);
    }
    else
    {
        cout << "No se ha elegido ninguna opcion" << "\n";
    }
}

void controlador_eliminar_hotel(Hotel v_hoteles[], int &util_hoteles)
{
    // Varaibles

    int id_hotel_a_eliminar = -1;
    bool encontrado = false;

    front_pedir_hotel_a_eliminar(id_hotel_a_eliminar, v_hoteles, util_hoteles);

    encontrado = eliminarHotelenVectorHoteles(id_hotel_a_eliminar, v_hoteles, util_hoteles);

    if (encontrado)
    {
        cout << "¡HOTEL ELIMINADO." << "\n";
    }
    else
    {
        cout << "¡NO SE HA ENCONTRADO EL HOTEL." << "\n";
    }
}

void controlador_modificar_hotel(Hotel v_hoteles[], const int util_hoteles)
{
    // Varaibles

    int hotel_a_modificar = 0;
    int atributo_a_modificar = 0;

    int id_del_hotel = 0;
    char nombre_del_hotel[DIM_NOMBRE_HOTEL];
    char localizacion_del_hotel[DIM_LOCALIZACION_HOTEL];
    int puntuacion_del_hotel = 0;
    int estrellas_del_hotel = 0;


    // Introducir que se quiere modificar

    cout << "¿Que hotel quiere modificar? Introduzca el número del hotel" << "\n";
    cin >> hotel_a_modificar;

    while (hotel_a_modificar < 1 || hotel_a_modificar > util_hoteles)
    {
        cout << "No existe el hotel, introduzca de nuevo el hotel" << "\n";
        cin >> hotel_a_modificar;
    }

    hotel_a_modificar -= 1;

    cout << "¿Que quiere modificar?" << "\n";
    cout << "Id [1]" << "\n";
    cout << "Nombre [2]" << "\n";
    cout << "Localizacion [3]" << "\n";
    cout << "Puntuacion [4]" << "\n";
    cout << "Estrellas [5]" << "\n";

    cin >> atributo_a_modificar;

    if (atributo_a_modificar == 1)
    {
        pedir_id_hotel(v_hoteles[hotel_a_modificar], id_del_hotel);
    }
    else if (atributo_a_modificar == 2)
    {
        pedir_nombre_hotel(v_hoteles[hotel_a_modificar], nombre_del_hotel);
    }
    else if (atributo_a_modificar == 3)
    {
        pedir_localizacion_hotel(v_hoteles[hotel_a_modificar], localizacion_del_hotel);
    }
    else if (atributo_a_modificar == 4)
    {
        pedir_puntuacion_hotel(v_hoteles[hotel_a_modificar], puntuacion_del_hotel);
    }
    else if (atributo_a_modificar == 5)
    {
        pedir_estrellas_hotel(v_hoteles[hotel_a_modificar], estrellas_del_hotel);
    }
    else
    {
        cout << "!HOTEL NO ENCONTRADO" << "\n";
    }
}

void controlador_buscar_hotel(Hotel v_hoteles[], const int util_hoteles)
{
    // Varaibles

    int opcion = 0;
    int posicion = 0;
    Hotel hotel_econtrado;


    // Introducir tipo de busqueda

    cout << "¿Como desea buscar el hotel?" << "\n";
    cout << "Busqueda por id [1]" << "\n";
    cout << "Busqueda  por nombre [2]" << "\n";
    cout << "Busqueda  por estrellas [3]" << "\n";
    cout << "Busqueda por localizacion [4]" << "\n";
    cout << "Busqueda por puntuacion mayor que [5]" << "\n";

    cin >> opcion;
    
    if (opcion == 1)
    {
        int id_a_buscar = 0;

        front_pedir_id_a_buscar(id_a_buscar);
        posicion = buscarHotelporID(v_hoteles, util_hoteles, id_a_buscar);

        if (posicion != -1)
        {
            imprimirHotel(v_hoteles[posicion]);
        }
        else
        {
            cout << "¡HOTEL NO ENCONTRADO." << "\n";
        }
    }
    else if (opcion == 2)
    {
        char nombre_a_buscar[DIM_NOMBRE_HOTEL];

        frotn_pedir_nombre_a_buscar(nombre_a_buscar);
        posicion = buscarHotelenVectorHotelesporNombre(v_hoteles, util_hoteles, nombre_a_buscar);

        if (posicion != -1)
        {
            imprimirHotel(v_hoteles[posicion]);
        }
        else
        {
            cout << "¡HOTEL NO ENCONTRADO." << "\n";
        }
    }
    else if (opcion == 3)
    {
        int estrellas_a_buscar = 0;

        front_pedir_estrellas_a_buscar(estrellas_a_buscar);
        posicion = buscarHotelporEstrellas(v_hoteles, util_hoteles, estrellas_a_buscar);

        if (posicion != -1)
        {
            imprimirHotel(v_hoteles[posicion]);
        }
        else
        {
            cout << "¡HOTEL NO ENCONTRADO." << "\n";
        }
    }
    else if (opcion == 4)
    {
        char localizacion_a_buscar[DIM_LOCALIZACION_HOTEL];

        frotn_pedir_localizacion_a_buscar(localizacion_a_buscar);
        posicion = buscarHotelenVectorHotelesporLocalizacion(v_hoteles, util_hoteles, localizacion_a_buscar);

        if (posicion != -1)
        {
            imprimirHotel(v_hoteles[posicion]);
        }
        else
        {
            cout << "¡HOTEL NO ENCONTRADO." << "\n";
        }
    }
    else if (opcion == 5)
    {
        float puntuacion_a_buscar = 0;
        bool hay_hoteles = false;

        front_pedir_puntuacion_a_buscar(puntuacion_a_buscar);
        hay_hoteles = buscarHotelenVectorHotelesconPunMayorQue(puntuacion_a_buscar, v_hoteles, util_hoteles, hay_hoteles);

        if (hay_hoteles == false)
        {
            cout << "¡NO HAY HOTELES." << "\n";
        }
    }
    else
    {
        cout << "No se ha seleccionado ninguna opcion" << "\n";
    }
}

void controlador_ordenar_hoteles(Hotel v_hoteles[], const int util_hoteles)
{
    // Varaibles

    Hotel v_hoteles_auxiliar[util_hoteles];
    int opcion = 0;


    // Llamada a las funciones

    menu_opciones_ordenacion(opcion);

    if (opcion == 1)
    {
        ordenarVectorHotelesporEstrellas(v_hoteles_auxiliar, v_hoteles, util_hoteles);
        imprimirVectorHotel(v_hoteles_auxiliar, util_hoteles);
    }
    else if (opcion == 2)
    {
        ordenarVectorHotelesporPuntuacion(v_hoteles_auxiliar, v_hoteles, util_hoteles);
        imprimirVectorHotel(v_hoteles_auxiliar, util_hoteles);
    }
    else
    {
        cout << "No se ha seleccionado ninguna opcion" << "\n\n";
    }
}