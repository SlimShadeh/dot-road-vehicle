#ifndef ZAD3_TACKA_H
#define ZAD3_TACKA_H
#include <math.h>
#include <iostream>
using namespace std;

class Tacka {
public:
    Tacka(double xx,double yy){
        x=xx;
        y=yy;
    }

    friend double rastojanje(Tacka &a,Tacka &b){
        return sqrt(pow(a.x-b.x,2)+ pow(a.y-b.y,2));
    }
    bool friend operator==(Tacka &a, Tacka &b) {
        if(a.x==b.x && a.y==b.y) return true;
        else return false;
    }
    friend ostream &operator<<(ostream &os,const Tacka &t);

private:
    double x,y;
};


#endif //ZAD3_TACKA_H
