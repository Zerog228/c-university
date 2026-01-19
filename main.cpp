#include <iostream>
#include <stack>

#include "inheritance/Animal.h"
#include "inheritance/Dog.h"
#include "inheritance/Fox.h"
#include "util/Rectangle.h"
#include "util/Square.h"

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

/*
int fibonacci(int length) {
    if (length <= 0) {
        return 0;
    }
    int temp_num = 0;
    std::deque<int> stack;
    stack.push_front(0);
    stack.push_front(1);
    while (length > 1) {
        temp_num = stack.front() + stack.back();
        stack.pop_back();
        stack.push_front(temp_num);

        length--;
    }
    return temp_num;
}

void show(int table[], int size) {
    int i = 0;
    while (i < size) {
        std::cout << table[i] << std::endl;
        i++;
    }
}

int minFromArray(int array[], int size) {
    int i = 1, min = array[0];
    while (i < size) {
        if(array[i] < min) {
            min = array[i];
        }
        i++;
    }
    return min;
}

int sortBabel(int array[], int size) {
    bool changed = true;
    int i, first = 0, second = 0;

    //Sort
    while (changed) {
        changed = false;
        i = 0;

        while (i + 1 < size) {
            first = array[i];
            second = array[i + 1];
            if (first > second) {
                array[i] = second;
                array[i + 1] = first;
                changed = true;
            }

            i++;
        }
    }

    //Print info
    i = 0;
    while (i < size) {
        std::cout << array[i] << std::endl;
        i++;
    }
}

void inss(int numb_t[], int size_t){
    for(int index = 0; index < size_t; index++){
        int min_index = index;

        for(int margin = index; margin < size_t; margin++)
            if(numb_t[margin] < numb_t[min_index])
                min_index=margin ;

        int temp_min = numb_t[min_index];
        numb_t[min_index] = numb_t[index];
        numb_t[index] = temp_min;
    }
    std::cout << std::endl << "Sorted:" << std::endl;
    for(int i = 0; i < size_t; i++)
        std::cout << numb_t[i] << " ";

}

void printT(int *table, int size) {
    for(int i=0; i < size; i++)
        std::cout << table[i] << " ";
    std::cout << std::endl;
}

void fillDyn(int* table, int size) {
    for (int i = 0; i < size; i++) {
        table[i] = i;
    }
}

int maxFromDyn(int* table, int size) {
    if (size <= 0) {
        return -1;
    }
    int max = table[0];
    if (size == 1) {
        return max;
    }
    for (int i = 1; i < size; i++) {
        if (max < table[i]) {
            max = table[i];
        }
    }
    return max;
}

void createTable(int*& reference, int size, int value) {
    delete[] reference;
    reference = new int[size];
    for (int i = 0; i < size; i++) {
        reference[i] = value;
    }
}

int* combineArrays(int*& first_array, int*& second_array, int first_size, int second_size) {
    int* bigger = new int[first_size + second_size];
    int index;
    for (index = 0; index < first_size; index++) {
        bigger[index] = first_array[index];
    }
    index++;
    for (int size = 0; size < second_size; size++) {
        bigger[index + size] = second_array[size];
    }
    return bigger;
}

void addElementToTable(int *&array, int &size, int element) {
    int *bigger = new int[size + 1];
    bigger[size] = element;
    for (int i = 0; i < size; i++) {
        bigger[i] = array[i];
    }
    //std::cout << "Element - " << element << " | " << bigger[size] << std::endl;
    size++;
    array = bigger;
}

void deleteElementFromTable(int *&array, int &size, int index) {
    size--;
    int *smaller = new int[size];
    int added = 0;
    for (int i = 0; i < size; i++) {
        if (i == index) {
            added++;
        }
        smaller[i] = array[i + added];
    }
    array = smaller;
}*/

class Test {
public:
    Test(float f) {
        f1 = f;
    }
    Test(int f, int s, int t) {
        first = f;
        second = s;
        third = t;
    }
    int getFirst() {
        return first;
    }
    int getSecond() {
        return second;
    }
    int getThird() {
        return third;
    }
    void setFirst(const int f) {
        first = f;
    }
    void setSecond(int s) {
        second = s;
    }
    void setThird(int t) {
        third = t;
    }
    int addAllAndMult(int mult) {
        return (first+second+third) * mult;
    }
    float getF1() {
        return f1;
    }

private:
    int first, second, third;
    float f1;
};

class Base {
public:
    virtual ~Base(){};

    void start () {
        this -> init();
    };

    virtual void init () const {
        std::cout << "I'm the father" << std::endl;
    };
};
class Derivative : public Base {
public:
    void init () const override {
        std::cout << "I'm the child" << std::endl;
    };
};

int main() {
    Derivative derivative;
    derivative.start();

    Base *base = &derivative;
    base -> start();

    /*Animal* animal;
    Fox fox;

    animal = &fox;
    std::cout << animal -> getSound() << std::endl;*/

    //std::cout << animal.getSound() << std::endl;
    //std::cout << fox.getSound() << std::endl;
    //std::cout << dog.getSound() << std::endl;


    /*Square rec(7);
    std::cout << "Width: "<< rec.getLength() << std::endl;
    std::cout << "Length: " << rec.getWidth() << std::endl;
    std::cout << "Area: " << rec.calcA() << std::endl;
    std::cout << "Perimeter: " << rec.calcP()<< std::endl;*/

    /*int size = 5;
    int* dynamic1 = new int[5];
    fillDyn(dynamic1, size);
    deleteElementFromTable(dynamic1, size, 3);
    std::cout << size << std::endl;
    printT(dynamic1, size);

    delete[] dynamic1;*/

    /*int size = 5;
    int* dynamic1 = new int[size];
    int* dynamic2 = new int[size];
    fillDyn(dynamic1, size);
    fillDyn(dynamic2, size);

    int* combined = combineArrays(dynamic1, dynamic2, size, size);
    printT(dynamic1, size);
    printT(dynamic2, size);
    printT(combined, size * 2);

    delete[] dynamic1;
    delete[] dynamic2;
    delete[] combined;*/

    /*int first = 3;
    int* first_pointer = &first;

    int second = 6;
    int* second_pointer = &second;

    int temp = *first_pointer;
    first = *second_pointer;
    second = temp;

    std::cout << first << std::endl;
    std::cout << second << std::endl;*/

    /*int ref = 5;
    int* pointer = &ref;
    int** another_pointer = &pointer;
    //
    //Another pointer adress
    //Another pointer value
    std::cout << "-----AP-----" << std::endl;
    std::cout << &another_pointer << std::endl;
    std::cout << another_pointer << std::endl;
    std::cout << "-----AP-----" << std::endl;
    //
    //Pointer adress
    //Pointer value
    std::cout << "-----P-----" << std::endl;
    std::cout << another_pointer << std::endl;
    std::cout << *another_pointer << std::endl;
    std::cout << "-----P-----" << std::endl;
    //
    //Adress
    //Value
    std::cout << "-----A-----" << std::endl;
    std::cout << *another_pointer << std::endl;
    std::cout << **another_pointer << std::endl;
    std::cout << "-----V-----" << std::endl;*/

    //inss(new int[]{3, 2, 8, 99, 4, 6, 66, 1, 5}, 9);
    //sortBabel(new int[]{5, 4, 65, 7, 1, 2, 8, 99, 3}, 9);
    //std::cout << minFromArray(new int[]{5, 4, 65, 7, 1, 2}, 6);
    //show(new int[]{1, 4, 5, 7, 3, 2}, 6);

    /*std::cout << fibonacci(1) << std::endl;
    std::cout << fibonacci(5) << std::endl;
    std::cout << fibonacci(9) << std::endl;
    std::cout << fibonacci(12) << std::endl;*/

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}