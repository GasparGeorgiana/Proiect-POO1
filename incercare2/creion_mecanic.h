#ifndef CREION_MECANIC_H
#define CREION_MECANIC_H
#include <iostream>
#include <cstring>
#include "produs.h"
#include "set_mine.h"

class creion_mecanic: public produs
{
    float tip_mine;
    std::string culoare;
    set_mine sm;

public:
    creion_mecanic(const std::string &denumire, const std::string &producator, float pret, int nrProduse, float tipMine,
                   const std::string &culoare, const set_mine &sm);


    friend std::ostream& operator<<(std::ostream& afisare, const creion_mecanic &cm)
    {
        afisare << cm.getDenumire() << '\n' << "Producator: " << cm.getProducator() << '\n' << "Pret: " << cm.getPret() << '\n' << "Nr produse: " << cm.getNr_produse()<< '\n'
        << "Tip mine: " << cm.tip_mine << '\n' << "Culoare: " << cm.culoare;
        return afisare;
    }
    virtual ~creion_mecanic();

    void verificare_produs() override;
};

#endif // CREION_MECANIC_H
