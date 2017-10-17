#include "rectangle.h"
#include <locale>
using namespace std;

void FirstClass::getInfo() {
  cout<<"x="<<x<<"y="<<y<<"z"<<z<<endl;

}


FirstClass::FirstClass() {}

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
