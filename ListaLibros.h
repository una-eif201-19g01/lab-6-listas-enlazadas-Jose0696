#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#include"Nodo.h"

class ListaLibros {
	Nodo* primero;
	Nodo* actual;

public:
	ListaLibros();

	virtual ~ListaLibros();

	void insertarInicio(const Libro& _trab);
	void insertarFinal(const Libro& _trab);
	bool eliminarInicio();
	int totalNodos();
	bool listaVacia();

	Nodo* getPrimero() const;

	void setPrimero(Nodo* primero);

	Nodo* getActual() const;

	void setActual(Nodo* actual);

	string toString();
};


#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
