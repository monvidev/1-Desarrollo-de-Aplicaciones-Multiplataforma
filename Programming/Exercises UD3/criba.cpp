#include <iostream>
using namespace std;

#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define RESTORE_DEFAULT_COLOR "\033[0m"

int main()
{

    int x = -1;
    bool se_puede_dividir = false;
    bool es_primo = false;
    int totalPrimos = 0;
    int numero = 1;

    //Le pido al usuario un número para comprobar si es o no PRIMO
    cout << "¿Cuantos numeros primos queires?" << endl;
    cin >> x;

    //Código para comprobara si un número es o no primo!
    
	do
	{
	    for (int i = 2; i < numero; i++){ // Bucle que calcula si el numero es primo
		cout << "Probando la división " << numero << " % " << i << " = " <<  numero%i << endl;
		if (numero % i == 0)
		    se_puede_dividir = true;
	    }
	    if (se_puede_dividir == true){ // Condición que muestra por pantalla los números que no son primos
		es_primo = false;
		cout << "HE ENCONTRADO UNA DIVISIÓN CUYO RESTO ES CERO!" << endl;
		cout << RED_COLOR << numero << RESTORE_DEFAULT_COLOR << " NO es primo!" << endl;
	    }
	    else{ // Condición que muestra por pantalla los números que son primos
		es_primo = true;
		cout << "TODOS LOS RESTOS DE LAS DIVISIONES SALEN DISTINTAS DE CERO!" << endl;
		cout << GREEN_COLOR << numero << RESTORE_DEFAULT_COLOR <<" SI es primo!" << endl;
		totalPrimos++; // Aumento del número total de primos
	    }
	    
	    se_puede_dividir = false; // Reseteo de la variable
	    numero++; // Aumento del valor de número
	}   
	while (totalPrimos < x);

}
