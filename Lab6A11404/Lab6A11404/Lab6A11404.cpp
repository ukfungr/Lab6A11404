// Lab6A11404.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Elemento.h"
#include "Lista.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"
#include "ElementoDouble.h"
#include "Persona.h"
#include "ElementoPersona.h"
#include "Pila.h"

using namespace std;

bool findRepeat(int[], int); //Declaración del método para buscar si un id es repetido
//@parametros:  - int []: array donde se guardan los id
//				- int: número aleatorio que se genera para el id

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int) time(0));

	cout << "Elementos integers" << endl;
	Pila p;	
	cout << "Push elements" << endl;
	for (int i = 0; i < 10; ++i) {
		p.push(new ElementoInt(rand() % 100));
	}
	cout << p << endl;

	cout << "Pop" << endl;
	p.pop();
	cout << p << endl;

	cout << "Peek" << endl;
	Elemento * show = p.peek();
	cout << *show << endl;

	cout << "Elementos doubles" << endl;
	Pila d;
	cout << "Push elements" << endl;
	for (int i = 0; i < 10; ++i) {
		d.push(new ElementoDouble(((double)rand()*(100.00 - 0.00)) / (double)RAND_MAX));
	}
	cout << d << endl;

	cout << "Pop" << endl;
	d.pop();
	cout << d << endl;

	cout << "Peek" << endl;
	Elemento * show1 = d.peek();
	cout << *show1 << endl;

	cout << "Elementos persona" << endl;
	Pila person;
	//Array para guardar nombres del txt y seleccionarlos aleatoriamente
	string names[100];
	int k = 0;
	ifstream myFile("nombres.txt");
	while (!myFile.eof()){
		getline(myFile, names[k]);
		k++;
	}

	//Array para crear id no repetidos para cada Persona
	int id[100];
	int c = 0;
	while (c < 100){
		unsigned int number = rand() % (110889 - 10000) + 10000;
		if (findRepeat(id, number) != true){
			id[c] = number;
			c++;
		}
	}

	Persona * per[100];
	for (int i = 0; i < 100; i++){
		per[i] = new Persona(names[rand() % 100], id[i]);
	}

	cout << "Push elements" << endl;
	for (int i = 0; i < 10; ++i) {
		person.push(new ElementoPersona(per[i]));
	}
	cout << person << endl;

	cout << "Pop" << endl;
	person.pop();
	cout << person << endl;

	cout << "Peek" << endl;
	Elemento * show3 = person.peek();
	cout << *show3 << endl;

	cout << "Elementos integers integers" << endl;
	Pila ent;
	cout << "Push elements" << endl;
	for (int i = 0; i < 10; ++i) {
		ent.push(new ElementoIntInt(rand() % 100, rand() % 100));
	}
	cout << ent << endl;

	cout << "Pop" << endl;
	ent.pop();
	cout << ent << endl;

	cout << "Peek" << endl;
	Elemento * show4 = ent.peek();
	cout << *show4 << endl;


	system("pause");
	return 0;
}


//Función para buscar si el número random generado es repetido
bool findRepeat(int id[100], int number)
{
	for (int i = 0; i < 100; i++){
		if (number == id[i]){
			return true;
		}
	}
}