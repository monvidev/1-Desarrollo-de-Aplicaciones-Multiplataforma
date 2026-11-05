#include <iostream>
#include "cadena.h"

using namespace std;


//===================//
//*** CONSTRUCTOR ***//
//===================//

Cadena::Cadena(const Cadena &cadena)
{
    // 1º Reservo memoria adecuada para el vector del objeto donde voy a copiar y estoy creando

    int dim_cadena_copiada = cadena.length();
    this->v_cadena = new char[dim_cadena_copiada];

    if (v_cadena == 0)
    {
        cerr << "ERROR: No hay espacio en memoria" << endl;
    }


    // 2º Copiar el contenido del vector de "cadena" en mi nuevo objeto

    this->setCadena(cadena.v_cadena);
}

Cadena::Cadena()
{
    dim_actual = 5;

    v_cadena = new char[dim_actual];

    if (v_cadena == 0)
    {
        cerr << "ERROR: No hay espacio en memoria" << endl;
        exit(-1);
    }

    v_cadena[0] = '\0';
}


//==================//
//*** DESTRUCTOR ***//
//==================//

Cadena::~Cadena()
{
    delete[] v_cadena;
}


//===================//
//*** METODOS-SET ***//
//===================//

void Cadena::setCadena(const char cadena_a_asignar[])
{
    //1º Calculo la longitud de la cadena que me quieren asignar

    int longitud = 0;

    while (cadena_a_asignar[longitud] != '\0')
    {
        longitud++;
    }

    //2º) Reservar un nuevo vector del tamaño longitud + 1;

    char *nueva_cadena = new char[longitud+1];

    if (nueva_cadena == 0)
    {
        cerr << "ERROR: No hay memoria suficiente para continuar. Se abortará la ejecución!" << endl;
        exit (-1);
    }

    //3º) Copio el contenido de la cadena que me quieren asignar en el nuevo vector

    int i = 0;

    while (cadena_a_asignar[i] != '\0')
    {
        nueva_cadena[i] = cadena_a_asignar[i];
        i++;
    }
    nueva_cadena[i] = '\0';

    //4º) Borro el vector de caracteres que previamente tenía en mi objeto

    delete[] v_cadena;
    
    //5º) Asigno el puntero del objeto a la dirección del nuevo vector dinámico que ya contiene la copia de la cadena que me viene de fuera

    v_cadena = nueva_cadena;
    nueva_cadena = 0;
}


//=====================//
//*** MODULOS-FRONT ***//
//=====================//

void Cadena::printCadena()
{
    int i = 0;

    while (v_cadena[i] != '\0')
    {
        cout << v_cadena[i];
        i++;
    }
}


//====================//
//*** MODULOS-BACK ***//
//====================//

int Cadena::length() const
{
    int i = 0;

    while (v_cadena[i] != '\0')
    {
        i++;
    }

    return i+1;
}

void Cadena::operator=(const Cadena &cadena_a_asignar)
{
    setCadena(cadena_a_asignar.v_cadena);
}

void Cadena::operator=(char cadena_a_asignar[])
{
    setCadena(cadena_a_asignar);
}

void Cadena::operator=(const char cadena_a_asignar[])
{
    setCadena(cadena_a_asignar);
}

bool Cadena::operator==(Cadena &c)
{
    bool igual = false;

    if (length() == c.length())
    {
        igual = true;

        for (int i = 0; c.v_cadena[i] != '\0' && v_cadena[i] != '\0'; i++)
        {
            if (v_cadena[i] != c.v_cadena[i])
            {
                igual = false;
            }
        }
    }


    return igual;
}