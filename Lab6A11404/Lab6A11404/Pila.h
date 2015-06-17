#pragma once
#include "Lista.h"
#include "Lista.h"
#include "Elemento.h"

using namespace std;

class Pila :
	protected Lista
{
	friend ostream & operator<<(ostream &, Pila &);

public:
	Pila();
	virtual ~Pila();
	void push(Elemento *);
	Elemento * peek();
	Elemento * pop();
};

ostream & operator<<(ostream &, Pila &);
