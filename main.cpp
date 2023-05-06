#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"

#include <iostream>
using namespace std;

int main() {
    Data x;
    x.setValor("30/FEV/2004");
    cout << x.getValor() << endl;

    return 0;
}
