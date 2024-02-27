#include "Figuras.h"
#include<iostream>

using namespace std;

Figuras::Figuras()
{
	perimetro = 0;
	area = 0;
}

Figuras::Figuras(float _perimetro, float _area)
{
	area = _area;
	perimetro = _perimetro;
	cout << "El perimetro es: " << perimetro << endl;
	cout << "El area es: " << area << endl;
}

void Figuras::mostrarPerimetro()
{
	cout << "El perimetro es: " << perimetro<<endl;
}

void Figuras::mostrarArea()
{
	cout << "El area es: " << area<<endl;
}

