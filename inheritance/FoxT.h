//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_FOX_H
#define TEST_FOX_H
#include "AnimalT.h"


class FoxT : public AnimalT{
private:
    //std::pmr::string sound;

public:
    using AnimalT::AnimalT;
    using AnimalT::getSound;

    std::pmr::string getSound() const;
};


#endif //TEST_FOX_H