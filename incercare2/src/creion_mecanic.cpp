#include "produs.h"
#include "creion_mecanic.h"

creion_mecanic::creion_mecanic(const std::string &denumire, const std::string &producator, float pret, int nr_produse, float tip_mine, const std::string &culoare):
    produs(denumire, producator, pret, nr_produse)
{
    this-> tip_mine = tip_mine;
    this-> culoare = culoare;
}

creion_mecanic::~creion_mecanic()
{
    //dtor
}
