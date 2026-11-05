// ============================================================
// GRAN CONCURSO DE RECETAS
// Fichero: dofUD5-plantilla.cpp
// Alumno/a: ___________________________
// Fecha:    24 de Abril de 2025
// ============================================================
#include <iostream>
#include <iomanip>
using namespace std;

// ============================================================
// ==  CAPA BACK  =============================================
// ============================================================

// ---- Gestión de cadenas de caracteres ----

/*
int longitud_cadena(char cadena[], const int DIM_CADENA) {
}
*/

/** ------------------------------------------------------------
 * @brief Función que copia la cadena con el texto de origen, en la cadena de destino
 * @pre DIMENSION_CADENA_DESTINO >= DIMENSION_CADENA_ORIGEN
 * @param cadena_destino[] Vector en el que se va a copiar el nombre del concursante
 * @param cadena_origen[] Vector en que contiene el nombre original
 * @post El contenido del vector destino sera sobreescrito
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void copiar_cadena(char cadena_destino[], const char cadena_origen[]) {

    int i = 0;

    for (i = 0; cadena_origen[i] != '\0'; i++)
    {
        cadena_destino[i] = cadena_origen[i];
    }

    cadena_destino[i] = '\0';
}

/** ------------------------------------------------------------
 * @brief Función que mueve todos los nombres del los concursantes una posición anterior, la función empieza desde el número del concursante que se quiere eliminar
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @post El numero de concursantes disminuira -1
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void mover_nombres(char v1[], char v2[], char v3[], char v4[], char v5[], char v6[], char v7[], char v8[], int seleccion, int &num_concursantes) {
    
    for (int i = seleccion; i < num_concursantes; i++)
    {
        if (i == 0)
        {
            copiar_cadena(v1, v2);
        }
        else if (i == 1)
        {
            copiar_cadena(v2, v3);
        }
        else if (i == 2)
        {
            copiar_cadena(v3, v4);
        }
        else if (i == 3)
        {
            copiar_cadena(v4, v5);
        }
        else if (i == 4)
        {
            copiar_cadena(v5, v6);
        }
        else if (i == 5)
        {
            copiar_cadena(v6, v7);
        }
        else if (i == 6)
        {
            copiar_cadena(v7, v8);
        }
    }

    num_concursantes--;
}

/** ------------------------------------------------------------
 * @brief Función que se encarga de introducir en nombre en el vector del concursante correspondiente
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param nombre_temporal[] Vector que alamacena el nombre del concursante correspondiente de forma temporal
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @post La varaible de concursante correspondiente tendra alamcendo el nombre del concursante
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void introducir_nombre_en_vector(char v1[], char v2[], char v3[], char v4[], char v5[], char v6[], char v7[], char v8[], const char nombre_temporal[], int num_concursantes) {
 
    if (num_concursantes == 0)
    {
        copiar_cadena(v1, nombre_temporal);
    }
    else if (num_concursantes == 1)
    {
        copiar_cadena(v2, nombre_temporal);
    }
    else if (num_concursantes == 2)
    {
        copiar_cadena(v3, nombre_temporal);
    }
    else if (num_concursantes == 3)
    {
        copiar_cadena(v4, nombre_temporal);
    }
    else if (num_concursantes == 4)
    {
        copiar_cadena(v5, nombre_temporal);
    }
    else if (num_concursantes == 5)
    {
        copiar_cadena(v6, nombre_temporal);
    }
    else if (num_concursantes == 6)
    {
        copiar_cadena(v7, nombre_temporal);
    }
    else if (num_concursantes == 7)
    {
        copiar_cadena(v8, nombre_temporal);
    }

}

/** ------------------------------------------------------------
 * @brief Función que ordena las medias de mayor a menor, y las posiciones en las que se tiene que imprimir los concursantes
 * @param medias_individuales[] Vector que alamcena las medias de cada concursante
 * @param posiciones_concursantes[] Vector que almacena las posiciones en las que si tienen que imprimir los concursantes
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @post El orden de las medias y de las posiciones cambiara
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ordena_medias_y_concursantes(double medias_individuales[], int posiciones_concursantes[], const int num_concursantes) {

    int media_mayor = 0;
    int posicion = 0;
    double aux = 0.0;

    for (int i = 0; i < num_concursantes-1; i++)
    {
        media_mayor = i;
        posicion = i;

        for (int j = i+1; j < num_concursantes; j++)
        {
            if (medias_individuales[media_mayor] < medias_individuales[j])
            {
                media_mayor = j;
                posicion = j;
            }
        }

    // Intercambio de medias
    aux = medias_individuales[i];
    medias_individuales[i] = medias_individuales[media_mayor];
    medias_individuales[media_mayor] = aux;

    // Intercambio de posiciones
    aux = posiciones_concursantes[i];
    posiciones_concursantes[i] = posiciones_concursantes[posicion];
    posiciones_concursantes[posicion] = aux;

    }
}

/*
bool cadena_vacia(const char cadena[]) {
}
*/

// ---- Gestión de vector de enteros ----

/** ------------------------------------------------------------
 * @brief Función que agrega la puntuación de los platos del concursante a su vector correspondiente
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param puntuacion_entrante[] Varaible que almacena la puntuación del entrante del ultimo concursante inscrito
 * @param puntuacion_principal[] Varaible que almacena la puntuación del plato principal del ultimo concursante inscrito
 * @param puntuacion_postre[] Varaible que almacena la puntuación del postre del ultimo concursante inscrito
 * @post num_concursante aumentara su valor en +1
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void agregar_entero_en_vector(int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes, int puntuacion_entrante, int puntuacion_primero, int puntuacion_postre) {

    v_puntuaciones_entrante[num_concursantes] = puntuacion_entrante;
    v_puntuaciones_primero[num_concursantes] = puntuacion_primero;
    v_puntuaciones_postre[num_concursantes] = puntuacion_postre;

    num_concursantes++;
}

/** ------------------------------------------------------------
 * @brief Función que elimina las puntuaciones del concursantes seleccionado
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param seleccion Varaible para el concursante que se va a eliminar
 * @post Las puntuaciones a partir del concursantes seleccionado se moveran una posición anterior
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void eliminar_entero_en_vector(int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes, int seleccion) {

    for (int i = seleccion; i < num_concursantes; i++)
    {
        v_puntuaciones_entrante[i] = v_puntuaciones_entrante[i+1];
        v_puntuaciones_primero[i] = v_puntuaciones_primero[i+1];
        v_puntuaciones_postre[i] = v_puntuaciones_postre[i+1];
    }
}



// ---- Lógica de negocio ----
/** ------------------------------------------------------------
 * @brief Función que valida si la nota introducida esta dentro del rango
 * @param v Varaible que almacena la nota introducida
 * @param mn Varaible para la nota minima que puede tener un plato
 * @param mx Varaible para la nota máxima que puede tener un plato
 * @return true --> Si esta dentro del rango / false --> Si esta fuera del rango
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
bool es_valido(int v, int mn, int mx) {
    return v >= mn && v <= mx;
}

/** ------------------------------------------------------------
 * @brief Función que hace la media individual de cada concursante
 * @param puntuacion_entrante Variable que alamecena la puntuacion del entrante
 * @param puntuacion_primero Varaible que almacena la puntuacion del primero
 * @param puntuacion_postre Varaible que alamcena la puntuacion del postre
 * @return media Varaible que alamcena la media del concursante
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
double calcular_media(double puntuacion_entrante, double puntuacion_primero, double puntuacion_postre) {

    double media = 0.0;

    media = (puntuacion_entrante + puntuacion_primero + puntuacion_postre) / 3;

    return media;
} 

/** ------------------------------------------------------------
 * @brief Función que calcula la media global de los concursantes activos
 * @pre La medias individuales han tenido que ser calculadas
 * @param v_medias[] Vector que alamcena las media individuales de los concursantes
 * @param util_v_medias Indice del vector del medias
 * @return media_global Varaible que almacena la media global de los concursantes
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
double calcular_media_global(const double v_medias[], int util_v_medias) {

    double media_global = 0.0;

    for (int i = 0; i < util_v_medias; i++)
    {
        media_global = media_global + v_medias[i];
    }

    media_global = media_global / util_v_medias;

    return media_global;
}

/** ------------------------------------------------------------
 * @brief
 * @param
 * @pre
 * @post
 * @return
 * ------------------------------------------------------------*/
int calcular_indice_mejor_concursante(const double v_medias[], int util_v_medias) {

}

/** ------------------------------------------------------------
 * @brief
 * @param
 * @pre
 * @post
 * @return
 * ------------------------------------------------------------*/
int calcular_indice_peor_concursante(const double v_medias[], int util_v_medias) {

}


// ============================================================
// ==  CAPA FRONT  ============================================
// ============================================================
/** ------------------------------------------------------------
 * @brief Función que imprime la cabecera
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_cabecera_lista() {
    cout << "\n--- Concursantes activos ---\n";
    cout << left
         << setw(4)  << "#"
         << setw(22) << "Nombre"
         << setw(6)  << "Ent"
         << setw(6)  << "Pri"
         << setw(6)  << "Pos" << "\n";
    cout << string(44, '-') << "\n";
}

/** ------------------------------------------------------------
 * @brief Función que imprime los concursantes activos y las notas correspondientes de sus platos
 * @param nombre[] Vector del nombre del concursante
 * @param ent Varaible para la nota del entrante
 * @param pri Varaible para la nota del plato principal
 * @param pos Varaible para la nota del postre
 * @param idx Varaible para el indice de los concursantes
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_fila_concursante(
        const char nombre[], int ent, int pri, int pos, int idx) {
    cout << left
         << setw(4)  << (idx + 1)
         << setw(22) << nombre
         << setw(6)  << ent
         << setw(6)  << pri
         << setw(6)  << pos << "\n";
}

/** ------------------------------------------------------------
 * @brief Función que imprime por pantalla el menu de opciones disponibles
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_menu() {
    cout << "\n=== MENU ===\n"
         << "1. Imprimir concursantes y puntuaciones\n"
         << "2. Introducir nuevo concursante\n"
         << "3. Eliminar un concursante\n"
         << "4. Ver resultados individuales\n"
         << "5. Ver clasificacion\n"
         << "6. Ver finalistas\n"
         << "7. Salir\n";
}

/** ------------------------------------------------------------
 * @brief Función que pide la nota del plato correspondiente
 * @param msg[] Vector que alamcena el texto que indica la nota del plato que se esta introduciendo
 * @param mn Varaible que indica la nota minima que puede tener un plato
 * @param mx Varaible que indica la nota máxima que puede tener un plato
 * @return v Varaible que contiene ña nota introducida
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
int front_pedir_entero(const char msg[], int mn, int mx) {
    int v;
    do {
        cout << msg;
        cin  >> v;
        if (!es_valido(v, mn, mx))
            cout << "  [!] Fuera de rango (" << mn << "-"
                 << mx << "). Intenta de nuevo.\n";
    } while (!es_valido(v, mn, mx));
    return v;
}

/** ------------------------------------------------------------
 * @brief Función que pide el nombre del concursante que se va a incribir
 * @param nombre[] Vector que va a almacenar de forma temporal el nombre del nuevo concursante
 * @param MAX_NOMBRE Varaible para la dimensión máxima del nombre del concursante
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_pedir_nombre(char nombre[], const int MAX_NOMBRE) {
    cin.ignore();
    cin.getline(nombre, MAX_NOMBRE);
}

/** ------------------------------------------------------------
 * @brief Función que imprime las medias individuales de los concursantes y la media global
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param medias_individuales[] Vector que almacena las medias individuales de los concursantes
 * @param media_global Varaible de la media global entre todos los concursantes
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_resultados(
    const char v1[], const char v2[], const char v3[], const char v4[], 
    const char v5[], const char v6[], const char v7[], const char v8[], 
    const int num_concursantes, const double medias_indiviaduales[], const double media_global, 
    const int v_puntuaciones_entrante[], const int v_puntuaciones_primero[], const int v_puntuaciones_postre[]){

    cout << "\n---Resultados individuales---\n";

    for (int i = 0; i < num_concursantes; i++)
    {
        if (i == 0)
        {
            cout << v1;
        }
        else if (i == 1)
        {
            cout << v2;
        }
        else if (i == 2)
        {
            cout << v3;
        }
        else if (i == 3)
        {
            cout << v4;
        }
        else if (i == 4)
        {
            cout << v5;
        }
        else if (i == 5)
        {
            cout << v6;
        }
        else if (i == 6)
        {
            cout << v7;
        }
        else if (i == 7)
        {
            cout << v8;
        }

        cout << "\t|E:" << v_puntuaciones_entrante[i] << 
                  " P:" << v_puntuaciones_primero[i] << 
                  " PO:" << v_puntuaciones_postre[i] << "| Media: " << setprecision(2) << medias_indiviaduales[i] << "\n";

    }

    cout << "\nMedia globa: " << setprecision(2) << media_global << "\n";
}

/** ------------------------------------------------------------
 * @brief Función que muestra a los concursantes en orden según la media
 * @pre Las medias deben haber sido calculadas anteriormente
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param medias_individuales[] Vector que alamcena las medias de cada concursante
 * @param posiciones_concursantes[] Vector que almacena las posiciones en las que si tienen que imprimir los concursantes
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_clasificacion(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[], const int num_concursantes, const double medias_individuales[], const int posiciones_concursantes[]){


        cout << "\n---Clasificacion---" << "\n";

        for (int i = 0; i < num_concursantes; i++)
        {

            if (posiciones_concursantes[i] == 0)
            {
                cout << v1;
            }
            else if (posiciones_concursantes[i] == 1)
            {
                cout << v2;
            }
            else if (posiciones_concursantes[i] == 2)
            {
                cout << v3;
            }
            else if (posiciones_concursantes[i] == 3)
            {
                cout << v4;
            }
            else if (posiciones_concursantes[i] == 4)
            {
                cout << v5;
            }
            else if (posiciones_concursantes[i] == 5)
            {
                cout << v6;
            }
            else if (posiciones_concursantes[i] == 6)
            {
                cout << v7;
            }
            else if (posiciones_concursantes[i] == 7)
            {
                cout << v8;
            }

            cout << " Media: " << medias_individuales[i] << "\n";
        }
}

/** ------------------------------------------------------------
 * @brief Función que muestra a los dos mejores concursantes en orden según la media
 * @pre Las medias deben haber sido calculadas anteriormente
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param medias_individuales[] Vector que alamcena las medias de cada concursante
 * @param posiciones_concursantes[] Vector que almacena las posiciones en las que si tienen que imprimir los concursantes
 * @param MEJORES_CONCURSANTES Variable de la cantidad de mejores concursantes
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_finalistas(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[], const double medias_individuales[], const int posiciones_concursantes[], const int MEJORES_CONCURSANTES){


        cout << "\n---Finalistas---" << "\n";

        for (int i = 0; i < MEJORES_CONCURSANTES; i++)
        {

            if (posiciones_concursantes[i] == 0)
            {
                cout << v1;
            }
            else if (posiciones_concursantes[i] == 1)
            {
                cout << v2;
            }
            else if (posiciones_concursantes[i] == 2)
            {
                cout << v3;
            }
            else if (posiciones_concursantes[i] == 3)
            {
                cout << v4;
            }
            else if (posiciones_concursantes[i] == 4)
            {
                cout << v5;
            }
            else if (posiciones_concursantes[i] == 5)
            {
                cout << v6;
            }
            else if (posiciones_concursantes[i] == 6)
            {
                cout << v7;
            }
            else if (posiciones_concursantes[i] == 7)
            {
                cout << v8;
            }

            cout << " Media: " << medias_individuales[i] << "\n";
        }
}

/** ------------------------------------------------------------
 * @brief Función que muestra un mensaje cuando la cantidad de concursantes a llegado al maximo
 * @param msg[] Vector que contiene el mensaje
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void front_mostrar_error(const char msg[]) {
    cout << "[!] " << msg << "\n";
}

// ============================================================
// ==  CAPA CONTROLADOR  ======================================
// ============================================================

// Help! todos los CTRL reciben los 8 vectores de
// nombre + los 3 vectores de puntuaciones + num_concursantes por referencia (o valor).
/** ------------------------------------------------------------
 * @brief Función que imprime por pantalla los concursantes inscritos
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ctrl_imprimir_concursantes(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes) {
    front_mostrar_cabecera_lista();
    for (int i = 0; i < num_concursantes; i++) {
        char* nom;
        switch (i) {
            case 0: nom = v1; break;
            case 1: nom = v2; break;
            case 2: nom = v3; break;
            case 3: nom = v4; break;
            case 4: nom = v5; break;
            case 5: nom = v6; break;
            case 6: nom = v7; break;
            default: nom = v8; break;
        }
        front_mostrar_fila_concursante(
            nom, v_puntuaciones_entrante[i], v_puntuaciones_primero[i], v_puntuaciones_postre[i], i);
    }
}

/** ------------------------------------------------------------
 * @brief Función que agregra el nombre del nuevo concursante, y las puntuaciones de sus platos
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param MAX_NOMBRE Varaible para la dismensión del nombre de los concursantes
 * @param MAX_CONCURSANTES Varaible para el número maximo de concursantes que pueden estar inscritos
 * @param MIN_PUN Varaible para la minima puntuación posible de un plato
 * @param MAX_PUN Varaible para la maxima puntuación posible de un plato
 * @post El número de concursantes incritos aumentara +1
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ctrl_agregar_concursante(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes, const int MAX_NOMBRE, const int MAX_CONCURSANTES, const int MIN_PUN, const int MAX_PUN) {
    if (num_concursantes >= MAX_CONCURSANTES) {
        front_mostrar_error("El concurso esta completo (max. 8).");
    }else{
        char tmpNom[MAX_NOMBRE];
        cout << "Nombre: ";
        front_pedir_nombre(tmpNom, MAX_NOMBRE);
        int e  = front_pedir_entero(
            "  Punt. entrante  (1-10): ", MIN_PUN, MAX_PUN);
        int p  = front_pedir_entero(
            "  Punt. principal (1-10): ", MIN_PUN, MAX_PUN);
        int po = front_pedir_entero(
            "  Punt. postre    (1-10): ", MIN_PUN, MAX_PUN);

        //Añadir las llamadas al back pertinentes

        introducir_nombre_en_vector(v1, v2, v3, v4, v5, v6, v7, v8, tmpNom, num_concursantes);

        agregar_entero_en_vector(v_puntuaciones_entrante, v_puntuaciones_primero, v_puntuaciones_postre, num_concursantes, e, p, po);


        cout << "[OK] Concursante agregado.\n";
    }
}

/** ------------------------------------------------------------
 * @brief Función que elminina a un concursante junto con sus puntuaciones
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @post El número de concursantes inscritos disminuira -1
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ctrl_eliminar_concursante(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes, const int MAX_CONCURSANTES){
    if (num_concursantes == 0) {
        front_mostrar_error("No hay concursantes para eliminar.");
    }else{
        ctrl_imprimir_concursantes(v1,v2,v3,v4,v5,v6,v7,v8, 
            v_puntuaciones_entrante, v_puntuaciones_primero, v_puntuaciones_postre, num_concursantes);
        
        int seleccion = front_pedir_entero("Numero de concursante a eliminar: ", 1, num_concursantes) - 1;
        
        //Añadir las llamadas al back y front pertinentes

        eliminar_entero_en_vector(v_puntuaciones_entrante, v_puntuaciones_primero, v_puntuaciones_postre, num_concursantes, seleccion);

        mover_nombres(v1, v2, v3, v4, v5, v6, v7, v8, seleccion, num_concursantes);


        cout << "[OK] Concursante eliminado.\n";
    }
}

/** ------------------------------------------------------------
 * @brief Función que muestra la media individual de cada concursante y la media global
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param v_puntuaciones_entrante[] Vector que almacena las puntuaciones de los entrantes
 * @param v_puntuaciones_primero[] Vector que almacena las puntuaciones del platos principales
 * @param v_puntuaciones_postre[] Vector que almacena las puntuaciones de los postres
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param medias_individuales[] Vector que alamcena las medias de cada concursante
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ctrl_mostrar_resultados(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes, double medias_individuales[]){

        //Añadir las llamadas al back y front pertinentes
        
        double media = 0.0;
        double media_global = 0.0;
        int i = 0;

        for (i = 0; i < num_concursantes; i++)
        {
            media = calcular_media(v_puntuaciones_entrante[i], v_puntuaciones_primero[i], v_puntuaciones_postre[i]);
            medias_individuales[i] = media;
        }

        media_global = calcular_media_global(medias_individuales, i);

        front_mostrar_resultados(v1, v2, v3, v4, v5, v6, v7, v8, num_concursantes, medias_individuales, media_global, v_puntuaciones_entrante, v_puntuaciones_primero, v_puntuaciones_postre);
}

/** ------------------------------------------------------------
 * @brief Función que imprime de forma ordenada a los concursantes de mayor a menor dependiendo de la media
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param MAX_CONCURSANTES Varaible para el número maximo de concursantes que pueden estar inscritos
 * @param medias_individuales[] Vector que alamcena las medias de cada concursante
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ctrl_mostrar_clasificacion(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int &num_concursantes, double medias_individuales[], int posiciones_concursantes[]){
        

        //Añadir las llamadas al back y front pertinentes

        ordena_medias_y_concursantes(medias_individuales, posiciones_concursantes, num_concursantes);

        front_mostrar_clasificacion(v1, v2, v3, v4, v5, v6, v7, v8, num_concursantes, medias_individuales, posiciones_concursantes);
}

/** ------------------------------------------------------------
 * @brief Función que muestra los dos mejores concursantes según la media
 * @param v1[] Vector que almacena el nombre del concursante 1
 * @param v2[] Vector que almacena el nombre del concursante 2
 * @param v3[] Vector que almacena el nombre del concursante 3
 * @param v4[] Vector que almacena el nombre del concursante 4
 * @param v5[] Vector que almacena el nombre del concursante 5
 * @param v6[] Vector que almacena el nombre del concursante 6
 * @param v7[] Vector que almacena el nombre del concursante 7
 * @param v8[] Vector que almacena el nombre del concursante 8
 * @param num_concursantes Varaible de la cantidad de concursantes activos
 * @param MAX_CONCURSANTES Varaible para el número maximo de concursantes que pueden estar inscritos
 * @param medias_individuales[] Vector que alamcena las medias de cada concursante
 * @param MEJORES_CONCURSANTES Variable de la cantidad de mejores concursantes
 * @post Se mostraran los dos mejores concursantes
 * @author Victor Montero Gonzalez
 * ------------------------------------------------------------*/
void ctrl_mostrar_finalistas(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int &num_concursantes, double medias_individuales[], int posiciones_concursantes[], const int MEJORES_CONCURSANTES){
        

        //Añadir las llamadas al back y front pertinentes
        
        ordena_medias_y_concursantes(medias_individuales, posiciones_concursantes, num_concursantes);

        front_mostrar_finalistas(v1, v2, v3, v4, v5, v6, v7, v8, medias_individuales, posiciones_concursantes, MEJORES_CONCURSANTES);
}

// ============================================================
int main() {

    const int MAX_CONCURSANTES = 8;
    const int MAX_NOMBRE       = 31;
    const int MIN_PUN          = 1;
    const int MAX_PUN          = 10;
    const int MEJORES_CONCURSANTES = 2;

    char v_nombre_concursante1[MAX_NOMBRE] = "Ana Garcia";
    char v_nombre_concursante2[MAX_NOMBRE] = "Pedro Ruiz";
    char v_nombre_concursante3[MAX_NOMBRE] = "Laura Blanco";
    char v_nombre_concursante4[MAX_NOMBRE] = "\0";
    char v_nombre_concursante5[MAX_NOMBRE] = "\0";
    char v_nombre_concursante6[MAX_NOMBRE] = "\0";
    char v_nombre_concursante7[MAX_NOMBRE] = "\0";
    char v_nombre_concursante8[MAX_NOMBRE] = "\0";

    int v_puntuaciones_entrante[MAX_CONCURSANTES]  = {8, 6, 9};
    int v_puntuaciones_principal[MAX_CONCURSANTES] = {7, 5, 8};
    int v_puntuaciones_postre[MAX_CONCURSANTES]    = {9, 7, 10};

    double medias_individuales[MAX_CONCURSANTES] = {0.0};

    int posiciones_concursantes[MAX_CONCURSANTES] = {0, 1, 2, 3, 4, 5, 6, 7};

    int num_concursantes = 3;

    cout << "=== CRISTO CHEF ===\n";

    int opcion;
    do {
        front_mostrar_menu();
        opcion = front_pedir_entero("Elige opcion: ", 1, 7);
        switch (opcion) {
            case 1:
                ctrl_imprimir_concursantes(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 2:
                ctrl_agregar_concursante(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes, MAX_NOMBRE, MAX_CONCURSANTES, MIN_PUN, MAX_PUN);
                break;
            case 3:
                ctrl_eliminar_concursante(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes, MAX_CONCURSANTES);
                break;
            case 4:
                ctrl_mostrar_resultados(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes, medias_individuales);
                break;
            case 5:
                ctrl_mostrar_clasificacion(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    num_concursantes, medias_individuales, posiciones_concursantes);
                break;
            case 6:
                ctrl_mostrar_finalistas(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    num_concursantes, medias_individuales, posiciones_concursantes, MEJORES_CONCURSANTES);
                break;
            case 7:
                cout << "Hasta la proxima!\n";
                break;
        }
    } while (opcion != 7);
    return 0;
}