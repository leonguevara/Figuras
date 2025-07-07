#include <sstream>
#include "Rectangulo.hpp"

Rectangulo::Rectangulo():Figura(), ancho{1}, largo{1} {
}

Rectangulo::Rectangulo(int x_, int y_, std::string color_, int ancho_, int largo_)
    : Figura(x_, y_, color_), ancho{ancho_}, largo{largo_} {
}

Rectangulo::Rectangulo(int ancho_, int largo_)
    : Figura(), ancho{ancho_}, largo{largo_} {
}

Rectangulo::Rectangulo(int x_, int y_, std::string color_)
    : Figura(x_, y_, color_), ancho{1}, largo{1} {
}

int Rectangulo::perimetro() {
    return (ancho + largo) * 2;
}

void Rectangulo::dibuja() {
    std::stringstream ss;
    ss << "Soy un rectángulo de color " << getColor() << " en la posición ("
       << std::to_string(getX()) << "," << std::to_string(getY())
       << ") con ancho " << std::to_string(ancho)
       << ", largo " << std::to_string(largo)
       << " y perímetro " << std::to_string(perimetro());
    std::cout << ss.str() << std::endl;
}

int Rectangulo::getAncho() {
    return ancho;
}

int Rectangulo::getLargo() {
    return largo;
}

void Rectangulo::setAncho(int ancho_) {
    ancho = ancho_;
}

void Rectangulo::setLargo(int largo_) {
    largo = largo_;
}
