#include <iostream>
#include "circle.h"
#include "rectangle.h"

int main() {
    Circle *circle = new Circle(1, 0.6, 1);
    FirstClass *firstClass = new FirstClass(circle);
    firstClass->getInfo();

    return 0;
}