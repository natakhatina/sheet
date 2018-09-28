//
// Created by student on 28.09.18.
//

#ifndef SHEET_POINT_H
#define SHEET_POINT_H
class Point{
    float x,y;
public:
    float *getX();

    void setX(float x);

    float *getY() const;

    void setY(float y);
    Point(); // конструктор
};

#endif //SHEET_POINT_H
