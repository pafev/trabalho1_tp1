#ifndef MODULO_APRESENTACAO_CONTROLE_HPP_INCLUDED
#define MODULO_APRESENTACAO_CONTROLE_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"
#include "interfaces.hpp"

using namespace std;

class CntrAControle: public IAControle {
    private:
        IAAutenticacao *cntrAAutenticacao;
        IADesenvolvedor *cntrADesenvolvedor;
        IATeste *cntrATeste;
        Matricula matricula;
    public:
        void executar();
        void executar(Matricula*);
        void setCntrAAutenticacao(IAAutenticacao*);
        void setCntrADesenvolvedor(IADesenvolvedor*);
        void setCntrATeste(IATeste*);
};

inline void CntrAControle::setCntrAAutenticacao(IAAutenticacao *cntrAAutenticacao) {
    this->cntrAAutenticacao = cntrAAutenticacao;
}

inline void CntrAControle::setCntrADesenvolvedor(IADesenvolvedor *cntrADesenvolvedor) {
    this->cntrADesenvolvedor = cntrADesenvolvedor;
}

inline void CntrAControle::setCntrATeste(IATeste *cntrATeste) {
    this->cntrATeste = cntrATeste;
}

#endif // MODULO_APRESENTACAO_CONTROLE_HPP