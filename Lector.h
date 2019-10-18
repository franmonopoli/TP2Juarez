#ifndef LECTOR_H
#define LECTOR_H
#include "Vector.h"
#include "Elemento.h"
#include "Celula.h"
#include "Anticuerpo.h"
#include "Suero.h"

typedef Elemento objeto;

//Se ocupa de leer el archivo con los datos, armar los objetos y guardarlos en el vector al que apunta su atributo vec
class Lector
{
    public:
        /* METODOS */
        //CONSTRUCTOR
        //Pre: El vector no sea nulo
        //Post: Crea un lector con un vector v de elementos
        Lector(Elemento* v);

        //LEER ARCHIVO
        //Pre: -
        //Post: Lee el archivo
        void leerArchivo();
        //PRIMERA PALABRA
        //Pre:El archivo este abierto
        //Post: devuelve la primera palabra del archivo
        string primeraPalabra(string);
        //GUARDAR DATO
        //Pre:El vector se haya creado
        //Post:Guarda el objeto en el vector
        void guardarDato(objeto);
        //ARMAR CELULA
        //Pre:Los datos pasados por parametros sean validos
        //Post: Crea un objeto celula con los datos pasados por parametros.
        Celula armarCelula(/* lo que necesite la celula*/);
        //ARMAR ANTICUERPO
        //Pre:Los datos pasados por parametros sean validos
        //Post: Crea un objeto anticuerpo con los datos pasados por parametros.
        Anticuerpo armarAnticuerpo(/* lo que necesite el anticuerpo*/);
        //ARMAR SUERO
        //Pre:Los datos pasados por parametros sean validos
        //Post: Crea un objeto suero con los datos pasados por parametros.
        Suero armarSuero(/* lo que necesite el suero*/);
        //ARMAR NANOBOT
        //Pre:Los datos pasados por parametros sean validos
        //Post: Crea un objeto nanobot con los datos pasados por parametros.
        //Nanobot armarNanobot();

        //DESTRUCTOR
        //Pre: Se haya ya creado un lector
        //Post: Elimina el lector
        virtual ~Lector();

    private:
        /* ATRIBUTOS */
        Vector * vec;
        int longVec;
};

#endif // LECTOR_H
