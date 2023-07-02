#include "modulo_apresentacao_controle.hpp"
#include "modulo_apresentacao_autenticacao.hpp"
#include "modulo_apresentacao_desenvolvedor.hpp"
#include "modulo_apresentacao_teste.hpp"
#include "modulo_servico_desenvolvedor.hpp"
#include "modulo_servico_autenticacao.hpp"
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

    ISAutenticacao *cntrSAutenticacao = new CntrSAutenticacao();
    ISDesenvolvedor *cntrSDesenvolvedor = new CntrSDesenvolvedor();
    ISTeste *stubSTeste = new StubSTeste();

    cntrAAutenticacao->setCntrSAutenticacao(cntrSAutenticacao);
    cntrADesenvolvedor->setCntrSDesenvolvedor(cntrSDesenvolvedor);
    cntrATeste->setCntrSTeste(stubSTeste);

    cntrAControle->executar();

    delete cntrAAutenticacao, cntrADesenvolvedor, cntrATeste, cntrSDesenvolvedor, cntrSAutenticacao;
    delete stubSTeste;

    return 0;
}
