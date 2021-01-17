#ifndef PRODUS_H
#define PRODUS_H
#include <iostream>
#include <cstring>

class produs
{
    std::string denumire;
    std::string producator;
    float pret;
    int nr_produse;

public:
    produs(const std::string &denumire, const std::string &producator, float pret, int nr_produse);

    produs(const produs &pr)
    {
        this -> denumire = pr.denumire;
        this -> producator = pr.producator;
        this -> pret = pr.pret;
        this -> nr_produse = pr.nr_produse;
    }
    const std::string &getDenumire() const
    {
        return denumire;
    }
    const std::string &getProducator() const
    {
        return producator;
    }
    float getPret() const
    {
        return pret;
    }
    int getNr_produse() const
    {
        return nr_produse;
    }

    void setDenumire(const std::string &denumire)
    {
        produs::denumire = denumire;
    }
    void setProducator(const std::string &producator)
    {
        produs::producator = producator;
    }
    void setPret(float pret)
    {
        produs::pret = pret;
    }
    void setNr_produse(int nr_produse)
    {
        produs::nr_produse = nr_produse;
    }

    virtual ~produs();

    virtual void verificare_produs(){}
};

#endif // PRODUS_H
