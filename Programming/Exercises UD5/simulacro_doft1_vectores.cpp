#include <iostream>
#include <cmath>

using namespace std;


	// MODULOS-BACK //

/**
 * @brief Función para el programa que de los números pares
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void pares();

/**
 * @brief Función para el programa de los números primos
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void primos();

/**
 * @brief Función para el programa de los elementos repetidos
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void elementos_repetidos();

/**
 * @brief Función que se encarga de imprimir una cadena de caracteres al reves
 * @date 21/04/2026
 * @author Victor Montero Gonzalez
 */
void invierte_cadena();

/**
 * @brief Función para introducir los valores iniciales de los componentes del vector original
 * @pre UTIL_V_ORIGINAL = 0
 * @pre El vector original tiene que estar vacio, vector_original[] = {0}
 * @param (E) DIM_V_ORIGINAL
 * @param (E/S) vector_original[]
 * @param (E/S) UTIL_V_ORIGINAL
 * @post UTIL_V_ORIGINAL = DIM_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void introducir_valores(const int DIM_V_ORIGINAL, int vector_original[], int &UTIL_V_ORIGINAL);

/**
 * @brief Función que comprueba si el número es par
 * @param (E) valor_vector
 * @return es_par = true si es par, es_par = false si no es par
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
bool es_par(int valor_vector);

/**
 * @brief Función que comprueba si el número es primo
 * @param (E) valor_vector
 * @return es_primo = true si es primo, es_primo = false si no es primo
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
bool es_primo(int valor_vector);

/**
 * @brief Función para copiar los números pares del vector original al segundo vector (vector_copia)
 * @pre UTIL_V_COPIA = 0
 * @pre El vector copia tiene que estar vacio, vector_copia[] = {0}
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @param (E/S) vector_copia[]
 * @param (E/S) UTIL_V_COPIA
 * @post UTIL_V_COPIA <= UTIL_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void copiar_numeros_pares(const int vector_original[], int UTIL_V_ORIGINAL, int vector_copia[], int &UTIL_V_COPIA);

/**
 * @brief Función para copiar los números primos del vector original al segundo vector (vector_copia)
 * @pre UTIL_V_COPIA = 0
 * @pre El vector copia tiene que estar vacio, vector_copia[] = {0}
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @param (E/S) vector_copia[]
 * @param (E/S) UTIL_V_COPIA
 * @post UTIL_V_COPIA <= UTIL_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void copiar_numeros_primos(const int vector_original[], const int UTIL_V_ORIGINAL, int vector_copia[], int &UTIL_V_COPIA);

/**
 * @brief Función para copiar los elementos en el segundo vector (vector_copia) sin que haya elementos repetidos de forma contigua
 * @pre UTIL_V_COPIA = 0
 * @pre El vector copia tiene que estar vacio, vector_copia[] = {0}
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @param (E/S) vector_copia[]
 * @param (E/S) UTIL_V_COPIA
 * @post UTIL_V_COPIA <= UTIL_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void eliminar_datos_repetidos(const int vector_original[], const int UTIL_V_ORIGINAL, int vector_copia[], int &UTIL_V_COPIA);

/**
 * @brief Función que copia los datos del vector original al vector copia de manera inversa
 * @pre UTIL_V_COPIA = 0
 * @pre El vector copia tiene que estar vacio, vector_copia[] = {0}
 * @pre DIM_V_COPIA >= DIM_V_ORIGINAL
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @param (E/S) vector_copia[]
 * @param (E/S) UTIL_V_COPIA
 * @post UTIL_V_COPIA <= UTIL_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void convertir_cadena_al_reves(const char vector_original[], const int UTIL_V_ORIGINAL, char vector_copia[], int &UTIL_V_COPIA);

/**
 * @brief Función que calcula la longitud una cadena de caracteres que recibe como parametro
 * @param vector[]
 * @return i = longitud de la cadena
 * @date 23/04/2026
 * @author Victor Montero Gonzalez
 */
int longitud_cadena(const char vector[]);

/**
 * @brief Función que compruba si la palabra es un palindromo (palabra que se lee igual de izquiarda a derecha y viceversa)
 * @param vector1[]
 * @param vector2[]
 * @date 23/04/2026
 * @return true si la plabra es un palindromo / false si la palabra no es un palindromo
 * @author Victor Montero Gonzalez
 */
bool palindromo(const char vector[]);


	// MODULOS-FRONT //

/**
 * @brief Función para imprimir el menu de los distintos modulos
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void menu_de_seleccion_de_modulos();

/**
 * @brief Función para imprimir el menu de los distintos programas con utiles
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void menu_de_seleccion_de_ejercicios_con_utiles();

/**
 * @brief Función para imprimir el menu de los distintos programas con centinela
 * @date 16/04/2026
 * @author Victor Montero Gonzalez 
 */
void menu_de_seleccion_de_ejercicios_con_centinela();

/**
 * @brief Función para imprimir un vector de enteros
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @date 16/04/2026
 * @author Victor Montero Gonzalez
 */
void imprimir_vector(int vector_copia[], int UTIL_V_ORIGINAL);

/**
 * @brief Función para imprimir un vectror de caracteres
 * @param (E) vector_original[]
 * @param (E) UTIL_V_ORIGINAL
 * @date 22/04/2026
 * @author Victor Montero Gonzalez
 */
void imprimir_vector_caracteres(char vector_copia[]);


int main()
{
	// Variables

	int modulos = 0; // Varaible para seleccionar el tipo de modulos a usar
	int programa = 0; // Varaible para seleccionar el programa
	bool salir = false; // Variable para indicar si se quiere salir del programa


	// Llamada a la función que muestra el menu de selección

	menu_de_seleccion_de_modulos();


	// Estrucutura condicional de selección del programa

	cout << "Selecione que modulos quiere utilizar." << endl;
	cin >> modulos;


	if(modulos == 1)
	{
		// Llamada a la función que imprime el menu de ejercicios con utiles

		menu_de_seleccion_de_ejercicios_con_utiles();


		// Bucle con estrucutura condicional de selección del programa

		do
		{
			cout << "Introduzca el programa que quiere utilizar." << endl;
			cin >> programa;

			if(programa == 1)
			{
				pares();
			}
			else if(programa == 2)
			{
				primos();
			}
			else if(programa == 3)
			{
				elementos_repetidos();
			}
			else
			{
				cout << "No se ha seleccionado ningun programa" << endl;
				salir = true;
			}
		}
		while(salir != true);
	}
	else if(modulos == 2)
	{
		// Llamada a la función que imprime el menu de ejercicios con centinela

		menu_de_seleccion_de_ejercicios_con_centinela();


		// Estrucutura condicional de selección del programa

		do
		{
			cout << "Introduzca el programa que quiere utilizar." << endl;
			cin >> programa;

			if(programa == 1)
			{
				invierte_cadena();
			}
			else
			{
				cout << "No se ha seleccionado ningun programa" << endl;
				salir = true;
			}
		}
		while(salir != true);
	}
	else
	{
		cout << "No ha seleccionado ninguno de los modulos." << endl;
	}


	return 0;
}


void menu_de_seleccion_de_modulos()
{
	cout << "==========================================================" << endl;
	cout << "Bienvenido al programa de los modulos con UTIL y CENTINELA" << endl;
	cout << "==========================================================" << endl;

	cout << "\n\tMENU DE SELECCION" << endl;
	cout << "Modulos con UTILES [1]" << endl;
	cout << "Modulos con CENTINELA [2]\n" << endl;
}

void menu_de_seleccion_de_ejercicios_con_utiles()
{
	cout << "===================================================" << endl;
	cout << "Bienvenido al programa de los ejercicios con UTILES" << endl;
	cout << "===================================================" << endl;

	cout << "\n\tMENU DE SELECCION" << endl;
	cout << "Ejercicio pares [1]" << endl;
	cout << "Ejercicio primos [2]" << endl;
	cout << "Datos repetios [3]\n" << endl;
}

void menu_de_seleccion_de_ejercicios_con_centinela()
{
	cout << "======================================================" << endl;
	cout << "Bienvenido al programa de los ejercicios con CENTINELA" << endl;
	cout << "======================================================" << endl;

	cout << "\n\tMENU DE SELECCION" << endl;
	cout << "Programa invierte cadena [1]\n" << endl;
}

void introducir_valores(const int DIM_V_ORIGINAL, int vector_original[], int &UTIL_V_ORIGINAL)
{
	int i = 0;

	for(i = 0; i < DIM_V_ORIGINAL; i++)
	{
		cout << "Dato del componente " << i << ": ";
		cin >> vector_original[i];
	}

	UTIL_V_ORIGINAL = i;
}

void imprimir_vector(int vector_copia[], int UTIL_V_COPIA)
{
	for(int i = 0; i < UTIL_V_COPIA; i++)
	{
		cout << vector_copia[i] << endl;
	}
}

void imprimir_vector_caracteres(char vector_copia[])
{
	int i = 0;

	while (vector_copia[i] != '\0')
	{
        cout << vector_copia[i];
        i++;
    }

    cout << endl;
}

bool es_par(int valor_vector)
{
	bool es_par = true;

	if(valor_vector % 2 == 0)
	{
		es_par = true;
	}
	else
	{
		es_par = false;
	}

	return es_par;
}

bool es_primo(int valor_vector)
{
	bool es_primo = true;

	for(int i = 2; i < valor_vector && es_primo == true; i++)
	{
		if(valor_vector % i == 0)
		{
			es_primo = false;
		}
	}

	return es_primo;
}

void copiar_numeros_primos(const int vector_original[], const int UTIL_V_ORIGINAL, int vector_copia[], int &UTIL_V_COPIA)
{
	int indice_copia = 0;

	for(int i = 0; i < UTIL_V_ORIGINAL; i++)
	{
		if(es_primo(vector_original[i]) == true)
		{
			vector_copia[indice_copia] = vector_original[i];
			indice_copia++;
		}
	}

	UTIL_V_COPIA = indice_copia;
}

void copiar_numeros_pares(const int vector_original[], const int UTIL_V_ORIGINAL, int vector_copia[], int &UTIL_V_COPIA)
{
	int indice_copia = 0;

	for(int i = 0; i < UTIL_V_ORIGINAL; i++)
	{
		if(es_par(vector_original[i]) == true)
		{
			vector_copia[indice_copia] = vector_original[i];
			indice_copia++;
		}
	}

	UTIL_V_COPIA = indice_copia;
}

void eliminar_datos_repetidos(const int vector_original[], const int UTIL_V_ORIGINAL, int vector_copia[], int &UTIL_V_COPIA)
{
	int indice_copia = 0;

	for(int i = 0; i < UTIL_V_ORIGINAL; i++)
	{
		if(vector_original[i] != vector_original[i-1])
		{
			vector_copia[indice_copia] = vector_original[i];
			indice_copia++;
		}
	}

	UTIL_V_COPIA = indice_copia;
}

void convertir_cadena_al_reves(const char vector_original[], char vector_copia[])
{
	int i = longitud_cadena(vector_original); // Varaible para el indice del vector original
	int indice_v_copia = 0; // Varaible para el indice del vector copia

	while (i >= 0)
	{
       	vector_copia[indice_v_copia] = vector_original[i-1];
        i--;
        indice_v_copia++;
    }
}

int longitud_cadena(const char vector[])
{
	int longitud = 0;
	int i = 0;

	while(vector[i] != '\0')
	{
		i++;
	}

	longitud = i;

	return longitud;
}

void pares()
{
	// Variables

	const int DIM_V_ORIGINAL = 10; // Varaible para la dimensión del vector original
	int vector_original[DIM_V_ORIGINAL] = {0}; // Vector original
	int UTIL_V_ORIGINAL = 0; // Varaible para la util del vector original
	const int DIM_V_COPIA = 10; // Varaible para la dimesión del vector copia
	int vector_copia[DIM_V_COPIA] = {0}; // Vector copia
	int UTIL_V_COPIA = 0; // Varaible para la util del vector copia


	// Bienvenida al programa

	cout << "===========================================" << endl;
	cout << "Bienvenido al programa de los numeros pares" << endl;
	cout << "===========================================" << endl;


	// Llamada a las funciones

	introducir_valores(DIM_V_ORIGINAL, vector_original, UTIL_V_ORIGINAL);

	copiar_numeros_pares(vector_original, UTIL_V_ORIGINAL, vector_copia, UTIL_V_COPIA);

	imprimir_vector(vector_copia, UTIL_V_COPIA);
}

void primos()
{
	// Variables

	const int DIM_V_ORIGINAL = 10; // Varaible para la dimensión del vector original
	int vector_original[DIM_V_ORIGINAL] = {0}; // Vector original
	int UTIL_V_ORIGINAL = 0; // Varaible para la util del vector original
	const int DIM_V_COPIA = 10; // Varaible para la dimesión del vector copia
	int vector_copia[DIM_V_COPIA] = {0}; // Vector copia
	int UTIL_V_COPIA = 0; // Varaible para la util del vector copia


	// Bienvenida al programa

	cout << "============================================" << endl;
	cout << "Bienvenido al programa de los numeros primos" << endl;
	cout << "============================================" << endl;


	// Llamada a las funciones

	introducir_valores(DIM_V_ORIGINAL, vector_original, UTIL_V_ORIGINAL);

	copiar_numeros_primos(vector_original, UTIL_V_ORIGINAL, vector_copia, UTIL_V_COPIA);

	imprimir_vector(vector_copia, UTIL_V_COPIA);
}

void elementos_repetidos()
{
	// Variables

	const int DIM_V_ORIGINAL = 10; // Varaible para la dimensión del vector original
	int vector_original[DIM_V_ORIGINAL] = {0}; // Vector original
	int UTIL_V_ORIGINAL = 0; // Varaible para la util del vector original
	const int DIM_V_COPIA = 10; // Varaible para la dimesión del vector copia
	int vector_copia[DIM_V_COPIA] = {0}; // Vector copia
	int UTIL_V_COPIA = 0; // Varaible para la util del vector copia


	// Bienvenida al programa

	cout << "=================================================" << endl;
	cout << "Bienvenido al programa de los elementos repetidos" << endl;
	cout << "=================================================" << endl;


	// Llamada a las funciones

	introducir_valores(DIM_V_ORIGINAL, vector_original, UTIL_V_ORIGINAL);

	eliminar_datos_repetidos(vector_original, UTIL_V_ORIGINAL, vector_copia, UTIL_V_COPIA);

	imprimir_vector(vector_copia, UTIL_V_COPIA);
}

void invierte_cadena()
{
	// Variables

	const int DIM_V_ORIGINAL = 10; // Varaible para la dimensión del vector original
	char vector_original[DIM_V_ORIGINAL] = {"VictorMon"}; // Vector original
	const int DIM_V_COPIA = 10; // Varaible para la dimesión del vector copia
	char vector_copia[DIM_V_COPIA] = {"VictorMon"}; // Vector copia


	// Bienvenida al programa

	cout << "======================================" << endl;
	cout << "Bienvenido al programa invierte cadena" << endl;
	cout << "======================================" << endl;


	// Llamada a las funciones

	convertir_cadena_al_reves(vector_original, vector_copia);

	imprimir_vector_caracteres(vector_copia);
}

bool palindromo(const char vector[]);
{
	// Variables

	const int DIM_V_1 = 10; // Varaible para la dimensión del vector 1
	char vector1[DIM_V_1] = {"rotomotor"}; // Vector 1 con un palindromo
	const int DIM_V_2 = 10; // Varaible para la dimesión del vector 2
	char vector2[DIM_V_2] = {"sabiduria"}; // Vector 2 sin un palindromo


	// Bienvenida al programa

	cout << "=====================================" << endl;
	cout << "Bienvenido al programa del palindromo" << endl;
	cout << "=====================================" << endl;


	// Llamada a las funciones

	convertir_cadena_al_reves(vector_original, vector_copia);

	imprimir_vector_caracteres(vector_copia);
}