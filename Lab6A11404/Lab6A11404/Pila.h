#pragma once
#include "Lista.h"
#include "Lista.h"
#include "Elemento.h"

using namespace std;

class Pila :
	protected Lista
{
	friend ostream & operator<<(ostream &, Pila &);

private:
	//Elemento * cabeza;

public:
	Pila();
	Pila(Elemento *);
	virtual ~Pila();
	void push(Elemento *);
	Elemento * peek();
	Elemento * pop();
	//void imprimir(ostream &);
};

ostream & operator<<(ostream &, Pila &);
