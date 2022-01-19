#include "put.h"

Put &Put::operator+=(Tacka &t) {
    int x=p.dohvBrPodataka();
    while(x!=0){
        if(t==*p[x-1]) throw GTackaPostoji();
        x--;
    }
    p+=&t;
}

double Put::duzina() {
    double ukupno=0;
    for(int i=0;i<p.dohvBrPodataka()-1;i++){
        ukupno+= rastojanje(*p[i],*p[i+1]);
    }
    return ukupno;
}

