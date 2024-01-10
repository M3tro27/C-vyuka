//
// Created by Jakub Vágner on 10.01.2024.
//

#include <iostream>
#include "Block.hpp"

using namespace std;

Block::Block() {
    cout << "Vykresluji kvadr..." << endl;
}

Block::Block(int a, int b, int c) : Rectangle(a, b){
    this->c = c;
}

double Block::volume() {
    return getA() * getB() * c;
}

void Block::print() {
    cout << "Strana a: " << getA() << endl;
    cout << "Strana b: " << getB() << endl;
    cout << "Strana c: " << c << endl;
}


