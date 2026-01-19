//
// Created by Zerog228 on 19.01.2026.
//

#include "Rectangle.h"

float width, length;

Rectangle::Rectangle(const float length_, const float width_) : length(length_), width(width_){};

float Rectangle::calcA() const {
    return width * length;
}

float Rectangle::calcP() const {
    return (width + length) * 2;
}


