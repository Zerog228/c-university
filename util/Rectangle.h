//
// Created by Zerog228 on 19.01.2026.
//

#ifndef TEST_RECTANGLE_H
#define TEST_RECTANGLE_H


class Rectangle {

private:
    float length, width;

public:
    Rectangle(float length_, float width_);
    float getLength() const {return length;};
    float getWidth() const {return width;};
    float calcA() const;
    float calcP() const;
};


#endif //TEST_RECTANGLE_H