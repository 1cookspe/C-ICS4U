/* 
 * File:   Box.cpp
 * Author: 1cookspe
 * 
 * Created on June 14, 2016, 2:16 PM
 */

#include "Box.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Box::Box() {
    cout << "Creating box...";
    id = rand() % 10 + 1;
}

Box::Box(double width, double height, double length) {
    Box.width = width;
    Box.height = height;
    Box.length = length;
    Box();
}

Box::Box(const Box& orig) {
}

Box::~Box() {
}

int volume(double width, double length, double height) {
    return width * length * height;
}

double getHeight() {
    return Box.height;
}

double getLength() {
    return Box.length;
}

double getWidth() {
    return Box.width;
}

