#ifndef ZAD3_VOZILO_H
#define ZAD3_VOZILO_H
#include "put.h"


class Vozilo {
public:
    Vozilo(string naz){
        model=naz;
    }

    double cenaPrevoza(Put &p){
        return p.duzina()*0.1 +120;
    }
    friend ostream &operator<<(ostream&os,const Vozilo &v);
private:
    string model;
};


#endif //ZAD3_VOZILO_H
