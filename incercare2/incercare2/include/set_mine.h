#ifndef SET_MINE_H
#define SET_MINE_H
#include <iostream>
#include <cstring>
#include "produs.h"

class set_mine: public produs
{
    float diametru_mina;
    std::string duritatea_minei;
    int bucati_set;

public:
    set_mine(const std::string &denumire, const std::string &producator, float pret, int nrProduse, float diametruMina,
             const std::string &duritateaMinei, int bucatiSet);

    friend std::ostream &operator<<(std::ostream &os, const set_mine &mine);

    float getDiametruMina() const;

    const std::string &getDuritateaMinei() const;

    int getBucatiSet() const;

    void verificare_produs() override;
};

#endif // SET_MINE_H
