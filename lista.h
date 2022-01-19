#ifndef ZAD3_LISTA_H
#define ZAD3_LISTA_H
#include <iostream>
using namespace std;
class GPrekoracenje{
    friend ostream& operator<<(ostream& os,const GPrekoracenje &t){
        return os << "***Ne postoji element na datoj poziciji!***\n";

    }
};


template<typename T>
class Lista {
public:
    ~Lista(){
        isprazni();
    }
    Lista(){
        prvi=posl=nullptr;
    }
    Lista(const Lista &l){
        kopiraj(l);
    }
    Lista(Lista &&l){
        premesti(l);
    }
    Lista &operator =(const Lista &l){
        if(this !=&l){
            isprazni();
            kopiraj(l);
        }
        return *this;
    }
    Lista &operator =(Lista &&l){
        if(this !=&l){
            isprazni();
            premesti(l);
        }
        return *this;
    }
    Lista &operator+=(const T& t){
        posl=(!prvi ? prvi :posl->sled)=new Elem (t);
        return *this;
    }
    int dohvBrPodataka() const{
        int br=0;
        for(Elem *pok=prvi;pok;pok=pok->sled){
            br++;
        }
        return br;
    }
    T &operator [](int i) const{
        int x=dohvBrPodataka();
        if(i>x) throw GPrekoracenje();
        for(Elem *pok=prvi;pok;pok=pok->sled){
            if(i==0) return pok->pod;
            i--;
        }

    }

private:
    struct Elem {
        T pod;
        Elem *sled;
        Elem(const T& p, Elem *s=nullptr){
            pod=p;
            sled=s;
        }
    };
    Elem *prvi,*posl;

    void isprazni();
    void kopiraj(const Lista &l);
    void premesti(Lista &l) {
        prvi = l.prvi;
        posl = l.posl;
        l.prvi = l.posl = nullptr;
    }
};

template <typename T>
void Lista<T>::kopiraj(const Lista<T> &l) {
    prvi=posl=nullptr;
    for(Elem *pok=l.prvi;pok;pok=pok->sled){
        Elem *novi =new Elem(pok->pod);
        posl=(!prvi ? prvi : posl->sled)=novi;
    }
}

template <typename T>
void Lista<T>::isprazni() {
    while(prvi){
        Elem *stari=prvi;
        prvi=prvi->sled;
        delete stari;
    }
    posl=nullptr;
}


#endif //ZAD3_LISTA_H
