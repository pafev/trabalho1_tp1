#ifndef MODULO_APRESENTACAO_DESENVOLVEDOR_HPP_INCLUDED
#define MODULO_APRESENTACAO_DESENVOLVEDOR_HPP_INCLUDED

#include "interfaces.hpp"

class CntrADesenvolvedor:public IADesenvolvedor {
private:
    ISDesenvolvedor *cntrSDesenvolvedor;
public:
    void executar(Matricula*);
    void cadastrar();
    void setCntrSDesenvolvedor(ISDesenvolvedor*);
};

void inline CntrADesenvolvedor::setCntrSDesenvolvedor(ISDesenvolvedor *cntrSDesenvolvedor){
        this->cntrSDesenvolvedor = cntrSDesenvolvedor;
}

#endif // MODULO_APRESENTACAO_DESENVOLVEDOR_HPP_INCLUDED