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
        void executarAutenticado();
    public:
        void executar();
        void setCntrAAutenticacao(IAAutenticacao*);
        void setCntrADesenvolvedor(IADesenvolvedor*);
        void setCntrATeste(IATeste*);
};

#endif // MODULO_APRESENTACAO_CONTROLE_HPP