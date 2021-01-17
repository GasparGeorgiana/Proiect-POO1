#ifndef STILOU_H
#define STILOU_H
#include <iostream>
#include <cstring>
#include "produs.h"

class stilou: public produs
{
    std::string tip_rezerva;
    std::string tip_penita;
    std::string material;

public:
    stilou(const std::string &denumire, const std::string &producator, float pret, int nrProduse,
           const std::string &tipRezerva, const std::string &tipPenita, const std::string &material);


    stilou(const stilou &pr): produs(pr)
    {
        this->tip_rezerva = pr.tip_rezerva;
        this->tip_penita = pr.tip_penita;
        this->material = pr.material;
    }
    stilou& operator=(const stilou &st)
    {
        this->setDenumire(st.getDenumire());
        this->setProducator(st.getProducator());
        this->setPret(st.getPret());
        this->setNr_produse(st.getNr_produse());
        this->tip_rezerva = st.tip_rezerva;
        this->tip_penita = st.tip_penita;
        this->material = st.material;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const stilou &stilou);

    void verificare_produs() override;
};
#endif // STILOU_H
