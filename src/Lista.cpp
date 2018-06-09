/*
 * Lista.cpp
 *
 *  Created on: Jun 9, 2018
 *      Author: raydelto
 */

#include "Lista.h"

Lista::Lista():_primer(NULL),_ultimo(NULL)
{
}

void Lista::agregar(Elemento* elemento)
{
	if(_primer == NULL) //Verificando si la lista está vacía
	{
		 _primer = _ultimo = elemento;
	}else //Si la lista lista no está vacía
	{
		_ultimo -> _siguiente = elemento;
		_ultimo = elemento;
	}

}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
}

