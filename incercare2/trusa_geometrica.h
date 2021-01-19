#include <iostream>
#include <cstring>

class trusa
{
    int nr_compas;
    int nr_rigla;
    int nr_raportor;
    int nr_echer;
    int nr_creion;
    friend class trusa_geometrica_builder;

public:
    trusa() = default;

    friend std::ostream &operator<<(std::ostream &os, const trusa &trusa);

    int getNrCompas() const {
        return nr_compas;
    }

    int getNrRigla() const {
        return nr_rigla;
    }

    int getNrRaportor() const {
        return nr_raportor;
    }

    int getNrEcher() const {
        return nr_echer;
    }

    int getNrCreion() const {
        return nr_creion;
    }

};


class trusa_geometrica_builder
{
    trusa t;
public:
    trusa_geometrica_builder() = default;
    trusa_geometrica_builder& nr_compas(int nr)
    {
        t.nr_compas = nr;
        if(t.nr_compas == 0)
            throw "Trusa incompleta.\n";
        return *this;
    }
    trusa_geometrica_builder& nr_rigla(int nr)
    {
        t.nr_rigla = nr;
        if(t.nr_rigla == 0)
            throw "Trusa incompleta.\n";
        return *this;
    }
    trusa_geometrica_builder& nr_raportor(int nr)
    {
        t.nr_raportor = nr;
        if(t.nr_raportor == 0)
            throw "Trusa incompleta.\n";
        return *this;
    }
    trusa_geometrica_builder& nr_echer(int nr)
    {
        t.nr_echer = nr;
        if(t.nr_echer == 0)
            throw "Trusa incompleta.\n";
        return *this;
    }
    trusa_geometrica_builder& nr_creion(int nr)
    {
        t.nr_compas = nr;
        return *this;
    }

    trusa build()
    {
        return t;
    }

};

std::ostream &operator<<(std::ostream &os, const trusa &trusa) {
    os << "Nr compas: " << trusa.nr_compas << " Nr rigla: " << trusa.nr_rigla << " Nr raportor: " << trusa.nr_raportor
       << " Nr echer: " << trusa.nr_echer << " Nr creion: " << trusa.nr_creion;
    return os;
}

