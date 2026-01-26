//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_ANIMAL_H
#define TEST_ANIMAL_H
#include <string>


class AnimalT {

private:
    std::pmr::string sound;

public:
    AnimalT();
    std::pmr::string getSound() const;

};


#endif //TEST_ANIMAL_H