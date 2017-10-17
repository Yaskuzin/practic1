#include "rectangle.h"
#include "circle.h"
#include <locale>
#include <cmath>

using namespace std;

void FirstClass::getInfo() {
  cout<<"x="<<x<<"y="<<y<<"z"<<z<<endl;

}


FirstClass::FirstClass() {}
FirstClass::FirstClass(Circle *circle){

    x= circle->getR() * sin(circle->getTeta()) * cos(circle->getFi());
    y= sin(circle->getR()) * sin(circle->getFi());
    z= circle->getR() * cos(circle->getTeta());
}

FirstClass::FirstClass(double x, double y, double z)  {
    setX(x);
    setY(y);
    setZ(z);
}

double FirstClass::getX() const {
    if(x<0)
        cout<<"Отрицательный х"<<endl;
    return x;

}

void FirstClass::setX(double x) {
    FirstClass::x = x;
}

double FirstClass::getY() const {
    if(y<0)
        cout<<"Отрицательный y"<<endl;
    return y;
}

void FirstClass::setY(double y) {
    FirstClass::y = y;
}

double FirstClass::getZ() const {
    if(z<0)
        cout<<"Отрицательный z"<<endl;
    return z;
}

void FirstClass::setZ(double z) {
    FirstClass::z = z;
}
