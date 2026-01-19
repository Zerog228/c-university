//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_FOX_H
#define TEST_FOX_H
#include "Animal.h"


class Fox : public Animal{
private:
    //std::pmr::string sound;

public:
    using Animal::Animal;
    using Animal::getSound;

    std::pmr::string getSound() const;
};


#endif //TEST_FOX_H