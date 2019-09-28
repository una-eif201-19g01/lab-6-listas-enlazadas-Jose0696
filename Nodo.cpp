#include "Nodo.h"

Nodo::Nodo() {
	siguiente = NULL;
}

Nodo::Nodo(const Libro& lib, Nodo* siguiente) : lib(lib), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Libro& Nodo::getLibro() const {
	return lib;
}

void Nodo::setLibro(const Libro& lib) {
	Nodo::lib = lib;
}

Nodo* Nodo::getSiguiente() const {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
	return lib.toString();
}
