//
// Created by Jakub Vágner on 09.01.2024.
//

#ifndef INC_7_LINKED_LIST_RECTANGLE_HPP
#define INC_7_LINKED_LIST_RECTANGLE_HPP

#include "Square.hpp"

class Rectangle: public Square{
private:
    int b;

public:
    Rectangle();//konstruktor, který vypíše „vykresluji obdelnik“
    Rectangle(int a, int b);//konstruktor, který nastaví parametry
    double perimeter();//vrati obvod tvaru
    double content();
    void print();//vytiskne informace o straně/ách
    int getB();
};

#endif //INC_7_LINKED_LIST_RECTANGLE_HPP
