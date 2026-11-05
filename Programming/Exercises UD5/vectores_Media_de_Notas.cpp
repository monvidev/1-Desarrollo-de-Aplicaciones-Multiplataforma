#include <iostream>
using namespace std;

int main(){
    const int DIM_V_NOTAS = 1000;
    int util_v_notas = 0;
    float total = 0.0;
    float media = 0.0;
    float v_notas[DIM_V_NOTAS] = {0.0};

    /*

    v_notas[3] = 7.7;

    cout << "La nota de la componente 3 es: " << v_notas[3] << endl;
    cout << "La nota de la componente 0 es: " << v_notas[0] << endl;
    cout << "La nota de la componente 1 es: " << v_notas[1] << endl;
    cout << "La nota de la componente 2 es: " << v_notas[2] << endl;
    cout << "La nota de la componente 4 es: " << v_notas[4] << endl;

    cout << "¿Y cómo le pedimos datos al usuario y los almacenamos en un vector?" << endl;

        cout << "¡Imprimimos el vector completo!" << endl;

    for (int i=0; i < DIM_V_NOTAS; i++)
        cout << "La nota de la componente " << i << " es: " << v_notas[i] << endl;
        
    }

    */

    //QUIERO UN PROGRAMA QUE PIDA NOTAS AL USUARIO, CALCULE LA MEDIA Y LAS IMPRIMA

    cout << "Cantidad de notas que quiere introducir:" << endl;

    cin >> util_v_notas;

    while (util_v_notas < 1) // Filtro que evita que la cantidad de notas que se quieren introducir sea < 1
    {
        cout << "Introduzca de nuevo la cantidad de notas." << endl;
        cin >> util_v_notas;
    }


    for(int i = 0; i < util_v_notas; i++) // Bucle que permite introducir y almacenar el el vector la cantidad de notas deseadas
    {
        i++;
        cout << "Nota numero " << i << ": ";
        i--;


        cin >> v_notas[i];

        while (v_notas[i] < 0 || v_notas[i] > 10) // Filtro para evitar que la nota introducida sea < 0 o > 11
        {
            cout << "Porfavor, introduzca de nuevo la nota." << endl;
            cin >> v_notas[i];
        }

        total = total + v_notas[i]; // Suma de todas las notas introducidas
    }

    
    media = total / util_v_notas; // Calculo de la media de todas las notas

    cout << "La media de las notas es: " << media << endl;


    return 0;
}