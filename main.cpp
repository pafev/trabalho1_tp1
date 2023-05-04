#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"

#include <iostream>
using namespace std;

int main() {
    Senha x;
    x.setValor("1-A45&");

    cout << x.getValor() << endl;
    return 0;
}
