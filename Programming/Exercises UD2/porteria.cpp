#include <iostream>
#include <cmath>


using namespace std;


/*
*
* La localización de un retángulo se puede determinar con 4 valores que corresponden a los puntos de la esquina superior
* izquierda y esquina superior derecha. Escriba un programa que lea la posición de un rectángulo y de un punto cualquiera.
* Como resultado, escriba en la salida estándar si el punto se encuentra dentro del rectángulo.
*
* Ejercicio if medio
*
* @file porteria.cpp
* @date 15/12/2025
* @author Victor Montero Gonzalez
*
*/


int main()
{

	// Texto de inicio
	
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Bienvenido al programa de la porteria, en este programa crearemos una porteria con 4 puntos y haremos un tiro que veremos si va dentro o fuera" << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------" << endl;

	
	// Variables de los puntos de la porteria y del tiro
	
	float x1 = 0.0; // Coordenada x del punto 1
	float y1 = 0.0; // Coordenada y del punto 1
	
	float x2 = 0.0; // Coordenada x del punto 2
	float y2 = 0.0; // Coordenada y del punto 2
	
	float x3 = 0.0; // Coordenada x del punto 3
	float y3 = 0-0; // Coordenada y del punto 3
	
	float x4 = 0.0; // Coordenada x del punto 4
	float y4 = 0.0; // Coordenada y del punto 4
	
	
	float xtiro = 0.0; // Coordenada x del tiro
	float ytiro = 0.0; // Coordenada y del tiro
	
	
	// Formación de la porteria
	
	cout << "Lo primero es crear la porteria, para ello tendras que darme los valor de 4 puntos, que corresponden a las esquinas de la porteria. El punto 1 es la esquina inferior izquierda, el punto 2 es la esquina inferior derecha, el punto 3 es la esquina superior izquierda, y el punto 4 es la esquina superior derecha\n" << endl;
	
	cout << "Punto 1:" << endl;
	cout << "Eje X: ";
	cin >> x1;
	cout << "Eje Y: ";
	cin >> y1;
	
	cout << "Punto 2:" << endl;
	cout << "Eje X: ";
	cin >> x2;
	cout << "Eje Y: ";
	cin >> y2;
	
	cout << "Punto 3:" << endl;
	cout << "Eje X: ";
	cin >> x3;
	cout << "Eje Y: ";
	cin >> y3;
	
	cout << "Punto 4:" << endl;
	cout << "Eje X: ";
	cin >> x4;
	cout << "Eje Y: ";
	cin >> y4;
	
	
	// Porteria
	
	cout << "\n\t*************************************************************************" << endl;
	cout << "\t|                                                                       |" << endl;
	cout << "\t|                                                                       |" << endl;
	cout << "\t|                                                                       |" << endl;
	cout << "\t|                                                                       |" << endl;
	cout << "\t|                                                                       |" << endl;
	cout << "\t|                                  ( )                                  |" << endl;
	cout << "\t|                                ---|---                                |" << endl;
	cout << "\t|                                   |                                   |" << endl;
	cout << "\t|                                   |                                   |" << endl;
	cout << "\t|                                   |                                   |" << endl;
	cout << "\t|                                  ---                                  |" << endl;
	cout << "\t|                                 |   |                                 |" << endl;
	
	
	cout << "\n!!Bien, ya hemos creado la porteria, ahora toca chutar, a ver si eres tan bueno\n" << endl;
	
	
	// Tiro a porteria y sus condiciones
	
	cout << "Coordenadas del tiro:" << endl;
	cout << "Eje X: ";
	cin >> xtiro;
	cout << "Eje Y: ";
	cin >> ytiro;
	
	if(xtiro > x1 && xtiro < x2 && xtiro > x3 && xtiro < x4 && ytiro > y1 && ytiro > y2 && ytiro < y3 && ytiro < y4 )
	{
		cout << "!!Oleeee, vaya golazo" << endl;
	}
	else if(xtiro < x1 || xtiro > x2 || xtiro < x3 || xtiro > x4 || ytiro < y1 || ytiro < y2 || ytiro > y3 || ytiro > y4 )
	{
		cout << "Uy, que malo eres, has fallado" << endl;
	}
	else
	{
		cout << "Vaya, casi la metes, pero le has dado al borde de la porteria" << endl;
	}


	return 0;

}
