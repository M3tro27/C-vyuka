//
// Created by Jakub Vágner on 10.01.2024.
//

#ifndef INC_7_LINKED_LIST_BLOCK_HPP
#define INC_7_LINKED_LIST_BLOCK_HPP

#include "Rectangle.hpp"

class Block:public Rectangle{
private:
    int c;

public:
    Block();//konstruktor, který vypíše „vykresluji kvadr“
    Block(int a, int b, int c); //konstruktor, který nastaví parametry
    double volume();//vrati objem tvaru
    void print();//vytiskne informace o straně/ách
};


#endif //INC_7_LINKED_LIST_BLOCK_HPP
