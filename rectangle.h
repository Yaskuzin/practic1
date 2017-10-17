//
// Created by M17-612 on 17.10.2017.
//

#ifndef PRACTIC1_RECTANGLE_H
#define PRACTIC1_RECTANGLE_H

#include <iostream>

class FirstClass {
private:
    double x,y,z;
public:
    FirstClass();

    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double getZ() const;

    void setZ(double z);

    FirstClass(double x, double y, double z);

    void getInfo();
};

#endif //PRACTIC1_RECTANGLE_H
