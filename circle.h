//
// Created by M17-612 on 17.10.2017.
//
#include <iostream>
#include "rectangle.h"

#ifndef PRACTIC1_CIRCLE_H
#define PRACTIC1_CIRCLE_H

class Circle {
private:
    double r;
    double teta;
    double fi;
public:
    void getInfo();
    Circle(FirstClass *rectangle);
    double getR() const;

    void setR(double r);

    double getTeta() const;

    void setTeta(double teta);

    double getFi() const;

    void setFi(double fi);

    Circle();

    Circle(double r, double teta, double fi);
};
#endif //PRACTIC1_CIRCLE_H
