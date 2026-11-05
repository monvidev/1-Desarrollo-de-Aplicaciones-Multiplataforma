#include <iostream>

using namespace std;


	// MODULOS-BACK //

/**
 * @brief Función que ordena los valores de vector
 * @pre los valores del vector deben estar desordenados
 * @param vector[]
 * @post los valores del vectors se habran ordenado
 * @date 24/04/2026
 * @author Victor Montero Gonzalez
 */
void ordenacion_seleccion(int vector[]);


	// MODULOS-FRONT //

/**
 * @brief Función para imprimir un vector de enteros
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void imprimir_vector(const int vector[], const int UTIL_V);



int main()
{
	// Varaibles

	const int DIM_V = 8;
	int vector[DIM_V] = {9, 18, -4, 2, -85, 1, 7, -2};
	int UTIL_V = 8;


	// LLamada a las funciones

	// Se imprime por pantalla el vector antes de la ordenación
	cout << "VECTOR ANTES DE LA ORDENACION:" << endl;
	imprimir_vector(vector, UTIL_V);

	// Llamamos a la función que ordena el vector
	ordenacion_seleccion(vector);

	// Se imprime por pantalla el vector despues de la ordenación
	cout << "VECTOR DESPUES DE LA ORDENACION:" << endl;
	imprimir_vector(vector, UTIL_V);

}


void ordenacion_seleccion(int vector[])
{
	int aux = 0;
	int pos_minima = 0;


	for()
	{
		
	}
}

void imprimir_vector(const int vector[], const int UTIL_V)
{
	for(int i = 0; i < UTIL_V; i++)
	{
		cout << vector[i] << " ";
	}

	cout << endl;
}