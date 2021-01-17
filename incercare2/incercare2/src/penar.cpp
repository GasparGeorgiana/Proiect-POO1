#include <cstring>
#include "creion_mecanic.h"
#include "stilou.h"
#include "penar.h"
#include "set_mine.h"

penar::penar(const std::string &denumire, const std::string &producator, float pret, int nrProduse, const std::string &forma,
             int nrIncaperi, const std::string &dimensiune, const creion_mecanic &cm, const stilou &st, const set_mine &sm):
             produs(denumire, producator, pret, nrProduse), cm(cm), st(st)
             {
                    this->forma = forma;
                    this->nr_incaperi = nrIncaperi;
                    this->dimensiune = dimensiune;
             }

std::ostream &operator<<(std::ostream &os, const penar &penar) {
    os << penar.getDenumire() << '\n' << "Producator: " << penar.getProducator() << '\n' << "Pret: " << penar.getPret() << '\n' << "Nr produse: " << penar.getNr_produse()<< '\n'
       << "Forma: " << penar.forma << '\n' << "Nr incaperi: " << penar.nr_incaperi << '\n' << "Dimensiune: " << penar.dimensiune << '\n' << "Contine:\n" << "Creion: " << penar.cm << '\n' << "Stilou: " << penar.st;
    return os;
}

void penar::verificare_produs()
{

}
