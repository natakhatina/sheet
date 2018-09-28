//
// Created by student on 28.09.18.
//

#include <point.h>
#include <iostream>

float *Point::getX()  {
    return &x;
}

void Point::setX(float x){
    Point::x = x;
}

float *Point::getY() const {
    return &y;
}

void Point::setY(float y) {
    Point::y = y;
}
Point::Point(){
    //std::cout<<"Constructor!!!\n";
    x = 5;
    y = 6;
}