//
// Created by Jakub Vágner on 07.03.2024.
//

#ifndef INC_7_LINKED_LIST_CIRCLE_HPP
#define INC_7_LINKED_LIST_CIRCLE_HPP

#include <iostream>
#include <cmath>
#include "Shape.hpp"

class Circle: public Shape{
private:
    int r;

public:
    Circle();
    Circle(int r);
    double perimeter();
    double content();
    void print();
    int getR();
};


#endif //INC_7_LINKED_LIST_CIRCLE_HPP
