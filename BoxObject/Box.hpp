

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>
#include <string>


class Box {
public:
    Box();
    Box(const Box& orig);
    Box(double width, double height, double length);
    double volume();
    virtual ~Box();
    void toString();
    void setLength(double length);
    double getLength();
    
    
private:
    int id;
    double width;
    double length;
    double height;
    
    

};

#endif /* Box_hpp */
