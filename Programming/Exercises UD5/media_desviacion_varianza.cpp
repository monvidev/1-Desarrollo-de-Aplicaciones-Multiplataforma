#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Varaibles

    const int DIM_V_NOTAS = 1000; // Varaible para la dimensión del vector
    int UTIL_V_NOTAS = 0; // Varaible para la cantidad de componentes que se van a usar
    float v_notas[DIM_V_NOTAS] = {0.0}; // Vector donde se almacenaran las notas de los alumnos
    float nota = 0.0; // Varaible para la notas
    int i = 0; // Varaible para el indice del vector
    float total = 0.0; // Varaible para el total de la suma de las notas (para calcular la media)
    float media = 0.0; // Varaible para la media
    float desviacion_media = 0.0; // Varaible para la desviación media
    float valor_absoluto = 0.0; // Variable para los valores absolutos
    float varianza = 0.0; // Varaible para la varianza


    // Introducción de la cantidad de alumnos que hay

    cout << "¿Cuantos alumnos hay?" << endl;
    cin >> UTIL_V_NOTAS;


    // Bucle que va introduciendo la nota en su posición correspondiente

    cout << "Introduzca las notas." << endl;

    for (i = 0; i < UTIL_V_NOTAS; i++)
    {
        cout << "Nota del componente " << i << ":" << endl;
        cin >> nota;

        while (nota < 0 || nota > 10)
        {
            cout << "Introduzca de nuevo la nota." << endl;
            cin >> nota;
        }

        v_notas[i] = nota;
    }


    // Bucle que realiza la media de las notas introducidas

    for (i = 0; i < UTIL_V_NOTAS; i++)
    {
        total = total + v_notas[i];
    }

    media = total / UTIL_V_NOTAS; // Calculo de la media

    cout << "La media de las notas es: " << media << endl;


    // Bucle que calcula la desviación media

    for(i = 0; i < UTIL_V_NOTAS; i++)
    {
        valor_absoluto = (v_notas[i] - media);

        if (valor_absoluto < 0) // Condición en caso de que el valor sea negativo
        {
            valor_absoluto = (valor_absoluto * -2) + valor_absoluto; // Pasamos el valor negativo a valor absoluto
        }

        desviacion_media = desviacion_media + valor_absoluto;
    }

    desviacion_media = desviacion_media / UTIL_V_NOTAS; // Calculo de la desviación media

    cout << "La desviación media es: " << desviacion_media << endl;


    // Bucle que calcula la varainza

    for (i = 0; i < UTIL_V_NOTAS; i++)
    {
        varianza = varianza + pow((v_notas[i] - media), 2);
    }

    varianza = varianza / UTIL_V_NOTAS; // Calculo de la varianza

    cout << "La varianza es: " << varianza << endl;


    return 0;
}