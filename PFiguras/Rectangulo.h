#pragma once
#include "Figuras.h"
#include "Cuadrado.h"
class Rectangulo : public Cuadrado
{
private:
	//se abstrae la figura en alto y ancho
	float alto, ancho;
public:

	Rectangulo(float _alto, float _ancho);
	void calcularAreaPerimetro();
};