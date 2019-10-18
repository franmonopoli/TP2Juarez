#ifndef VECTOR_H
#define VECTOR_H
#include "Elemento.h"
#include "Lector.h"

typedef Elemento Objeto;


class Vector
{
    public:
        //CONSTRUCTORES
        //SIN PARAMETROS
        //Pre:-
        //Post: Crea un vector de 100 posiciones vacio
        Vector();
        //CON PARAMETORS
        //Pre: El dato pasado sea >=1
        //Post: Crea un vector de el int pasado posiciones
        Vector(int);

        //METODOS
        //CARGAR
        //Pre:El vector no este vacio
        //Post:Le carga al vector lo que lee del archivo
        void cargar();
        //MENU MUESTREO
        /**SUPONGO QUE VA A HACER ESTO, NO SE BIEN**/
        //Pre:Se haya creado y cargado un vector
        //Post:Muestra lo que hay en el vector.
        void menuMuestreo();

        //DESTRUCTOR
        //Pre:Se haya creado un vector
        //Post:Elimina el vector creado
        virtual ~Vector();

    protected:

    private:
        /* ATRIBUTOS */
        int cantidad;
        Objeto* objetos;
        Lector* lector;
};

#endif // VECTOR_H
