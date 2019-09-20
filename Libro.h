//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Libro {
private:
	string titulo;
	int anio;
	string autor;

public:
	Libro();
	Libro(string,int,string);

	virtual ~Libro();

	void setTitulo(string);
	void setAnio(int);
	void setAutor(string);

	string getTitulo();
	int getAnio();
	float getAutor();

	string toString();

};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
