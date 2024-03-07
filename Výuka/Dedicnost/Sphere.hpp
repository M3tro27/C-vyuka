//
// Created by Jakub Vágner on 07.03.2024.
//

#ifndef INC_7_LINKED_LIST_SPHERE_HPP
#define INC_7_LINKED_LIST_SPHERE_HPP

#include <iostream>
#include <cmath>
#include "Circle.hpp"

class Sphere: public Circle {
public:
    Sphere();
    Sphere(int r);
    double surface();
    double volume();
    void print();
};


#endif //INC_7_LINKED_LIST_SPHERE_HPP
