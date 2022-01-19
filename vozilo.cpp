#include "vozilo.h"


ostream &operator<<(ostream &os, const Vozilo &v) {
    return os << v.model;
}
