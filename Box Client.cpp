

#include <iostream>
#include "Box.hpp"

int main(int argc, const char * argv[]) {
    Box box = Box(65.3, 45.2, 78.9);
    std::cout << "Hello, World!\n";
    std::cout << "Volume of box = " << box.volume() << "\n";
    box.toString();
    box.setLength(75.4);
    std::cout << "New length of box = " << box.getLength() << "\n";
    std::cout << "Volume of box = " << box.volume() << "\n";
    return 0;
}
