#include <iostream>
#include <string.h>
class carte
{
	std::string autor;
	int nr_pagini;
	std::string editura;
	float pret;
public:
	carte(const std::string &autor, int nrPagini, const std::string &editura, float pret)
	{
		this->autor = autor;
		this->nr_pagini = nrPagini;
		this->editura = editura;
		this->pret = pret;
	}

	carte(const carte &s)
	{
		this->autor = s.autor;
		this->nr_pagini = s.nr_pagini;
		this->editura = s.editura;
		this->pret = s.pret;
	}
	const std::string &getAutor() const
	{
		return autor;
	}

	int getNrPagini() const
	{
		return nr_pagini;
	}

	const std::string &getEditura() const
	{
		return editura;
	}

    float getPret() const
    {
        return pret;
    }
	void setAutor(const std::string &autor)
	{
		carte::autor = autor;
	}

	void setNrPagini(int nrPagini)
	{
		nr_pagini = nrPagini;
	}

	void setEditura(const std::string &editura)
	{
		carte::editura = editura;
	}
	void setPret(float pret)
	{
	     carte::pret = pret;
	}
};

class roman_de_dragoste : public carte
{
	char *personaj;
	char *tipul_copertii;
	char *titlu;

public:
	roman_de_dragoste(const std::string &autor, const std::string &editura, char *personaj, char *tipul_copertii, char *titlu, int nrPagini, float pret) :
		carte(autor, nrPagini, editura, pret)
	{
		this->personaj = new char[20];
		this->tipul_copertii = new char[20];
		this->titlu = new char[20];
		strcpy(this->personaj, personaj);
		strcpy(this->tipul_copertii, tipul_copertii);
		strcpy(this->titlu, titlu);
	}

	roman_de_dragoste(const roman_de_dragoste &s) : carte(s)
	{
		this->personaj = s.personaj;
		this->tipul_copertii = s.tipul_copertii;
		this->titlu = s.titlu;
	}

	roman_de_dragoste& operator=(const roman_de_dragoste &r)
	{
		this->setAutor(r.getAutor());
		this->setEditura(r.getEditura());
		this->setNrPagini(r.getNrPagini());
		this->setPret(r.getPret());
		this->personaj = r.personaj;
		this->tipul_copertii = r.tipul_copertii;
		this->titlu = r.titlu;
		return *this;
	}

	char *getPersonaj() const
	{
		return personaj;
	}

	char *getTipulCopertii() const
	{
		return tipul_copertii;
	}

	char *getTitlu() const
	{
	    return titlu;
	}

	friend std::ostream& operator<<(std::ostream& os, const roman_de_dragoste &rdd)
	{
		os << rdd.getAutor() << ' ' << rdd.getEditura() << ' ' << rdd.getPret() << ' ' << rdd.getPersonaj() << ' ' << rdd.getTipulCopertii() << ' ' << rdd.getNrPagini() << ' ' << rdd.getTitlu();
		return os;
	}

	virtual ~roman_de_dragoste()
	{
		delete personaj;
		delete tipul_copertii;
		delete titlu;
	}

};

class set_mine_de_creion
{
    std::string producator;
    int marimea_minei;
    int numar_mine;

public:
    set_mine_de_creion(const std::string &producator, int marimeaMinei, int numarMine)
    {
        this->producator = producator;
        this->marimea_minei = marimeaMinei;
        this->numar_mine = numarMine;
    }
    friend std::ostream& operator<<(std::ostream& os, const set_mine_de_creion &smc)
    {
        os << smc.producator << ' ' << smc.marimea_minei << ' ' << smc.numar_mine << '\n';
        return os;
    }
};

class creion_mecanic
{
    std::string firma_creion;
    float tip_mine;
    std::string culoare;
    float pret;
    set_mine_de_creion smc;

public:
    creion_mecanic(const std::string &firmaCreion, float tipMine, const std::string &culoare, float pret, const set_mine_de_creion &smc):
        smc(smc)
        {
            this->firma_creion = firmaCreion;
            this->tip_mine = tipMine;
            this->culoare = culoare;
            this->pret = pret;
        }
        friend std::ostream& operator<<(std::ostream& os, const creion_mecanic &c)
        {
            os << c.firma_creion << ' ' << c.tip_mine << ' ' << c.culoare << ' ' << c.pret << ' ' << c.smc;
            return os;
        }
        void disponibilitate_mine()
        {
            if(tip_mine == 0.7 || tip_mine == 0.5)
                std::cout << "Exista acest tip de mine" << '\n';
            else
                std::cout << "Nu exista acest tip de mine" << '\n';
        }
};

int main()
{
	roman_de_dragoste R1("Eminescu", "Corint", "Harap-Alb", "cartonata", "Povestea lui Harap-Alb", 155, 59.9f);
	set_mine_de_creion smc_creion_mecanic("Ohto", 0.7f, 20);
	creion_mecanic C1("Ohto", 0.7f, "albastru", 7.99f);
	std::cout << R1;
    std::cout << C1;
    C1.disponibilitate_mine();
	return 0;
}
