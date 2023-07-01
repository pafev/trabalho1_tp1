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

inline void CntrAControle::setCntrAAutenticacao(IAAutenticacao *cntr) {
    cntrAAutenticacao = cntr;
}

inline void CntrAControle::setCntrADesenvolvedor(IADesenvolvedor *cntr) {
    cntrADesenvolvedor = cntr;
}

inline void CntrAControle::setCntrATeste(IATeste *cntr) {
    cntrATeste = cntr;
}

#endif // MODULO_APRESENTACAO_CONTROLE_HPP