#include <sstream>
#include "Circulo.hpp"

Circulo::Circulo():Figura(), radio{1} {
}

Circulo::Circulo(int x_, int y_, std::string color_, int radio_):Figura(x_, y_, color_), radio{radio_} {
}

Circulo::Circulo(int radio_):Figura(), radio{radio_} {
}

Circulo::Circulo(int x_, int y_, std::string color_):Figura(x_, y_, color_), radio{1} {
}

double Circulo::circunferencia() {
    return 2 * 3.14159 * radio; // Usando una aproximación de pi
}

void Circulo::dibuja() {
    std::stringstream ss;
    ss << "Soy un círculo de color " << getColor() << " en la posición (" 
       << std::to_string(getX()) << "," << std::to_string(getY()) 
       << ") con radio " << std::to_string(radio) 
       << " y circunferencia " << std::to_string(circunferencia());
    std::cout << ss.str() << std::endl;
}

int Circulo::getRadio() {
    return radio;
}

void Circulo::setRadio(int radio_) {
    radio = radio_;
}
