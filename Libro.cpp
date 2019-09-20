//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

Libro::Libro(){
	titulo = " ";
	anio = 0;
	autor = " ";
}

Libro::Libro(string tit, int anno, string au) {
	titulo = tit;
	anio = anno;
	autor = au;
}

Libro::~Libro()
{
}
