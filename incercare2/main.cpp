#include <iostream>
#include "produs.h"
#include "creion_mecanic.h"

int main()
{
    creion_mecanic c1("Creion mecanic", "Rotring", 7.5, 50, 0.7, "Rosu");
    creion_mecanic c2 = c1;
    std::cout << c1 << '\n' << '\n';
    std::cout << c2 << '\n' << '\n';

    creion_mecanic c3("Creion mecanic", "Ohto", 10, 20, 0.5, "Albastru");
    c1 = c3;
    std::cout << c3 << '\n' << '\n';
    std::cout << c1 << '\n' << '\n';

    return 0;
}
