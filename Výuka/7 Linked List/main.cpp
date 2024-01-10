#include <iostream>
#include "Shape.hpp"
#include "Square.hpp"
#include "Rectangle.hpp"
#include "Cube.hpp"
#include "Block.hpp"

using namespace std;


int main(){

    Square Ctverec(2);
    Ctverec.print();
    cout << "Obsah ctverce: " << Ctverec.content() << endl;

    Cube Krychle(4);
    Krychle.print();
    cout << "Objem krychle: " << Krychle.volume() << endl;

    Block Kvadr(3, 5, 2);
    Kvadr.print();
    cout << "Objem kvadru: " << Kvadr.volume() << endl;

    return 0;
}