//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_ANIMAL_H
#define TEST_ANIMAL_H
#include <string>


class Animal {

private:
    std::pmr::string sound;

public:
    Animal();
    std::pmr::string getSound() const;

};


#endif //TEST_ANIMAL_H