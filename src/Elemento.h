/*
 * Elemento.h
 *
 *  Created on: Jun 9, 2018
 *      Author: raydelto
 */
#include <string>

#ifndef ELEMENTO_H_
#define ELEMENTO_H_

class Elemento {
public:
	Elemento(std::string nombre);
	Elemento* getSiguiente() { return _siguiente; }
	std::string getNombre() { return _nombre; }
	virtual ~Elemento();
private:
	std::string _nombre;
	Elemento* _siguiente;
	friend class Lista;
};



#endif /* ELEMENTO_H_ */
