#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "circle.h"
#include "rectangle.h"

int main() {
    FirstClass *rectangle = new FirstClass(1, 1, 1);
    Circle *circle = new Circle(rectangle);
    circle->getInfo();
    Circle *circle = new Circle(1, 0.6, 1);
    FirstClass *firstClass = new FirstClass(circle);
    firstClass->getInfo();

    return 0;
}