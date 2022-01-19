#ifndef ZAD3_PUT_H
#define ZAD3_PUT_H
#include "lista.h"
#include "tacka.h"

class GTackaPostoji{
    friend ostream& operator<<(ostream& os,const GTackaPostoji &t){
        return os << "***Ne postoji element na datoj poziciji!***\n";

    }
};


class Put {
public:
    Put &operator+=(Tacka &t);

    double duzina();

    friend ostream &operator<<(ostream &os, Put &put) {
        for(int i=0;i<put.p.dohvBrPodataka();i++){
            os << *(put.p[i]) <<"\n";
        }
        return os;
    }
private:
    Lista<Tacka*> p;
};


#endif //ZAD3_PUT_H
