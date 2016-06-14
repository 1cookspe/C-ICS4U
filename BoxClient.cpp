/* 
 * File:   BoxClient.cpp
 * Author: 1cookspe
 *
 * Created on June 14, 2016, 2:29 PM
 */

#include <cstdlib>

#include "Box.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Box box = Box(90.6, 43.7, 12.9);
    return Box.volume(Box.getHeight(), Box.getLength(), Box.getWidth());
}

