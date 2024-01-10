//
// Created by Jakub Vágner on 09.01.2024.
//
#include <iostream>
#include "Square.hpp"

using namespace std;

Square::Square() {
    cout << "Vykresluji ctverec" << endl;
}

Square::Square(int a){
    this->a = a;
}

double Square::perimeter() {
    return 4 * a;
}

double Square::content() {
    return pow(a, 2);
}

void Square::print() {
    cout << "Strana: " << a << endl;
}

int Square::getA() {
    return a;
}
