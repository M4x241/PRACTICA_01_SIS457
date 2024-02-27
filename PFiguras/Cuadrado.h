#pragma once
#include "Figuras.h"
class Cuadrado: public Figuras
{
private:
	//se abstrae la figura en alto y ancho
	float alto, ancho;
public:
	Cuadrado();
	Cuadrado(float, float);
	//Se usa polimorfismo para calcular de manera distinta el perimetro y area de cada figura
	virtual void calcularAreaPerimetro();
};

