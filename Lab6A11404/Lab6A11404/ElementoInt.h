#pragma once
#include "Elemento.h"

using namespace std;

class ElementoInt :
	public Elemento
{
protected:
	int i;

public:
	ElementoInt(int i);
	virtual ~ElementoInt();
	int compareTo(Elemento *);
	virtual void imprimir(ostream &) const;
};

