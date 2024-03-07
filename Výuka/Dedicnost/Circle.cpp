//
// Created by Jakub Vágner on 07.03.2024.
//

#include "Circle.hpp"

Circle::Circle() {
    std::cout << "Vykresluji kruh" << std::endl;
}

Circle::Circle(int r) {
    this->r = r;
}

double Circle::perimeter() {
    return 2 * M_PI * r;
}

double Circle::content() {
    return M_PI * pow(r, 2);
}

void Circle::print() {
    std::cout << "Polomer: " << r << std::endl;
}

int Circle::getR() {
    return r;
}