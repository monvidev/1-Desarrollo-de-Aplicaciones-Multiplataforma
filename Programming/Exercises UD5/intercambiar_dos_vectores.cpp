#include <iostream>

using namespace std;


// MODULOS-BACK //

/**
 * @brief Función que intercambia los valores de los vectores
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void intercambiar_valores(const int DIM_V_ORIGINAL, const int DIM_V_COPIA, int vector_original[], int vector_copia[], int &UTIL_V_ORIGINAL, int &UTIL_V_COPIA);


// MODULOS-FRONT //

/**
 * @brief Función que imprime la bienvenida al programa
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void bienvenida();

/**
 * @brief Función que imprime los vectores
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void imprimir_vectores(const int vector_original[], const int vector_copia[], const int UTIL_V_ORIGINAL, const int UTIL_V_COPIA);


int main()
{
	// Variable

	const int DIM_V_ORIGINAL = 10;
	int vector_original[DIM_V_ORIGINAL] = {5, 9, 2491};
	int UTIL_V_ORIGINAL = 3;
	const int DIM_V_COPIA = 10;
	int vector_copia[DIM_V_COPIA] = {45, 98, 1, 9, 76};
	int UTIL_V_COPIA = 5;


	// Llamada a las funciones

	bienvenida();

	cout << "Vectores antes del intercambio\n" << endl;

	imprimir_vectores(vector_original, vector_copia, UTIL_V_ORIGINAL, UTIL_V_COPIA);

	intercambiar_valores(DIM_V_ORIGINAL, DIM_V_COPIA, vector_original, vector_copia, UTIL_V_ORIGINAL, UTIL_V_COPIA);

	cout << "\nVectores despues del intercambio\n" << endl;

	imprimir_vectores(vector_original, vector_copia, UTIL_V_ORIGINAL, UTIL_V_COPIA);

}


void bienvenida()
{
	cout << "==================================================================" << endl;
	cout << "Bienvenido al programa que intercambia los valores de dos vectores" << endl;
	cout << "==================================================================" << endl;
	cout << endl;
}

void intercambiar_valores(const int DIM_V_ORIGINAL, const int DIM_V_COPIA, int vector_original[], int vector_copia[], int &UTIL_V_ORIGINAL, int &UTIL_V_COPIA)
{
	// Varaibles

	int valor_que_se_intercambia = 0;
	int intercambio_utiles = 0;


	// Bucle que intercambia los valores de los vectores

	for(int i = 0; i < DIM_V_ORIGINAL; i++)
	{
		valor_que_se_intercambia = vector_original[i];

		vector_original[i] = vector_copia[i];

		vector_copia[i] = valor_que_se_intercambia;
	}

	intercambio_utiles = UTIL_V_ORIGINAL;
	UTIL_V_ORIGINAL = UTIL_V_COPIA;
	UTIL_V_COPIA = intercambio_utiles;
}

void imprimir_vectores(const int vector_original[], const int vector_copia[], const int UTIL_V_ORIGINAL, const int UTIL_V_COPIA)
{
	cout << "VECTOR ORIGINAL:" << endl;

	for(int i = 0; i < UTIL_V_ORIGINAL; i++)
	{
		cout << "Dato del componente " << i << ": "<< vector_original[i] << endl;
	}


	cout << "VECTOR COPIA:" << endl;

	for(int i = 0; i < UTIL_V_COPIA; i++)
	{
		cout << "Dato del componente " << i << ": "<< vector_copia[i] << endl;
	}
}