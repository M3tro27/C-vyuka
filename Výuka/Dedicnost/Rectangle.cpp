//
// Created by Jakub Vágner on 09.01.2024.
//

#include "Rectangle.hpp"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
    cout << "Vykresluji obdelnik" << endl;
}

Rectangle::Rectangle(int a, int b) :Square(a){
    this->b = b;
}

double Rectangle::perimeter() {
    return 2 * b + 2 * getA();
}

double Rectangle::content() {
    return getA() * b;
}

void Rectangle::print() {
    cout << "Strana r: " << getA() << endl;
    cout << "Strana b: " << b << endl;
}

int Rectangle::getB() {
    return b;
}
