#pragma once 
#include "Figura.hpp"
#include <iostream>

class Circulo : public Figura {
    public:
        Circulo();
        Circulo(int x_, int y_, std::string color_, int radio_);
        Circulo(int radio_);
        Circulo(int x_, int y_, std::string color_);
        double circunferencia();
        void dibuja();
        int getRadio();
        void setRadio(int radio_);
    private:
        int radio;
};