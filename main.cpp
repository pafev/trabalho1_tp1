#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"

#include <iostream>
using namespace std;

int main() {
    TesteDesenvolvedor testeDesenvolvedor;
    cout << "Testando desenvolvedor: " << testeDesenvolvedor.run() << endl;

    TesteTeste teste;
    cout << "Testando teste: " << teste.run() << endl;

    TesteCasoDeTeste testeCasoDeTeste;
    cout << "Testando caso de teste: " << testeCasoDeTeste.run() << endl;

    return 0;
}
