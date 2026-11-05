#include <iostream>


using namespace std;


/**
 * @brief Función que calcula el cargo para cada cliente
 * @param horas (E) Cantidad de horas que ha estado estacionado el vehiculo
 * @return Cargo del vehiculo
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

    cout << "----------------------------------" << endl;
    cout << "Beinvenido al programa dek parking" << endl;
    cout << "----------------------------------" << endl;


    // Variables

    int vehiculos = 0; // Cantidad de vehiculos aparcados


    // Lamada a la función que pide la cantidad de vehiculos aparcados

    vehiculos = vehiculos_aparcados();


    // Llamada a la función que pide las horas de cada vehiculo e imprime los resutados

    horas(vehiculos);


    return 0;    
}