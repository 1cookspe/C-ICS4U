

#include "Box.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

Box::Box() {
    cout << "Creating box...";
    id = rand() % 10 + 1;
}

Box::Box(double width, double height, double length) {
    
    this->width = width;
    this->height = height;
    this->length = length;
    Box();
}

Box::Box(const Box& orig) {
}

Box::~Box() {
}

double Box::volume() {
    std::cout << this->width;
    return this->width * this->height * this->height;
}

void Box::toString() {
    std::cout << "The box has a height of " << this->height << ", a length of " << this->length << " and a width of " << this->width << "\n";
}

void Box::setLength(double length) {
    this->length = length;
}

double Box::getLength() {
    return this->length;
}







