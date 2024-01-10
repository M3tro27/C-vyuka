//
// Created by Jakub Vágner on 09.01.2024.
//

#ifndef INC_7_LINKED_LIST_SQUARE_HPP
#define INC_7_LINKED_LIST_SQUARE_HPP

#include "Shape.hpp"

class Square: public Shape{
private:
    int a;

public:
    Square();//konstruktor, který vypíše „vykresluji čtverec“
    Square(int a);//konstruktor, který nastaví parametry
    double perimeter();//vrati obvod tvaru
    double content();//vrati obsah tvaru
    void print();//vytiskne informace o straně/ách
    int getA();
};



#endif //INC_7_LINKED_LIST_SQUARE_HPP
