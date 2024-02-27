#pragma once
class Figuras
{
	//Encapsula en protected para que las clases hijas accedan a los atributos
protected:
	float perimetro, area;
public:
	Figuras();
	Figuras(float, float);
	//La clase padre (Figuras) hereda dos metodos a las clases hijas (Cuadrado, rectangulo) 
	 void mostrarPerimetro();
	 void mostrarArea();
};

