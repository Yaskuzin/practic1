#include <iostream>
#include "rectangle.h"
#include "circle.h"

int main() {
    FirstClass *rectangle = new FirstClass(1, 1, 1);
    Circle *circle = new Circle(rectangle);
    circle->getInfo();
    return 0;
}