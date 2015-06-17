#include "stdafx.h"
#include "Pila.h"


Pila::Pila()
{
	Lista::head = NULL;
}

Pila::Pila(Elemento * node)
{
	Lista::insertarElementoInicio(node);
}


Pila::~Pila()
{

}

void Pila::push(Elemento * elemento)
{
	Lista::insertarElementoInicio(elemento);
}


Elemento * Pila::peek()
{
	return Lista::head;
}


Elemento * Pila::pop()
{
	Elemento * t = Lista::head;
	Lista::eliminarElementoInicio();
	return t;
}


ostream & operator<<(ostream & out, Pila & p){
	p.imprimir(out);
	return out;
}
