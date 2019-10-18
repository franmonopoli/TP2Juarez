#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
#include <iostream>
#include "Elementos.h"

using namespace std;

class Celula : public Elemento
{
    public:
        //POSICIONAES EN X E Y HEREDADAS DE ELEMENTO.
        Elemento::posX
        Elemento::posY

        //CONSTRUCTORES
        // CONSTRUCTOR SIN PARAMETROS
        //Pre: -
        //Post: Crea una celula poniendo sus atributos en 0 o true.
        Celula();
        //CONSTRUCTOR CON PARAMETROS
        //Pre: Los datos pasados sean validos.
        //Post: Pone los valores pasados en los atributos de celula.
        Celula(int, int, int, bool, bool);

        //SETTERS:
        //TAMANIO
        //Pre:El tamanio pasado sea positivo.
        //Post: Le pone valor tam al atributo tamanio.
        void set_tamanio(int);
        //CANTIDAD ENZIMAS
        //Pre: La cantidad de enzimas sea >=0
        //Post: Asigna el valor pasado al atributo cantEnzimas.
        void set_cantEnzimas(int);
        //CANTIDAD PROTEINAS
        //Pre:Cantidad proteinas pasadas sea>=0
        //Post: Asigna el valor pasado al atributo cantProteinas.
        void set_cantProteinas(int);
        //MATERIAL GENETICO
        //Pre:El dato pasado sea true o false.
        //Post: Asigna true o false al atributo materialGenetico.
        void set_materialGenetico(bool);
        //UNICELULAR
        //Pre:El dato pasado sea true o false.
        //Post: Asigna true o false al atributo unicelular.
        void set_unicelular(bool);

        //GETTERS
        //TAMANIO
        //Pre:-
        //Post: Devuelve el tamanio de la celula
        int get_tamanio();
        //CANTIDAD ENZIMAS
        //Pre:-
        //Post: Devuelve la cantidad de enzimas
        int get_cantEnzimas();
        //CANTIDAD PROTEINAS
        //Pre:-
        //Post: Devuelve la cantidad de proteinas
        int get_cantProteinas();
        //MATERIAL GENETICO
        //Pre:-
        //Post:Devuelve true en caso de que sea ADN y false si es ARN
        bool get_materialGenetico();
        //UNICELULAR
        //Pre:-
        //Post:Devuelve true si es unicelular, false si no lo es.
        bool get_unicelular();

    private:
        /* ATRIBUTOS */
        int tamanio,cantEnzimas,cantProteinas;
        bool materialGenetico,unicelular;
};


#endif // CELULA_H_INCLUDED

