#ifndef CREION_MECANIC_H
#define CREION_MECANIC_H
#include <iostream>
#include <cstring>
#include "produs.h"

class creion_mecanic: public produs
{
    float tip_mine;
    std::string culoare;

    public:
        creion_mecanic(const std::string &denumire, const std::string &producator, float pret, int nr_produse, float tip_mine, const std::string &culoare);
        creion_mecanic(const creion_mecanic &pr): produs(pr)
        {
            this->tip_mine = pr.tip_mine;
            this->culoare = pr.culoare;
        }
      creion_mecanic& operator=(const creion_mecanic &cm)
      {
          this->setDenumire(cm.getDenumire());
          this->setProducator(cm.getProducator());
          this->setPret(cm.getPret());
          this->setNr_produse(cm.getNr_produse());
          this->tip_mine = cm.tip_mine;
          this->culoare = cm.culoare;
          return *this;
      }
      friend std::ostream& operator<<(std::ostream& afisare, const creion_mecanic &cm)
      {
          afisare << cm.getDenumire() << '\n' << "Producator: " << cm.getProducator() << '\n' << "Pret: " << cm.getPret() << '\n' << "Nr produse: " << cm.getNr_produse()<< '\n' << "Tip mine: " << cm.tip_mine << '\n' << "Culoare: " << cm.culoare;
          return afisare;
      }
        virtual ~creion_mecanic();

};

#endif // CREION_MECANIC_H
