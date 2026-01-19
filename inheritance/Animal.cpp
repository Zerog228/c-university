//
// Created by Zerog228 on 19.01.2026.
//

#include "Animal.h"

std::pmr::string sound;

Animal::Animal() : sound("What does the fox say?"){}

std::pmr::string Animal::getSound() const {
    return sound;
}
