#include <iostream>
#include <cstring>
#include "produs.h"
#include "creion_mecanic.h"
#include "stilou.h"
#include "set_mine.h"
 
class penar: public produs
{
    std::string forma;
    int nr_incaperi;
    std::string dimensiune;
    creion_mecanic cm;
    stilou st;
    set_mine sm;
 
public:
    penar(const std::string &denumire, const std::string &producator, float pret, int nrProduse,
          const std::string &forma, int nrIncaperi, const std::string &dimensiune, const creion_mecanic &cm,
          const stilou &st, const set_mine &sm);
 
    friend std::ostream &operator<<(std::ostream &os, const penar &penar);
 
    void verificare_produs() override;
};
#endif // PENAR_H
