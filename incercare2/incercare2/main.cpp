#include <iostream>
#include "produs.h"
#include "creion_mecanic.h"
#include "stilou.h"
#include "penar.h"

int main()
{
    set_mine SM1("Mine", "Rotring", 3.5, 20, 0.7, "HB", 12);
    set_mine SM2("Mine", "Rotring", 3.5, 20, 0.5, "2B", 15);
    set_mine SM3("Mine", "Rotring", 3.5, 20, 0.3, "2H", 12);

    creion_mecanic c1("Creion mecanic", "Rotring", 7.5, 50, 0.7, "Rosu", SM1);
    std::cout << c1 << '\n' << '\n';

    creion_mecanic c2("Creion mecanic", "Ohto", 10, 20, 0.5, "Albastru", SM3);
    std::cout << c2 << '\n' << '\n';
    c2.verificare_produs();

    stilou S1("myPen", "Bic", 20, 30, "mica", "tip pix", "otel inoxidabil");
    std::cout << S1 << '\n';
    stilou S2 = S1;
    std::cout << S2 << '\n' << '\n';
    stilou S3("myPen", "Bic", 10, 20, "mare", "tip pix", "plastic");
    S1 = S3;
    std::cout << S1 << '\n' << '\n';

    penar P1("Penar", "Herlitz", 30, 8, "cilindrica", 1, "medie", c1, S1, SM1);
    std::cout << P1 << '\n';
    return 0;
}
