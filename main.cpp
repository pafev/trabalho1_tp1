#include "modulo_apresentacao_controle.hpp"
#include "modulo_apresentacao_autenticacao.hpp"
#include "modulo_apresentacao_desenvolvedor.hpp"
#include "modulo_apresentacao_teste.hpp"

#include <iostream>
using namespace std;

int main() {
    CntrAControle *cntrAControle = new CntrAControle();
    CntrAAutenticacao *cntrAAutenticacao = new CntrAAutenticacao();
    CntrADesenvolvedor *cntrADesenvolvedor = new CntrADesenvolvedor();
    CntrATeste *cntrATeste = new CntrATeste();

    cntrAControle->setCntrAAutenticacao(cntrAAutenticacao);

    cntrAControle->executar();

    return 0;
}
