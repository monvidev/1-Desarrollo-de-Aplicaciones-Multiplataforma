#include <iostream>
#include <cmath>

using namespace std;


// MODULOS BACK-END //

/**
 * @brief Función que pide los datos que se queiren utilizar, si se quieren introducir mas de 100 datos, el programa falla
 * @param (E/S) vector_numeros_original
 * @param (E/S) UTIL_V_NUMEROS_ORIGINALES
 * @param (E/S) cantidad_de_numeros
 * @post UTIL = cantidad de datos introducidos
 * @author Victor Montero Gonzalez
 */
void pedir_datos(float vector_numeros_original[], int &UTIL, int &cantidad_de_numeros);

/**
 * @brief Función que calcula la media de los datos introducidos
 * @param (E) vector_numeros_original
 * @param (E) UTIL_V_NUMEROS_ORIGINALES
 * @param (E) cantidad_de_numeros
 * @return media
 * @author Victor Montero Gonzalez
 */
float calculo_media(const float vector_numeros_original[], int UTIL, int cantidad_de_numeros);

/**
 * @brief Función que calcula la varianza
 * @param (E) vector_numeros_original
 * @param (E) UTIL_V_NUMEROS_ORIGINALES
 * @param (E) cantidad_de_numeros
 * @param (E) media
 * @return varianza
 * @author Victor Montero Gonzalez
 */
float calculo_varianza(const float vector_numeros_original[], int UTIL, int cantidad_de_numeros, float media);

/**
 * @brief Función que calcula la desviación típica
 * @param (E) varianza
 * @return desviacion
 * @author Victor Montero Gonzalez
 */
float desviacion_tipica(float varianza);


// MODULOS FRONT-END //

/**
 * @brief Función que me imprime los resultados obtenidos
 * @param (E) media
 * @param (E) varianza
 * @param (E) desviacion
 * @author Victor Montero Gonzalez
 */
void imprimir_datos(float media, float varianza, float desviacion);


int main()
{
    // Variables

    int cantidad_de_numeros = 0; // Variable para la cantidad de datos que se quieren introducir
    const int DIM_V_DATOS = 100; // Variable para la dimensión del vector
    float vector_numeros_original[DIM_V_DATOS] = {0.0}; // Varaible para el vector
    int UTIL_V_NUMEROS_ORIGINALES = 0; // Variable UTIL para el vector
    float media = 0.0; // Varaible para la media
    float varianza = 0.0; // Varaible para la varianza
    float desviacion = 0.0; // Varaible para la desviacion típica

    // Llamada a las funciones

    pedir_datos(vector_numeros_original, UTIL_V_NUMEROS_ORIGINALES, cantidad_de_numeros);

    media = calculo_media(vector_numeros_original, UTIL_V_NUMEROS_ORIGINALES, cantidad_de_numeros);

    varianza = calculo_varianza(vector_numeros_original, UTIL_V_NUMEROS_ORIGINALES, cantidad_de_numeros, media);

    desviacion = desviacion_tipica(varianza);

    imprimir_datos(media, varianza, desviacion);


    return 0;
}

void pedir_datos(float vector_numeros_original[], int &UTIL, int &cantidad_de_numeros)
{
    // Varaibles

    int i = 0;


    // Cantidad de números que se desea introducir en el vector
    
    cout << "¿Cuantos numeros desea introducir?" << endl;

    cin >> cantidad_de_numeros;


    // Bucle que pide la cantidad de numeros deseados

    do
    {
        cout << "Numero del componente " << i << ":" << endl;

        cin >> vector_numeros_original[i];

        i++;
    } while (i < cantidad_de_numeros);

    UTIL = i;   
}

float calculo_media(const float vector_numeros_original[], int UTIL, int cantidad_de_numeros)
{
    // Varaibles

    float media = 0.0;


    // Bucle que calcula la media de los números del vector

    for (int i = 0; i < UTIL; i++)
    {
        media = media + vector_numeros_original[i];
    }

    media = media / cantidad_de_numeros;


    return media;
}

float calculo_varianza(const float vector_numeros_original[], int UTIL, int cantidad_de_numeros, float media)
{
    // Varaibles

    float varianza = 0.0;


    // Bucle que calcula la varianza

    for (int i = 0; i < UTIL; i++)
    {
        varianza = varianza + pow((vector_numeros_original[i] - media), 2);
    }

    varianza = varianza / cantidad_de_numeros;


    return varianza;
}

float desviacion_tipica(float varianza)
{
    // Variables

    float desviacion = 0.0;

    // Calculo de la desviación típica

    desviacion = sqrt(varianza);


    return desviacion;
}

void imprimir_datos(float media, float varianza, float desviacion)
{
    cout << "====================" << endl;
    cout << "DATOS OBTENIDOS:" << endl;
    cout << "\nMedia = " << media << endl;
    cout << "Varianza = " << varianza << endl;
    cout << "Desviacion = " << desviacion << endl;
    cout << "====================" << endl;
}