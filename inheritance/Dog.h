//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_DOG_H
#define TEST_DOG_H
#include "Fox.h"


class Dog : public Fox {

public:
    std::pmr::string getSound() const;
};


#endif //TEST_DOG_H