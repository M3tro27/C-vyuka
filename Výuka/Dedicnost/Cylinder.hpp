//
// Created by Jakub Vágner on 07.03.2024.
//

#ifndef INC_7_LINKED_LIST_CYLINDER_HPP
#define INC_7_LINKED_LIST_CYLINDER_HPP

#include <iostream>
#include <cmath>
#include "Circle.hpp"

class Cylinder: public Circle{
private:
    int v;
public:
    Cylinder();
    Cylinder(int r, int v);
    double surface();
    double volume();
    void print();
    int getV();
};


#endif //INC_7_LINKED_LIST_CYLINDER_HPP
