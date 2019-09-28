#include "Libro.h"

Libro::Libro(){
	titulo = " ";
	anio = 0;
	autor = " ";
	nombre = "";
}

Libro::Libro(string tit, int anno, string au, string nom) {
	titulo = tit;
	anio = anno;
	autor = au;
	nombre = nom;
}

Libro::~Libro()
{
}

void Libro::setTitulo(string tit){
	titulo = tit;

}

void Libro::setAnio(int anno){
	anio = anno;
}

void Libro::setAutor(string au){
	autor = au;
}

void Libro::setNombre(string nom){
	nombre = nom;
}

string Libro::getTitulo(){
	return nombre;
}

int Libro::getAnio(){
	return anio;
}

string Libro::getAutor(){
	return autor;
}

string Libro::getNombre(){
	return nombre;
}

string Libro::toString(){
	stringstream s;
	s << "\nTitulo del Libro " << titulo << endl;
	s << "Anio del Libro " << anio << endl;
	s << "Autor del Libro " << autor << endl;
	s << "Nombre del Libro " << nombre << endl;
	return s.str();
}


