//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H
#include "Libro.h"

class Nodo
{
	Libro lib;
	Nodo* siguiente;

public:
	Nodo();
	Nodo(const Libro& lib, Nodo* siguiente);
	virtual ~Nodo();
	const Libro& getLibro() const;
	void setLibro(const Libro& lib);
	Nodo* getSiguiente()const;
	void setSiguiente(Nodo* _siguiente);
	string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H
