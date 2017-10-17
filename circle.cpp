#include <cmath>
#include "circle.h"
#include "rectangle.h"

using namespace std;
void Circle::getInfo() {
    cout<<"r = "<<r<<"   teta="<<teta<<"  fi= "<<fi<<endl;
}

Circle::Circle() {}

Circle::Circle(FirstClass *rectangle) {
    r = sqrt(pow(rectangle->getX(),2)+pow(rectangle->getY(),2)+pow(rectangle->getZ(),2));
    teta = acos(rectangle->getZ()/(r));
    fi = atan(rectangle->getY()/rectangle->getX());
}

Circle::Circle(double r, double teta, double fi) {
  setR(r);
    setTeta(teta);
    setFi(fi);
}

double Circle::getR() const {
    return r;
}

void Circle::setR(double r) {
    if (r<0) r=0;
    Circle::r = r;
}

double Circle::getTeta() const {
    return teta;
}

void Circle::setTeta(double teta) {
    if (teta<0) teta=0;
    Circle::teta = teta;
}

double Circle::getFi() const {
    return fi;
}

void Circle::setFi(double fi) {
    if (fi<0) fi=0;
    Circle::fi = fi;
}


