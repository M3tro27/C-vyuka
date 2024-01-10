//
// Created by Jakub Vágner on 10.01.2024.
//

#ifndef INC_7_LINKED_LIST_CUBE_HPP
#define INC_7_LINKED_LIST_CUBE_HPP

#include "Square.hpp"

class Cube:public Square{
public:
    Cube();//konstruktor, který vypíše „vykresluji kostku“
    Cube(int a); //konstruktor, který nastaví parametry
    double volume();//vrati objem tvaru
    void print();//vytiskne informace o straně/ách
};


#endif //INC_7_LINKED_LIST_CUBE_HPP
