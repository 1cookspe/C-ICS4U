/* 
 * File:   Box.h
 * Author: 1cookspe
 *
 * Created on June 14, 2016, 2:16 PM
 */

#ifndef BOX_H
#define	BOX_H

class Box {
public:
    Box();
    Box(const Box& orig);
    int volume(double width, double length, double height);
    double getWidth();
    double getLength();
    double getHeight();
    virtual ~Box();
    double width;
    double length;
    double height;
    
private:
    
    int id;

};





#endif	/* BOX_H */

