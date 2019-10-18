#include "Elementos.h"
#include "Celula.h"
#ifndef ANTICUERPO_H_INCLUDED
#define ANTICUERPO_H_INCLUDED

class anticuerpo: public Elemento
{

public:
        //CONSTRUCTORES
        //SIN PARAMETROS
        //Pre:-
        //Post:Asigna 0 a posX e posY
        anticuerpo();

        //METODOS
        //GETTERS
        //POS X
        //Pre:-
        //Post: Devuelve la posicion en X que se encuentra el anticuerpo
        int get_posX();
        //POS Y
        //Pre:-
        //Post: Devuelve la posicion en Y que se encuentra el anticuerpo
        int get_posY();

        //SETTERS
        //POS X
        //Pre: La posicion pasada tiene que ser valida
        //Post: Asigna el entero pasado a pos_X
        void set_posX(int);
        //POS Y
        //Pre: La posicion pasada sea valida
        //Post: Asigna el entero pasado a pos_Y
        void set_posY(int);
};

#endif // ANTICUERPO_H_INCLUDED
