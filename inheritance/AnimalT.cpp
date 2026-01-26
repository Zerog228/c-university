//
// Created by Zerog228 on 19.01.2026.
//

#include "AnimalT.h"

std::pmr::string sound;

AnimalT::AnimalT() : sound("What does the fox say?"){}

std::pmr::string AnimalT::getSound() const {
    return sound;
}
