#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Figuras.h"

Rectangulo::Rectangulo(float _alto, float _ancho) : Cuadrado(_alto, _ancho) {
    alto = _alto;
    ancho = _ancho;
}

void Rectangulo::calcularAreaPerimetro() {
    perimetro = 2 * alto + 2 * ancho;
    area = alto * ancho;
}