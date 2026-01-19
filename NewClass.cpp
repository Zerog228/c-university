//
// Created by Zerog228 on 19.01.2026.
//

#include "NewClass.h"
#include <iostream>

int first, second, third;
NewClass::NewClass(int f, int s, int t) : first(f), second(s), third(t){}

void NewClass::print() const {
    std::cout << "First: " << first <<", second: " << second << ", third: " << third << std::endl;
}

int NewClass::addAllAndMult(int mult) const {
    return (first + second + third) * mult;
}