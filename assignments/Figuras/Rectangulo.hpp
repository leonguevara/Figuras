#pragma once 
#include "Figura.hpp"
#include <iostream>

class Rectangulo : public Figura {
    private:
        int ancho;
        int largo;
    public:
        Rectangulo();
        Rectangulo(int x_, int y_, std::string color_, int ancho_, int largo);
        Rectangulo(int ancho_, int largo_);
        Rectangulo(int x_, int y_, std::string color_);
        int perimetro();
        void dibuja();
        int getAncho();
        int getLargo();
        void setAncho(int ancho_);
        void setLargo(int largo_);
};