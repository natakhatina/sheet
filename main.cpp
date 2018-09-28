#include <iostream>
#include <point.h>
#include <shadowpoint.h>

int main() {
    Point a;
    Point1 b;
    a.setX(99);
    b.setX(a.getX());
    std::cout<< *b.getX() <<std::endl;

    Point a1;
    Point1 b1;
    a1.setX(99);
    b1.setX(a1.getX());
    std::cout<< *b1.getX() <<std::endl;
    return 0;
}