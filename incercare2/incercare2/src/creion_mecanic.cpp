#include "produs.h"
#include "creion_mecanic.h"

creion_mecanic::creion_mecanic(const std::string &denumire, const std::string &producator, float pret, int nrProduse,
                               float tipMine, const std::string &culoare, const set_mine &sm):
                               produs(denumire,producator, pret,nrProduse),sm(sm)
                               {
                                    this->tip_mine = tipMine;
                                    this->culoare = culoare;
                               }

creion_mecanic::~creion_mecanic()
{

}

void creion_mecanic::verificare_produs()
{
    try{
        if(tip_mine != sm.getDiametruMina())
            throw "Minele nu sunt compatibile";
    } catch (const char* msg) {
        std::cerr << msg << '\n';
    }
}
