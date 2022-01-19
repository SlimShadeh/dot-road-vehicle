#include "tacka.h"

ostream &operator<<(ostream &os, const Tacka &t) {
    return os<< '(' << t.x << ',' <<t.y <<')';
}
