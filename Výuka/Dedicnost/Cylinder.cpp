//
// Created by Jakub Vágner on 07.03.2024.
//

#include "Cylinder.hpp"

Cylinder::Cylinder() {
    std::cout << "Vykresluji valec: ";
}

Cylinder::Cylinder(int r, int v) : Circle(r){
    this->v = v;
}

double Cylinder::surface() {
    return 2 * Circle::content() + 2 * Circle::perimeter() * v;
}

double Cylinder::volume() {
    return Cylinder::content() * v;
}

void Cylinder::print() {
    std::cout << "Polomer podstavy: " << Circle::getR() << std::endl
              << "Vyska valce: " << v << std::endl;
}

int Cylinder::getV() {
    return v;
}