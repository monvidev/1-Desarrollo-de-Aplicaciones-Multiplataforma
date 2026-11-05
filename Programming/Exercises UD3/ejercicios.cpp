#include <iostream>
#include <cmath>
#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define RESTORE_DEFAULT_COLOR "\033[0m"


using namespace std;


/**
 * @brief Función que imprime el menu de selección
 * @author Victor Montero Gonzalez
 */

void menu_principal()
{
	// Opciones del menu principal

	cout << "Factorial de un numero [1]" << endl;
	cout << "Media de 3 numeros [2]" << endl;
	cout << "Saber si un numero es primo [3]" << endl;
	cout << "Criba de Eratostenes [4]" << endl;
	cout << "Primos en intervalo [5]" << endl;
	cout << "Maximo comun divisor [6]" << endl;
	cout << "Minimo comun multiplo [7]" << endl;
	cout << "Cubo de un numero (Nicomano) [8]" << endl;
	cout << "Intercambio de variables [9]" << endl;
	cout << "MaxMin [10]" << endl;
	cout << "Ecuacion de segundo grado [11]" << endl;
	cout << "Procedimiento Time [12]" << endl;
	cout << "Parking [13]" << endl;
}


/**
 * @brief Función que realiza el calculo de la media de tres números
 * @param (E) numero1, numero2, numero3
 * @return Resultado de la media de los 3 números
 * @author Victor Montero Gonzalez
 */

double calculo_media(double num1, double num2, double num3)
{
	// Calculo de la media de los tres números
	
	double resultado = 0;
	resultado = (num1 + num2 + num3) / 3.0;
	
	return resultado;
}


/**
 * @brief Función que da la bienvenida al programa de la media de tres números, pide los números por pantalla, llama a la función que calcula la media e imrpime el resutlaado
 * @author Victor Montero Gonzalez
 */

void vista_media()
{
	// Texto de inicio
	
	cout << "\n";
	cout << "-------------------------------------------------" << endl;
	cout << "Bienvenido al ejercicio de la media de 3 numeros" << endl;
	cout << "-------------------------------------------------" << endl;
	
	
	// Variables
	
	double numero1 = 0.0, numero2 = 0.0, numero3 = 0.0;
	double resultado = 0.0;
	
	
	// Introducción de los numeros que se van a usar
	
	cout << "Introduzca los numeros para hacer la media" << endl;
	cout << "Numero1: ";
	cin >> numero1;
	cout << "Numero2: ";
	cin >> numero2;
	cout << "Numero3: ";
	cin >> numero3;
	
	
	// Llamada a la funcion que calcula la media de los numeros
	
	resultado = calculo_media(numero1, numero2, numero3);
	
	cout << "La media de " << numero1 << ", " << numero2 << " y " << numero3 << " es: " << resultado << endl;
}


/**
 * @brief Función que calcula el factorial del número n
 * @param (E) numero
 * @return !numero
 * @author Victor Montero Gonzalez
 */

int calculo_factorial(int num)
{
	// Varaibles
	
	int factorial = 1;
	
	
	// Calculo del factorial del numero n
	
	for (int i = 1; i <= num; i++)
	{
		factorial = factorial * i;
	}
	
	return factorial;
}


/**
 * @brief Función que da la bienvenida al programa del factorial, pide el número, llama a la función que calcula el factorial e imprime el resultado
 * @author Victor Montero Gonzalez
 */

void vista_factorial()
{
	// Texto de inicio
	
	cout << "\n";
	cout << "------------------------------------" << endl;
	cout << "Bienvenido al ejercicio del factoral" << endl;
	cout << "------------------------------------" << endl;
	
	
	// Varaibles
	
	int numero = 0;
	int resultado = 0;
	
	
	// Numero que se va a usar para el factorial
	
	cout << "¿De que numero quiere calcular el factorial?" << endl;
	cin >> numero;
	
	
	// Llamada a la funcion que calcula el factorial del numero
	
	resultado = calculo_factorial(numero);
	
	cout << "El factorial del numero " << numero << " es: " << resultado << endl;
}


/**
 * @brief Función que realiza el caluclo para comprobar si el número introducido es primo
 * @param (E) numero
 * @return Total de divisores del número introducido
 * @author Victor Montero Gonzalez
 */

int calculo_primo(int num)
{
	// Variables
	
	int division = 0, total_divisores = 0;
	
	
	// Calculo del numero para saber si es primo
	
	for (int i = 1; i <= num; i++)
	{
		division = num % i;
		
		if (division == 0)
		{
			total_divisores++;
		}
	}
	
	return total_divisores;
}


/**
 * @brief Función que da la bienvenida al programa del numero primo, pide el numero, llama a la función que calcula si es primo e imprime el resultado
 * @author Victor Montero Gonzalez
 */

void vista_primo()
{
	// Texto de inicio
	
	cout << "\n";
	cout << "----------------------------------------" << endl;
	cout << "Bienvenido al ejercicio del numero primo" << endl;
	cout << "----------------------------------------" << endl;
	
	
	// Varaibles
	
	int numero = 0;
	int resultado = 0;
	
	
	// Numero que se va a comprobar si es primo
	
	cout << "¿Que número quieres saber si es primo?" << endl;
	cin >> numero;
	
	
	// Llamada a la funcion que calcula si el número es primo
	
	resultado = calculo_primo(numero);
	
	if (resultado <= 2)
	{
		cout << "El numero " << numero << " es primo" << endl;
	}
	else
	{
		cout << "El numero " << numero << " no es primo" << endl;
	}
}


/**
 * @brief Función que calcula si el número es primo
 * @param (E) numero
 * @return Devuelve un booleano que puede ser true si tiene algun divisor o false si no tiene ningun divisor
 * @author Victor Montero Gonzalez
 */

bool calculoPrimoEratostenes(int num)
{
	bool se_puede_dividir = false;

	for (int i = 2; i < num; i++){
		if (num % i == 0)
		    se_puede_dividir = true;
	}
		    
	return se_puede_dividir; // Resultado que devuelve la función
}


/**
 * @brief Función que imprime el resultado dependiendo de si tiene divisores
 * @param (E) numero
 * @return Devuelve un valor booleano que puede ser un true o un false
 * @author Victor Montero Gonzalez
 */

bool confirmacion(int num)
{
	bool se_puede_dividir = false;
	bool es_primo = false;
	
	se_puede_dividir = calculoPrimoEratostenes(num);
	
	if (se_puede_dividir == true){ // Condición que muestra por pantalla los números que no son primos
		es_primo = false;
		cout << RED_COLOR << num << RESTORE_DEFAULT_COLOR << " ";
	}
	else{ // Condición que muestra por pantalla los números que son primos
		es_primo = true;
		cout << GREEN_COLOR << num << RESTORE_DEFAULT_COLOR << " ";
	}
	
	return es_primo; // Resulado que devuelve la función
}


/**
 * @brief Función que da la bienvenida al programa de la criba de Eratostenes, pide el numero, llama a la función que imprime el resultado y lleva la cuenta del total de primos
 * @author Victor Montero Gonzalez
 */

void vista_eratostenes()
{
	// Texto de inicio

	cout << "\n";
	cout << "------------------------------------" << endl;
	cout << "Bienvenido a la criba de Eratostenes" << endl;
	cout << "------------------------------------" << endl;


	// Varaibles 
	
    int x = -1;
    bool resultado = false;
    int totalPrimos = 0;
    int numero = 1;


    //Le pido al usuario un número para comprobar si es o no PRIMO

    cout << "¿Cuantos numeros primos queires?" << endl;
    cin >> x;


    //Código para comprobar si un número es o no primo!
    
	do
	{
	    resultado = confirmacion(numero);
	    
	    if (resultado == true) // Condición que aumenta el total de números primos
	    {
	    	totalPrimos++;
	    }
	    
	    numero++; // Aumento del valor de número
	}   
	while (totalPrimos < x);

	cout << "\n";

}


/**
 * @brief Función que calcula la cantidad de números primos que hay en el intervalo de valores
 * @pre a es positivo y b > a
 * @param (E) Intervalo a
 * @param (E) Intervalo b
 * @return Cantidad de números primos que hay en el intervalo
 * @author Victor Montero Gonzalez
 */

int numero_de_primos_en_el_intervalo(int a, int b)
{
	int total_primos = 0;
	int numero = 0;
	bool es_primo = true;


	for (a; a <= b; a++) // Bucle externo que aumenta el valor de a hasta que sea igual que b
	{
		for (numero = 2; numero < a; numero++) // Bucle interno que comprueba todas las divisiones posibles de un mismo número
		{
			if (a % numero == 0) // Condición que cambia el valor del booleano si el número no es primo
			{
				es_primo = false;
			}
		}

		if (es_primo == true) // Condición que aumenta la cantidad total de números primos
		{
			total_primos++;
		}

		es_primo = true; // Reinicio de la varaible booleana es_primo 
	}

	return total_primos;
}


/**
 * @brief Función que pide el intervalo de valores y llama a la función número_de_primos_en_el_intervalo
 * @return Cantidad de números primos que hay en el intervalo de valores
 * @author Victor Montero Gonzalez
 */

int intervalo_de_valores()
{
	// Varaibles

	int a = 0, b = 0;
	int resultado = 0;


	// Bucle que pide un intervalo de valores positivo, en el que a es mayor que b

	cout << "Introduzca un intervalo de valores de a hasta b. Recuerda que en el intervalo b es mayor que a." << endl;

	cin >> a; // Valor a del intervalo
	cin >> b; // Valor b del intervalo

	while (a < 1 || b < a) // Filtro que comprueba que el intervalo de números sea positivo y que b sea mayor que a
	{
		cout << "Intervalo de valores erroneo, introduzca de nuevo el intervalo." << endl;

		cin >> a;
		cin >> b;
	}
	
	resultado = numero_de_primos_en_el_intervalo(a, b); // Lamada a la función numero_de_primos_en_el_intervalo

	return resultado;
}


/**
 * @brief Función que da la bienvenida al programa de los números primos en un intervalo de valores
 * @author Victor Montero Gonzalez
 */

void vista_primos_intervalo()
{
	// Texto de inicio

	cout << "\n";
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al programa de los numeros primos en un interevalo de valores" << endl;
	cout << "------------------------------------------------------------------------" << endl;


	// Varaibles

	int resultado = 0;

	resultado = intervalo_de_valores(); // Lamada a la función intervalo_de_valores

	cout << "El total de primos en el intervalo es: " << GREEN_COLOR << resultado << RESTORE_DEFAULT_COLOR << endl;
}


/**
 * @brief Función que calcula el máximo común divisor de dos números
 * @pre  numero1 > 0 y numero2 > 0
 * @param (E) numero1
 * @param (E) numero2
 * @return El número mas grande por el que se puede dividir ambos números, el máximo comúm divisor
 * @author Victor Montero Gonzalez
 */

int calculo_mcd(int numero1, int numero2)
{
	// Varaibles

	int mcd = 0; // Varaible para el máximo común divisor
	int numero_division = 0; // Varaible para el número que se va a usar para dividir
	int resto1 = -1, resto2 = -1; // Variables para el resto de las divsiones


	// Calculo del máximo común divisor

	if (numero1 < numero2) // Condición en caso de que el número 1 sea menor que el número 2
	{
		for (numero_division = numero1; mcd == 0 ; numero_division--)
		{
			resto1 = numero1 % numero_division;
			resto2 = numero2 % numero_division;

			if (resto1 == 0 && resto2 == 0)
			{
				mcd = numero_division;
			}
		}
	}
	else // Condición en caso de que el número 2 sea menor que el número 1
	{
		for (numero_division = numero2; mcd == 0 ; numero_division--)
		{
			resto1 = numero1 % numero_division;
			resto2 = numero2 % numero_division;

			if (resto1 == 0 && resto2 == 0)
			{
				mcd = numero_division;
			}
		}
	}

	return mcd;
}


/**
 * @brief Función que pide los números que se van a utilizar para calcular el máximo comúm divisor
 * @author Victor Montero Gonzalez
 * @return Devuelve el máximo común divisor
 */

int numeros_para_el_mcd()
{
	// Varaibles

	int resultado = 0;
	int numero1 = 0, numero2 = 0;


	// Números que se van a utilizar para calcular el máximo común divisor

	cout << "Introduzca los nuermos que se van a usar para el calculo de mcd:" << endl;

	cin >> numero1;
	cin >> numero2;

	while (numero1 <= 0 || numero2 <= 0)
	{
		cout << "Has introducido un 0 o un numero negativo, porfavor introduzca nuevamente los numeros." << endl;

		cin >> numero1;
		cin >> numero2;
	}

	resultado = calculo_mcd(numero1, numero2);

	return resultado;
}


/**
 * @brief Función que da la bienvenida al programa del máximo común divisor
 * @author Victor Montero Gonzalez
 */

void vista_mcd()
{
	// Texto de inicio

	cout << "\n";
	cout << "-----------------------------------------------" << endl;
	cout << "Bienvenido al programa del maxumo comun divisor" << endl;
	cout << "-----------------------------------------------" << endl;


	// Variables

	int resultado = 0;

	resultado = numeros_para_el_mcd();

	cout << "El maximo comun divisor es: " << resultado << endl;
}


/**
 * @brief Función que devuelve el calculo de mínimo común multiplo
 * @pre numer1 > 0 y numero2 > 0
 * @param (E) numero1
 * @param (E) numero2
 * @return Calculo del mínimo común múltiplo
 * @author Victor Montero Gonzalez
 */

int calculo_mcm(int numero1, int numero2)
{
	// Varaibles

	int mcm = 0, mcd = 0;


	// Calculo de mcd

	mcd = calculo_mcd(numero1, numero2);


	// Calculo de mcm

	mcm = (numero1 * numero2) / mcd;

	return mcm;
}


/**
 * @brief Función que pide los números que se van a usar para calcular el mínimo común múltiplo
 * @return Devuelve al mínimo común múltiplo
 * @author Victor Montero Gonzalez
 */

int numeros_para_el_mcm()
{
	// Varaibles

	int resultado = 0;
	int numero1 = 0, numero2 = 0;


	// Números que se van a utilizar para calcular el máximo común divisor

	cout << "Introduzca los nuermos que se van a usar para el calculo de mcm:" << endl;

	cin >> numero1;
	cin >> numero2;

	while (numero1 <= 0 || numero2 <= 0)
	{
		cout << "Has introducido un 0 o un numero negativo, porfavor introduzca nuevamente los numeros." << endl;

		cin >> numero1;
		cin >> numero2;
	}

	resultado = calculo_mcm(numero1, numero2);

	return resultado;
}


/**
 * @brief Función que da la bienvenida al programa del mínimo común múltiplo
 * @author Victor Montero Gonzalez
 */

void vista_mcm()
{
	// Texto de inicio

	cout << "\n";
	cout << "------------------------------------------------" << endl;
	cout << "Bienvenido al programa del minimo comun multiplo" << endl;
	cout << "------------------------------------------------" << endl;


	// Varaibles

	int resultado = 0;

	resultado = numeros_para_el_mcm();

	cout << "El minimo comun multiplo es: "<< resultado << endl;
}


/**
 * @brief Función que calcula el cubo del número introducido
 * @pre numero > 1
 * @param (E) numero
 * @return Calculo del cubo del número introducido
 * @author Victor Montero Gonzalez
 */

int calculo_cubo_nicomano(int numero)
{
	// Varaibles

	int cubo_del_numero = 0; // Varaible para el resultado final
	int cantidad_de_impares_anteriores = 0; // Varaible que cuenta la cantidad total de impares que hay antes de llegar al primer impar que corresponda al número introducido


	// Bucles que calculan el cubo del número

	/* for (int numero_anterior = 1; numero_anterior < numero; numero_anterior++)
	{
		do
		{

		}
		while ()
	} */

	for (int numero_que_se_divide = 1; numero_que_se_divide <= numero; numero_que_se_divide++) // Bucle que me calcula los números impares
	{
		if (numero_que_se_divide % 2 != 0)
		{
			cout << numero_que_se_divide << " ";
		}
	}


	return cubo_del_numero;
}


/**
 * @brief Función que pide el número del que se quiere saber el cuadrado
 * @return Resultado del calculo del cubo
 * @author Victor Montero Gonzalez
 */

int numero_para_nicomano()
{
	// Varaibles

	int numero = 0, resultado = 0;


	// Indroducir número para calcular su cubo

	cout << "Introduzca el numero del que quiere calcular su cubo." << endl;
	cin >> numero;

	while (numero < 1)
	{
		cout << "El numero introducido no es valido, porfavor introduzca otro numero." << endl;

		cin >> numero;
	}

	resultado = calculo_cubo_nicomano(numero);

	return resultado;
}


/**
 * @brief Función que da laa bienvenida al programa de nicómano y devuleve el resultado por pantalla
 * @author Victor Montero Gonzalez
 */

void vista_nicomano()
{
	// Texto de inicio

	cout << "\n";
	cout << "----------------------------------" << endl;
	cout << "Bienvenido al programa de nicomano" << endl;
	cout << "----------------------------------" << endl;


	// Variables

	int resultado = 0;

	resultado = numero_para_nicomano();

	cout << "El cubo es: " << resultado << endl;
}


/**
 * @brief Función que me intercambia el valor entre dos variables
 * @param (E) a
 * @param (E) b
 * @author Victor Montero Gonzalez
 */

void intercambio_de_variables(int &a, int &b)
{
	int aux = 0;

	aux = a;
	a = b;
	b = a;
}


/**
 * @brief Función que te calcula el máximo y el mínimo de la secuencia
 * @param (E) Varaible del núermo máximo
 * @param (E) Varaible del número mínimo
 * @author Victor Montero Gonzalez
 */

void calculo_maximo_minimo(double &maximo, double &minimo)
{
	// Varaibles

	int secuencia = 7; // Varaible para cantidad de números en la secuencia
	int total_numeros = 0; // Varaible contadora de la cantidad de números introducidos
	double numero = 0.0; // Variable para el número introducido


	// Calculo del máximo y mínimo

	cout << "Introduzca una secuencia de 7 numeros positivos." << endl;

	do
	{
		cin >> numero;

		while (numero <= 0) // Filtro para que el número introducido sea positivo
		{
			cout << "Numero no valido." << endl;
			cin >> numero;
		}

		if (numero > maximo)
		{
			maximo = numero;
			
			if (minimo == 0)
			{
				minimo = numero;
			}
		}
		if (numero < minimo)
		{
			minimo = numero;
		}

		total_numeros++;
	}
	while (total_numeros < secuencia);
	
}


/**
 * @brief Función que da la bienvenida al programa del maxmin y muestra el resultado por pantalla
 * @author Victor Montero Gonzalez
 */

void vista_maxmin()
{
	// Texto de inicio

	cout << "\n";
	cout << "-----------------------------" << endl;
	cout << "Bienvenido al programa maxmin" << endl;
	cout << "-----------------------------" << endl;


	// Variables

	double maximo = 0.0; // Variable para el valor maximo
	double minimo = 0.0; // Variable para el valor minimo


	// Lamada a la función

	calculo_maximo_minimo(maximo, minimo);

	cout << "El maximo es: " << maximo << endl;
	cout << "El minimo es: " << minimo << endl;
}


/**
 * @brief Función que calcula la ecuación de segundo grado
 * @param a (E) Valor a
 * @param b (E) Valor b
 * @param c (E) Valor c
 * @param x1 (S) Resultado 1, paso por referencia
 * @param x2 (S) Resultado 2, paso por referencia
 * @author Victor Montero Gonzalez
 */

void calculo_ecuacion_gdos(int a, int b, int c, double &x1, double &x2)
{
	// Varaibles

	double discriminante = 0; // Varaible para el discriminante


	// Calculo

	discriminante = (pow(b, 2) - 4 * a * c); // Calculo del discriminante
	
	if (discriminante > 0) // Caso en el que el discriminante es mayor que 0, devuelve 2 resultados
	{
		x1 = (-b + sqrt(discriminante)) / (2 * a); // Calculo de x1
		x2 = (-b - sqrt(discriminante)) / (2 * a); // Calculo de x2
	}
	else if (discriminante == 0) // Caso en el que el discriminante es 0, se devuleve un resultado ya que se convierte en una ecuación de primer grado
	{
		cout << "EL discriminante es 0, los resultados son iguales." << endl;

		x1 = (-b + sqrt(discriminante)) / (2 * a); // Calculo de x1
		x2 = (-b - sqrt(discriminante)) / (2 * a); // Calculo de x2
	}
	else // Caso en el que el discriminante es negativo, por lo que no hay solución posible
	{
		cout << "El discriminante es negativo, no hay solución posible. Se mostrara 0 en los resultados." << endl;
	}
}


/**
 * @brief Función que da la bienvenida al programa de la ecuación de segundo grado e imprime los resultados por pantalla
 * @author Victor Montero Gonzalez
 */

void vista_ecuacion_gdos()
{
	// Texto de inicio

	cout << "\n";
	cout << "------------------------------------------------------" << endl;
	cout << "Bienvenido al programa de la ecuacion de segundo grado" << endl;
	cout << "------------------------------------------------------" << endl;


	// Variables

	int a = 0, b = 0, c = 0; // Varaibles para los valores
	double x1 = 0, x2 = 0; // Variables para los resultados


	// Datos que se van a usar para el calculo de la función

	cout << "Introduzca los valores de a, b y c." << endl;
	
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;


	// Llamada a la función de calcula la ecuación de segundo grado

	calculo_ecuacion_gdos(a, b, c, x1, x2);

	cout << "X1 = " << x1 << endl; // Mostrar por pantalla el resultado de x1
	cout << "X2 = " << x2 << endl; // Mostrar por pantalla el resultado de x2
}


/**
 * @brief Función que calcula la cantidad de días, horas, minutos y segundos
 * @pre segundos > 0
 * @param (E) segundosParaCalular
 * @param (E/S) dias
 * @param (E/S) horas
 * @param (E/S) minutos
 * @param (E/S) segundos
 * @return Devuelve la cantidad de días, horas, minutos y segundos
 * @author Victor Montero Gonzalez
 */

void dias_horas_minutos_segundos(int segundosParaCalcular, int &dias, int &horas, int &minutos, int &segundos)
{

	// Calculo de los días, horas, minutos y segundos

	dias = segundosParaCalcular / 86400;

	segundosParaCalcular = segundosParaCalcular % 86400;

	horas = segundosParaCalcular / 3600;

	segundosParaCalcular = segundosParaCalcular % 3600;

	minutos = segundosParaCalcular / 60;

	segundosParaCalcular = segundosParaCalcular % 60;

	segundos = segundosParaCalcular;
}


/**
 * @brief Función que pide la cantidad de segundos
 * @return Cantidad de segundos
 * @author Victor Montero Gonzalez
 */

int cantidad_segundos()
{
	// Varaibles

	int segundos = 0; // Varaible donde se van a alamcenar la cantidad de segundos


	// Introducir cantidad de segundos

	cout << "Introduzca la cantidad de segundos." << endl;

	cout << "Segundos: ";
	cin >> segundos;

	while (segundos < 1) // Filtro que comprueba que la cantidad de segundos no sea menor que 1
	{
		cout << "La cantidad de segundos no es valida, vuela a introducir los segundos." << endl;

		cout << "Segundos: ";
		cin >> segundos;
	}


	return segundos;
}


/**
 * @brief Función que da la bienvenida al programa del procedimiento time
 * @author Victor Montero Gonzalez
 */

void vista_procedimientoTime()
{
	// Texto de inicio

	cout << "\n";
	cout << "---------------------------------------------" << endl;
	cout << "Bienvenido al programa del procedimiento time" << endl;
	cout << "---------------------------------------------" << endl;


	// Varaibles

	int segundosParaCalcular = 0; // Varaible donde se va a almacena la cantidad de segundos


	int segundos = 0; // Varaible para los segundos
	int minutos = 0; // Varaible para los minutos
	int horas = 0; // Varaible para los horas
	int dias = 0; // Varaible para los días


	// Llamada a la función que pide la cantidad de segundos

	segundosParaCalcular = cantidad_segundos();


	// Lamada a la función que calcula la cantidad de días, horas, minutos y segundos

	dias_horas_minutos_segundos(segundosParaCalcular, dias, horas, minutos, segundos);


	// Resultados

	cout << "Dias: " << dias << endl;
	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Segundos: " << segundos << endl;
}


/**
 * @brief Función que calcula el cargo para cada cliente
 * @pre horas > 0 && horas < 25
 * @param horas (E) Cantidad de horas que ha estado estacionado el vehiculo
 * @return Cargo del vehiculo
 * @author Victor Montero Gonzalez
 */

double calcular_cargos(double horas)
{
    // Varaibles

    double cargo = 0; // Varaible para el cargo del vehiculo


    // Calculos del cargo del vehiculo

    if (horas <= 3) // ACaso en el que horas es 3
    {
        cargo = 2;
    }
    else if (horas > 3) // Caso en el que horas es mayor que 3
    {
        cargo = cargo + 2;

        for (cargo; horas > 3; horas--)
        {
            cargo = cargo + 0.5;
        }
    }

    if(cargo > 10) // Caso en el que cargo sea mayor que 10
    {
        cargo = 10;
    }
    

    return cargo;
}


/**
 * @brief Función que pide la cantidad que de horas que ha estado aparcado los vehiculo
 * @param cantidad_vehiculos (E) Varaible que almacena la cantidad del vehiculos que estan aparcados
 * @author Victor Montero Gonzalez
 */

void horas(int cantidad_vehiculos)
{
    // Variables

    double horas_aparcado = 0; // Varaible para la cantidad de horas que ha estado aparcado un vehiculo
    double total_cargos = 0, total_horas = 0; // Variables para el total de cargos y horas
    int numero_vehiculo = 1; // Variable para el número del vehiculo
    double cargo = 0; // Varaible que almacenara el resultado del cargo del vehículo


    // Introducir las horas de cada vehiculo

    do // Bucle que pide la cantidad de horas que ha estado aparcado un vehiculo
    {
        cout << "Horas vehiculo " << numero_vehiculo << " : ";
        cin >> horas_aparcado;

        while (horas_aparcado < 1 || horas_aparcado > 24) // Filtro que compruba que las horas introducidas sean mayor que 0
        {
            cout << "La cantidad de horas no es valida, vuelva a introducir las horas." << endl;
            
            cout << "Horas vehiculo " << numero_vehiculo << " : ";
            cin >> horas_aparcado;
        }


        // Llamada a la función que calcula el cargo

        cargo = calcular_cargos(horas_aparcado);

        cout << "Cargo total del coche: " << cargo << endl;


        // Calculo total de horas y cargo total

        total_horas = total_horas + horas_aparcado;
        total_cargos = total_cargos + cargo;


        numero_vehiculo++; // Aumento de la varaible que indica en número del coche
    } 
    while (numero_vehiculo <= cantidad_vehiculos);

    // Mensaje por pantalla que muestra el total de horas y el total de cargos

    cout << "Horas totales: " << total_horas << endl;
    cout << "Cargo total: " << total_cargos << endl;
}


/**
 * @brief Función que pide la cantidad de vehiuclos que estan aparcados
 * @return Cantidad de vehiculos aparcados
 * @author Victor Montero Gonzalez
 */

int vehiculos_aparcados()
{
    // Varaibles

    int cantidad_vehiculos = 0; // Varaible para la cantidad de vehiculos aparcados


    // Introducir la cantidad de vehiculos aparcados

    cout << "Introduzca la cantidad de vehiculos para calcular los cargos." << endl;

    cin >> cantidad_vehiculos;

    while (cantidad_vehiculos < 1) // Filtro que comprueba si el número introducido es mayor que 0
    {
        cout << "La cantidad de vehiculos no es validad, vuelva a introducir la cantidad." << endl;

        cin >> cantidad_vehiculos;
    }


    return cantidad_vehiculos;
}



int main()
{

	// Texto de inicio
	
	cout << "----------------------------------------------" << endl;
	cout << "Bienvenido al programa de todos los ejercicios" << endl;
	cout << "----------------------------------------------" << endl;
	
	
	// Varaibles
	
	int opcion = 0; // Variable para el caso elejido
	int a = 4, b = 7; // Valores para el intercambio
	int vehiculos = 0; // Cantidad de vehiculos aparcados
	
	
	// Menu de opciones
	
	cout << "¿Que desea realizar?" << endl;
	
	menu_principal();
	cin >> opcion;
	
	
	// Estructura de selección multiple para los diferentes casos
	
	switch (opcion)
	{
		case 1: // Caso para el factorial de un número
			vista_factorial();
			break;
		case 2: // Caso para la media de un número
			vista_media();
			break;
		case 3: // Caso para saber si un número es primo
			vista_primo();
			break;
		case 4: // Caso para la criba de Eratostenes
			vista_eratostenes();
			break;
		case 5: // Caso para la cantidad de primos en un intervalo
			vista_primos_intervalo();
			break;
		case 6: // Caso para el maximo común divisor
			vista_mcd();
			break;
		case 7: // Caso para el minimo común multiplo
			vista_mcm();
			break;
		case 8: // Caso para nicomano 
			vista_nicomano();
			break;
		case 9: // Caso para el intercambio de dos variables

			cout << "Valor de las variables ANTES del intercambio." << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;


			// LLamada a la función que intercambia los valores

			intercambio_de_variables(a, b);


			cout << "Valor de las variables DESPUES del intercambio." << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			break;
		case 10: // Caso para el maximo y minimo de una secuencia de valores reales
			vista_maxmin();
			break;
		case 11: // Caso para la ecuación de segundo grado
			vista_ecuacion_gdos();
			break;
		case 12: // Caso para el procedimiento time
			vista_procedimientoTime();
			break;
		case 13: // Caso para el parking
			vehiculos = vehiculos_aparcados();
			horas(vehiculos);
			break;
		default:
			cout << "No se ha seleccionado ninguna opcion" << endl;
	}

	return 0;

}