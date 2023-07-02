#ifndef MODULO_APRESENTACAO_AUTENTICACAO_HPP_INCLUDED
#define MODULO_APRESENTACAO_AUTENTICACAO_HPP_INCLUDED

#include "interfaces.hpp"

class CntrAAutenticacao:public IAAutenticacao {
private:
    ISAutenticacao *cntrSAutenticacao;
public:
    bool autenticar(Matricula*);
    void setCntrSAutenticacao(ISAutenticacao*);
};

void inline CntrAAutenticacao::setCntrSAutenticacao(ISAutenticacao *cntrSAutenticacao){
        this->cntrSAutenticacao = cntrSAutenticacao;
}

#endif // MODULO_APRESENTACAO_AUTENTICACAO_HPP_INCLUDED