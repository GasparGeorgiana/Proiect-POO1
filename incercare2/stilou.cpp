#include <cstring>
#include "produs.h"
#include "stilou.h"
 
stilou::stilou(const std::string &denumire, const std::string &producator, float pret, int nrProduse, const std::string &tipRezerva,
               const std::string &tipPenita, const std::string &material):
               produs(denumire, producator, pret, nrProduse)
               {
                    this->tip_rezerva = tipRezerva;
                    this->tip_penita = tipPenita;
                    this->material = material;
               }
 
std::ostream &operator<<(std::ostream &os, const stilou &stilou) {
    os << stilou.getDenumire() << '\n' << "Producator: " << stilou.getProducator() << '\n' << "Pret: " << stilou.getPret() << '\n' << "Nr produse: " << stilou.getNr_produse()<< '\n'
       << "Tip rezerva: " << stilou.tip_rezerva << '\n' << "Tip penita: " << stilou.tip_penita << '\n' << "Material: " << stilou.material << '\n';
    return os;
}
 
void stilou::verificare_produs()
{
    if(getPret() >= 50)
        throw "Ati primit o reducere de 20%";
}
