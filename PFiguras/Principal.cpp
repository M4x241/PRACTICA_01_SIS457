#include<iostream>
#include"Cuadrado.h"
#include"Figuras.h"
#include"Rectangulo.h"

using namespace std;
int main() {
	Cuadrado objeto1(5,5);
	objeto1.calcularAreaPerimetro(); //Se usa polimorfismo para calcular de manera distinta el perimetro y area de cada figura usando el mismo metodo
	objeto1.mostrarArea(); //se hereda de la clase figura
	objeto1.mostrarPerimetro(); //se hereda de la clase figura
	Rectangulo objeto2(4,3);
	objeto2.calcularAreaPerimetro();//Se usa polimorfismo para calcular de manera distinta el perimetro y area de cada figura usando el mismo metodo
	objeto2.mostrarArea(); //se hereda de la clase figura
	objeto2.mostrarPerimetro(); //se hereda de la clase figura
	return 0;
}