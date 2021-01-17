#include "set_mine.h"
#include <cstring>
#include "produs.h"

set_mine::set_mine(const std::string &denumire, const std::string &producator, float pret,int nrProduse, float diametruMina,
                   const std::string &duritateaMinei,int bucatiSet):
                   produs(denumire, producator, pret, nrProduse)
                   {
                        this->diametru_mina = diametruMina;
                        this->duritatea_minei = duritateaMinei;
                        this->bucati_set = bucatiSet;
                   }

std::ostream &operator<<(std::ostream &os, const set_mine &mine) {
    os << mine.getDenumire() << "Producator: " << mine.getProducator() << " Pret: " << mine.getPret() << " Nr produse: " << mine.getNr_produse()
       << " Diametru mina: " << mine.diametru_mina << " Duritatea minei: " << mine.duritatea_minei << " Bucati set: " << mine.bucati_set;
    return os;
}

float set_mine::getDiametruMina() const {
    return diametru_mina;
}

const std::string &set_mine::getDuritateaMinei() const {
    return duritatea_minei;
}

int set_mine::getBucatiSet() const {
    return bucati_set;
}

void set_mine::verificare_produs()
{

}
