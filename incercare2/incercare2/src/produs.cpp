#include "produs.h"

produs::produs(const std::string &denumire, const std::string &producator, float pret, int nr_produse)
{
    this->denumire = denumire;
    this->producator = producator;
    this->pret = pret;
    this->nr_produse = nr_produse;
}

produs::~produs()
{
    //dtor
}
