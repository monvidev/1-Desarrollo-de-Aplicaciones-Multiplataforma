#include <iostream>

class Cadena {
    private: 
        char* v_cadena;
        int dim_actual;

    public:
        /** *
         * @brief Constructor de la clase Cadena
         * @post El vector de caracteres interno del objeto tendrá reservada una dimensión
         */
        Cadena(const Cadena &cadena);
        Cadena();
        ~Cadena();

        /** *
         * @brief Método del Objeto Cadena, que va a permitir insertar una cadena de caracteres sin límite.
         * @param cadena_caracteres [] Es un vector de char de un tamaño indeterminado
         * @post El vector de caracteres interno del objeto modificará su tamaño adecuadamente para adaptarse al nuevo tamaño de la cadena
         */
        void setCadena(const char cadena_caracteres[]);


        int length() const;


        void printCadena();


        void operator=(char cadena_a_asignar[]);

        void operator=(const char cadena_a_asignar[]);

        void operator=(const Cadena &cadena_a_asignar);

        bool operator==(Cadena &c);
};