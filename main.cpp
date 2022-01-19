#include <iostream>
#include "put.h"
#include "tacka.h"
#include "vozilo.h"
int main() {
    Put put;
    Tacka A(-1,-1);
    put+=A;
    Tacka B(0,0);
    put+=B;
    Tacka C(1,1);
    put+=C;
    cout <<put.duzina() << "\n";
    cout << put;
    /*
    Vozilo v("golf");
    double cena=v.cenaPrevoza(put);
    cout <<v<< "\n";
    cout <<cena;
    */
    return 0;
}
