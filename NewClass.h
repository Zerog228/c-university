//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_NEWCLASS_H
#define TEST_NEWCLASS_H


class NewClass {
public:
    NewClass(int f, int s, int t);

    int getFirst() const {
        return first;
    }
    int getSecond() const {
        return second;
    }

    int getThird() const {
        return third;
    }

    int addAllAndMult(int mult) const;

    void print() const;

private:
    int first, second, third;
};


#endif //TEST_NEWCLASS_H