#include <iostream>

using namespace std;


/**
 * @brief Función que pide el tipo de pieza que se va a utilizar
 * @date 02/03/2026
 * @author MonviDev
 * @return Tipo de pieza, reina(R), caballo(C), torre(T)
 */

char tipo_pieza()
{
    // Varaibles

    char pieza = '\0';


    cout << "\nIntroduzca la letra de algunas de estas piezas, reina(R), caballo(C) o torre(T)." << endl;

    cin >> pieza;
    

    while(pieza != 'R' && pieza != 'C' && pieza != 'T') // Filtro que compreba la pieza que se ha introducido
    {
        cout << "Pieza no valida, vuelva a introducir la pieza" << endl;

        cin >> pieza;
    }

    return pieza;
}


/**
 * @brief Función que pide la posición inical de la pieza
 * @param (S) columna_inicial
 * @param (S) fila_inicial
 * @post fila < 9 && > 0
 * @post columna = {a, b, c, d, e, f, g, h}
 * @date 02/03/2026
 * @author MonviDev
 */

void posicion_inicial(char &columna, int &fila)
{
    cout << "Introduzca la posicion incial de la pieza, en formato ajedrez." << endl;

    cin >> columna;
    cin >> fila;


    while((fila < 1 || fila > 8) || (columna != 'a' && columna != 'b' && columna != 'c' && columna != 'd' && columna != 'e' && columna != 'f' && columna != 'g' && columna != 'h'))
    {
        cout << "La posicion esta fuera del tablero, introduzca de nuevo la posicion." << endl;

        cin >> columna;
        cin >> fila;
    }
}


/**
 * @brief Función que pide el movimiento de la pieza
 * @param (S) movimiento_columna
 * @param (S) movimiento_fila
 * @post movimiento_fila < 9 && > 0
 * @post columna = {a, b, c, d, e, f, g, h}
 * @date 20/30/2026
 * @author MonviDev
 */

void movimiento(char &movimiento_columna, int &movimiento_fila)
{
    // Varaibles

    char columna_inicial = movimiento_columna;
    int fila_inicial = movimiento_fila;


    cout << "Escriba las coordenadas del movimiento." << endl;

    cin >> movimiento_columna;
    cin >> movimiento_fila;


    while((movimiento_fila < 1 || movimiento_fila > 8) || (movimiento_columna != 'a' && movimiento_columna != 'b' && movimiento_columna != 'c' && movimiento_columna != 'd'
           && movimiento_columna != 'e' && movimiento_columna != 'f' && movimiento_columna != 'g' && movimiento_columna != 'h'))
    {
        cout << "El movimento esta fuera del tablero, introduzca de nuevo el movimiento." << endl;

        cin >> movimiento_columna;
        cin >> movimiento_fila;
    }
}


/**
 * @brief Función que devuelve si el movimeinto es valido o no
 * @pre pieza = {R, C, T}
 * @pre columna_inicial = {a, b, c, d, e, f, g, h}
 * @pre columna_final = {a, b, c, d, e, f, g, h}
 * @pre fila_inicial < 9 && > 0
 * @pre fila_final < 9 && > 0
 * @param (E) pieza
 * @param (E) columna_inicial
 * @param (E) columna_final
 * @param (E) fila_inicial
 * @param (E) fila_final
 * @date 02/03/2026
 * @author MonviDev
 * @return True si el movimiento es valido, o false si el movimineto es invalido
 */

bool validez_movimiento(char pieza, char columna_inicial, char columna_final, int fila_inicial, int fila_final)
{
    // Varaibles

    bool validez = false;


    // Condiciones para comprobar el movimiento de la pieza que corresponda

    if (pieza == 'R')
    {
        //  Varaibles

        int columna_inicial_N = columna_inicial; // Paso del caracter a su número correspondiente
        int columna_final_N = columna_final; // Paso del caracter a su número correspondiente


        // Condicines que comprueban si el movimiento es valido para la reina

        if (columna_inicial_N - fila_inicial == columna_final_N - fila_final) // Movimiento en diagonal arriba a la derecha y abajo a la izquierda
        {
            validez = true;
        }
        else if (columna_inicial_N + fila_inicial == columna_final_N + fila_final) // Movimiento en diagonal arriba a la izquierda y abajo a la derecha
        {
            validez = true;
        }
        else if (columna_inicial == columna_final || fila_inicial == fila_final) // Movimiento en vertical y horizontal
        {
            validez = true;
        }
    }
    if (pieza == 'C')
    {
        
    }
    if (pieza == 'T')
    {
        if(columna_inicial == columna_final || fila_inicial == fila_final)
        {
            validez = true;
        }
    }


    return validez;
}


/**
 * @brief Función que devuelve un mensaje por pantalla dependiendo de si el movimiento de la pieza es valido o no
 * @param (E) validez
 * @date 02/03/2026
 * @author MonviDev
 */

void resultado(bool validez)
{
    if(validez == true)
    {
        cout << "EL movimiento es valido" << endl;
    }
    else
    {
        cout << "El movimenmto no es valido" << endl;
    }
}


/**
 * @brief Función que imprime por pantalla la bienvenida al programa
 * @date 02/03/2026
 * @author MonviDev
 */

void bienvenida()
{
    cout << "=======================================" << endl;
    cout << "Bienvenido al programa Kasparov Modular" << endl;
    cout << "=======================================" << endl;
}


int main()
{
    // Varaibles

    char pieza = '\0'; // Varaible para la pieza
    int fila_inicial = 0; // Variable para la fina inicial
    char columna_inicial = '\0'; // Varaible para la columna inicial
    int fila_final = 0; // Varaible para la fila final
    char columna_final = '\0'; // Varaible para la columna final
    bool validez = false; // Varaible para saber si el movimiento es valido o noR



    // Llamada a la función que da la bievenida al programa

    bienvenida();


    // Llamada a la función que pide la pieza

    pieza = tipo_pieza();


    // Llamada a la función que pide la posición inicla del la pieza

    posicion_inicial(columna_inicial, fila_inicial);


    // Llamada a la función que pide el movimiento de la pieza

    movimiento(columna_final, fila_final);


    // Llamada a la función que comprueba la validez de movimiento

    validez = validez_movimiento(pieza, columna_inicial, columna_final, fila_inicial, fila_final);


    // Llamada a la función que imprime el resultado de si el movimiento es valido

    resultado(validez);


    return 0;
}