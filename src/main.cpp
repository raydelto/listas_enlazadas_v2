//============================================================================
// Name        : listas-enlazadas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Lista.h"

int main() {
//	Lista* lista = new Lista();
	Lista lista;
	Elemento* elemento1 = new Elemento("Elemento 1");
	Elemento* elemento2 = new Elemento("Elemento 2");
	Elemento* elemento3 = new Elemento("Elemento 3");
	lista.agregar(elemento1);
	lista.agregar(elemento2);
	lista.agregar(elemento3);

	Elemento* i = lista.getPrimer();
	Elemento* elementoAEliminar;
	while(i != NULL)
	{
		cout << i -> getNombre() << endl;
		elementoAEliminar = i;
		i = i -> getSiguiente();
		delete elementoAEliminar;
	}

	return 0;
}
