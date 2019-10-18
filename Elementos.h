#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>
#include <iostream>

using namespace std;


class Elemento
{
    public:
        //CONSTRUCTORES
        //SIN PARAMETROS
        //Pre:-
        //Post: Asigna "Graciela" a estado y 0 a ambas posiciones
        Elemento();
        //CON PARAMETROS
        //Pre: t tiene que ser un dato valido
        //Post: Asigna t al atributo tipo y 0 a ambas posiciones
        Elemento(string t);

        //METODOS
        //GETTERS
        //Pre:-
        //Post:Devuelve el tipo del elemento
        string getTipo();
        //MUESTREO
        //Pre:-
        //Post: Muestra el elemento
        void muestreo();
        //SET TIPO
        //Pre: El tipo pasado tiene que ser valido
        //Post: Asgina el tipo pasado al atributo tipo
        void setTipo(string);
        virtual ~Elemento();

    protected:
        /**ATRIBUTOS EN PROTEGIDO**/
        /* El atributo tipo lo heredan todos los elementos, de manera tal que al recorrer la lista de elementos
        solo sea necesario consultar su tipo para indicarle al programa a que funciones debe llamar. */
        string tipo;
        float posX;
        float posY;

};

#endif // ELEMENTO_H
