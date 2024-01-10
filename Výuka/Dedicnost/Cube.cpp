//
// Created by Jakub Vágner on 10.01.2024.
//

#include <iostream>
#include "Cube.hpp"

using namespace std;

Cube::Cube() {
    cout << "Vykresluji kostku..." << endl;
}

Cube::Cube(int a) : Square(a) {
}

double Cube::volume() {
    return pow(getA(), 3);
}

void Cube::print() {
    cout << "Strana a: " << getA() << endl;
}


