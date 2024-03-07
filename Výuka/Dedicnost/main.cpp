#include <iostream>
#include "Shape.hpp"
#include "Square.hpp"
#include "Rectangle.hpp"
#include "Cube.hpp"
#include "Block.hpp"
#include "Circle.hpp"
#include "Sphere.hpp"
#include "Cylinder.hpp"

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

    Circle Kruh(2);
    Kruh.print();
    cout << "Obsah kruhu: " << Kruh.content() << endl;

    Sphere Koule(4);
    Koule.print();
    cout << "Povrch koule: " << Koule.surface() << endl;

    Cylinder Valec(3, 5);
    Valec.print();
    cout << "Objem valce: " << Valec.volume() << endl;

    return 0;
}