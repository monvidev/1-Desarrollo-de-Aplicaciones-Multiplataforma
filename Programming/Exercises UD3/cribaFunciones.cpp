#include <iostream>
using namespace std;

#define RED_COLOR "\033[1;31m"
#define GREEN_COLOR "\033[1;32m"
#define RESTORE_DEFAULT_COLOR "\033[0m"


bool calculoPrimo(int num) // Función que calcula si el número es primo
{
	bool se_puede_dividir = false;

	for (int i = 2; i < num; i++){
		if (num % i == 0)
		    se_puede_dividir = true;
	}
		    
	return se_puede_dividir; // Resultado que devuelve la función
}


bool confirmacion(int num) // Función que imprime los números por pantalla
{
	bool se_puede_dividir = false;
	bool es_primo = false;
	
	se_puede_dividir = calculoPrimo(num);
	
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


int main()
{

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
