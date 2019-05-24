//
// Created by s19017 on 2019-05-24.
//

#include "Class.h"

int number;

Class::Class(int number){
    this->number=number;
}

Class::Class()
{
}
Class::~Class()
{
    std::cout << "You just deleted it" << std::endl;
}