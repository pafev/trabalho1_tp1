#include "modulo_apresentacao_controle.hpp"
#include "modulo_apresentacao_autenticacao.hpp"
#include "modulo_apresentacao_desenvolvedor.hpp"
#include "modulo_apresentacao_teste.hpp"
#include "stubs_sevicos.hpp"

#include <iostream>
using namespace std;

int main() {
    IAControle *cntrAControle = new CntrAControle();
    IAAutenticacao *cntrAAutenticacao = new CntrAAutenticacao();
    IADesenvolvedor *cntrADesenvolvedor = new CntrADesenvolvedor();
    IATeste *cntrATeste = new CntrATeste();

    cntrAControle->setCntrAAutenticacao(cntrAAutenticacao);
    cntrAControle->setCntrADesenvolvedor(cntrADesenvolvedor);
    cntrAControle->setCntrATeste(cntrATeste);

    ISAutenticacao *stubSAutenticacao = new StubSAutenticacao();
    ISDesenvolvedor *stubSDesenvolvedor = new StubSDesenvolvedor();
    ISTeste *stubSTeste = new StubSTeste();

    cntrAAutenticacao->setCntrSAutenticacao(stubSAutenticacao);
    cntrADesenvolvedor->setCntrSDesenvolvedor(stubSDesenvolvedor);
    cntrATeste->setCntrSTeste(stubSTeste);

    cntrAControle->executar();

    delete cntrAAutenticacao, cntrADesenvolvedor, cntrATeste;
    delete stubSAutenticacao, stubSDesenvolvedor, stubSTeste;

    return 0;
}
