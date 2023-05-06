#include "dominios/dominios.hpp"
#include "entidades/entidades.hpp"
#include "testes/testes.hpp"

#include <iostream>
using namespace std;

int main() {
    Data x;
    x.setValor("30/FEV/2004");
    cout << x.getValor() << endl;

    Data z;
    z.setValor("01/DEZ/2999");
    cout << z.getValor() << endl;

    return 0;
}
