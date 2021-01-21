#include <iostream>
#include <vector>
#include "produs.h"
#include "creion_mecanic.h"
#include "stilou.h"
#include "penar.h"
#include "trusa_geometrica.h"
 
int main()
{
    set_mine SM1("Mine", "Rotring", 3.5, 20, 0.7, "HB", 12);
    set_mine SM2("Mine", "Rotring", 3.5, 20, 0.5, "2B", 15);
    set_mine SM3("Mine", "Rotring", 3.5, 0, 0.3, "2H", 12);
 
    creion_mecanic c1("Creion mecanic", "Herlitz", 7.5, 50, 0.7, "Rosu", SM1);
    std::cout << c1 << '\n' << '\n';
 
    creion_mecanic c2("Creion mecanic", "Rotring", 10, 20, 0.5, "Albastru", SM3);
    std::cout << c2 << '\n' << '\n';
 
    stilou S1("myPen", "Bic", 20, 30, "mica", "tip pix", "plastic");
    std::cout << S1 << '\n';
    stilou S2 = S1;
    std::cout << S2 << '\n' << '\n';
    stilou S3("myPen", "Bic", 50, 20, "mare", "tip pix", "plastic");
    S1 = S3;
    std::cout << S1 << '\n' << '\n';
 
    penar P1("Penar", "Herlitz", 30, 8, "cilindrica", 1, "medie", c1, S1, SM1);
    std::cout << P1 << '\n';
 
    std::vector<produs*> prod;
    prod.push_back(&SM1);
    prod.push_back(&SM2);
    prod.push_back(&SM3);
    prod.push_back(&c1);
    prod.push_back(&c2);
    prod.push_back(&S1);
    prod.push_back(&S2);
    prod.push_back(&S3);
    prod.push_back(&P1);
 
    trusa_geometrica_builder g;
    try {
        trusa t = g.nr_compas(1).nr_rigla(2).nr_raportor(1).nr_echer(0).nr_creion(1).build();
        std::cout << t << '\n';
    } catch (const char* msg) {
        std::cerr << msg << '\n';
    }
 
    for(auto & i : prod)
    {
        try {
            i->verificare_produs();
        }catch (const char* msg) {
            std::cerr << msg << '\n';
        }
    }
 
    return 0;
}
