#include <iostream>
#define RED_COLOR "\033[1;31m" 
#define RESTORE "\033[0m"
#define GREEN_COLOR "\033[1;32m" 
using namespace std;

// ====== PROTOTIPOS ====== //
// TODO: se declararán todos los prototipos en coherencia con el Diagrama Arquitectónico Modular.
// Organizarlos por: módulos de la VISTA, módulos del BACK y módulos CONTROLADORES.
/** Módulos de la Vista **/
/** 
 * @brief Función que da la bienvnida al programa
 * @pre
 * @param (E) const int OBJETIVO
 * @post
 * @return
 * @version
 * @author Victor Montero
 */
void Bienvenida (const int OBJETIVO);
/**
 * @brief Modulo que controla el flujo de los datos y llama al resto de funciones
 * @author Victor Montero
 */
void controlador(const int DIAS_SEMANA, const int OBJETIVO);
/**
 * @brief Función que pide la cantidad de minutos dedicados a dormir cada dia
 * @post minutos de cada dia >= 0
 * @author Victor Montero
 */
int minutos_dedicados(int i);
/**
 * @brief Función que comprueba la cantidad de minutos
 * @param (E) minutos
 * @author Victor Montero
 */
void validacion(int minutos, const int OBJETIVO);
/**
 * @brief Función que pasa la cantidad total de minutos a horas
 * @param (E) total_minutos
 * @return total_horas
 * @author Victor Montero
 */
int total_horas(int total_minutos);
/**
 * @brief Función que calcula la media de minutos por cada dia
 * @param (E) total_minutos
 * @return media_minutos
 * @author Victor Montero
 */
float media_minutos(float total_minutos, const int DIAS_SEMANA);
/**
 * @brief Función que calcula el porcentaje de dias adecuados
 * @param (E) dias_adecuados
 * @return porcentaje_dias_adecuados
 * @author Victor Montero
 */
float porcentaje_dias_adecuados(float dias_adecuados, const int DIAS_SEMANA);
/**
 * @brief Función que miestra todos los resultados calculados
 * @param (E) minutos_dedicados
 * @param (E) total_minutos
 * @param (E) total_horas
 * @param (E) media_minutos
 * @param (E) dias_adecuados
 * @param (E) porcentaje_dias_adecuados
 * @param (E) mejor_dia
 * @param (E) peor_dia
 * @author Victor Montero
 */
void resultados(int total_minutos, int horas, float media_minutos, int dias_adecuados, float porcentaje, int mejor_dia, int peor_dia);


int main() {
    const int OBJETIVO_MIN_SUENYO = 480;
    const int DIAS_SEMANA = 7;

    //TODO: Invocaciones a los módulos pertinentes

    Bienvenida(OBJETIVO_MIN_SUENYO);

    controlador(DIAS_SEMANA, OBJETIVO_MIN_SUENYO);

    return 0;
}

// ====== IMPLEMENTACIÓN DE LOS MÓDULOS ====== //
void Bienvenida(const int OBJETIVO) {
    cout << "Bienvenidos al Sistema para Gestionar Tu Hábito Semanal de Dedicación a la Programación" << endl;
    cout << "Recuerda que tu OBJETIVO DIARIO ES DE " << OBJETIVO << " minutos!" << endl;
}
void controlador(const int DIAS_SEMANA, const int OBJETIVO)
{
    // Varaibles

    int minutos = 0;
    int total_minutos = 0;
    int horas = 0;
    float mMinutos = 0;
    float dias_adecuados = 0;
    float porcentaje = 0;
    int mejor_dia = 0;
    int minutos_antes_M = -1;
    int peor_dia = 0;
    int minutos_antes_P = -1;


    // Llamada a los modulos

    for (int i = 1; i <= DIAS_SEMANA; i++)
    {
        cout << "Introduzca los minutos dedicados a dormir cada dia." << endl;
        
        minutos = minutos_dedicados(i);

        total_minutos = total_minutos + minutos;

        validacion(minutos, OBJETIVO);

        // Número de dias adecuados

        if(minutos >= OBJETIVO) // Condición que calcula la cantida de dias adecuados
        {
            dias_adecuados++;
        }


        // Mejor dia

        if(minutos_antes_M == -1)
        {
            minutos_antes_M = minutos;
        }
        if(minutos > minutos_antes_M)
        {
            mejor_dia = i;
            minutos_antes_M = minutos;
        }


        // Peor dia

        if(minutos_antes_P == -1)
        {
            minutos_antes_P = minutos;
        }
        if(minutos < minutos_antes_P)
        {
            peor_dia = i;
            minutos_antes_P = minutos;
        }
    }

    horas = total_horas(total_minutos);

    mMinutos = media_minutos(total_minutos, DIAS_SEMANA);

    porcentaje = porcentaje_dias_adecuados(dias_adecuados, DIAS_SEMANA);

    resultados(total_minutos, horas, mMinutos, dias_adecuados, porcentaje, mejor_dia, peor_dia);

}
int minutos_dedicados(int dia)
{
    // Varaibles

    int minutos = 0;

    do // Filtro
    {
        cout << "Dia " << dia << ":";
        cin >> minutos;
    } 
    while(minutos < 0);

    return minutos;
}
void validacion(int minutos, const int OBJETIVO)
{
    if(minutos == 0)
    {
        cout << "Resultado: No dormido." << endl;
    }
    else if(minutos > 0 && minutos < OBJETIVO)
    {
        cout << "Resultado: Insuficiente." << endl;
    }
    else if(minutos >= OBJETIVO)
    {
        cout << "Resultado: Adecuado.";

        if(minutos >= OBJETIVO * 1.2)
        {
            cout << " ¡EXTRA!";
        }

        cout << "\n";
    }
}
int total_horas(int total_minutos)
{
    int horas = 0;

    do
    {
        if(total_minutos > 60)
        {
            horas++;

            total_minutos = total_minutos - 60;
        }
    }
    while(total_minutos > 60);
    

    return horas;
}
float media_minutos(float total_minutos, const int DIAS_SEMANA)
{
    float media = total_minutos / DIAS_SEMANA;

    return media;
}
float porcentaje_dias_adecuados(float dias_adecuados, const int DIAS_SEMANA)
{
    float porcentaje = 0.0;

    porcentaje = (dias_adecuados * 100) / DIAS_SEMANA;

    return porcentaje;
}
void resultados(int total_minutos, int horas, float media_minutos, int dias_adecuados, float porcentaje, int mejor_dia, int peor_dia)
{

    cout << "\n";
    cout << "============================" << endl;
    cout << "         Resultados" << endl;
    cout << "============================" << endl;

    cout << "Total de minutos: " << total_minutos << endl;
    cout << "Total de horas: " << horas << endl;
    cout << "Media de minutos: " << media_minutos << endl;
    cout << "Dias adecuados: " << dias_adecuados << endl;
    cout << "Porcentaje dias adecuados: " << porcentaje << endl;
    cout << "Mejor dia: " << "Dia " << mejor_dia << endl;
    cout << "Peor dia: " << "Dia " << peor_dia << endl;
}