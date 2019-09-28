#include "ListaLibros.h"
#include "Libro.h"

int main() {
	Libro libro1("Panchita", 2001, "Pancho", "Cuentos de adas");
    
	ListaLibros* listalibros = new ListaLibros();
	listalibros->insertarInicio(libro1);

	cout << "Lista de Libros: " << listalibros->totalNodos() << listalibros->toString() <<endl; 
	
	listalibros->eliminarInicio();
	cout << "Lista de Libros: " << listalibros->totalNodos() << listalibros->toString() << endl;

	listalibros->insertarFinal(libro1);
	cout << "Lista de Libros: " << listalibros->totalNodos() << listalibros->toString() << endl;

	delete(listalibros);
	cout << "Lista de Libros: " << listalibros->totalNodos() << listalibros->toString() << endl;

	return 0;
}