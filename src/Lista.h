/*
 * Lista.h
 *
 *  Created on: Jun 9, 2018
 *      Author: raydelto
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Elemento.h"
class Lista {
public:
	void agregar(Elemento* elemento);
	Elemento* getPrimer() { return _primer; }
	Lista();
	virtual ~Lista();
private:
	Elemento* _primer;
	Elemento* _ultimo;
};

#endif /* LISTA_H_ */
