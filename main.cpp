#include "apresentacao_controle.hpp"
#include "apresentacao_autenticacao.hpp"
#include "apresentacao_desenvolvedor.hpp"
#include "apresentacao_teste.hpp"
#include "servicos_desenvolvedor.hpp"
#include "servicos_autenticacao.hpp"
#include "servicos_teste.hpp"

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
