//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_SQUARE_H
#define TEST_SQUARE_H
#include "Rectangle.h"


class Square : Rectangle{

public:
    Square(float side_);
    using Rectangle::calcA;
    using Rectangle::calcP;
    using Rectangle::getWidth;
    using Rectangle::getLength;

};


#endif //TEST_SQUARE_H