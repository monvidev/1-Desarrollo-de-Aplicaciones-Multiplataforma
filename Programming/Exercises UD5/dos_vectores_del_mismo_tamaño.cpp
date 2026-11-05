#include <iostream>

using namespace std;

int main()
{
    // Varaibles

    int i = 0; // Variable para el indice del los vectores
    const int DIM_V_UNO = 10; // Variable para la dimensión del vecto uno
    float vector_uno[DIM_V_UNO] = {0.0}; // Vector uno
    const int DIM_V_DOS = 10; // Variable para la dimensión del vector dos
    float vector_dos[DIM_V_DOS] = {0.0}; // Vector dos
    float dato = 0.0; // Varaible para el dato introducido


    // Bucle para introducir los datos en el vector uno

    cout << "Introduzca los diez datos." << endl;

    for (i = 0; i < DIM_V_UNO; i++)
    {
        cin >> dato;

        vector_uno[i] = dato;
    }


    // Bucle que copia los datos del vector uno al vector dos

    for (i = 0; i < DIM_V_DOS; i++)
    {
        vector_dos[i] = vector_uno[i];

        cout << "El dato del componente " << i << " del vector 2 es: " << vector_dos[i] << endl;
    }
}