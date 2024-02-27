#include "Cuadrado.h"
#include "Figuras.h"

Cuadrado::Cuadrado()
{
	alto = 0;
	ancho = 0;
}

Cuadrado::Cuadrado(float _alto, float _ancho)
{
	alto = _alto;
	ancho = _ancho;
}

void Cuadrado::calcularAreaPerimetro( )
{
	perimetro = 4 * alto;
	area = alto * ancho;

}