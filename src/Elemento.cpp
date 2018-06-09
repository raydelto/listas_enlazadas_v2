/*
 * Elemento.cpp
 *
 *  Created on: Jun 9, 2018
 *      Author: raydelto
 */
#include <iostream>
#include "Elemento.h"

using namespace std;

Elemento::Elemento(std::string nombre): _nombre(nombre), _siguiente(NULL)
{
}

Elemento::~Elemento()
{
	cout << "Destruyendo al elemento " << _nombre << endl;
}
