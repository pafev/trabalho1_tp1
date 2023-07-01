#ifndef MODULO_APRESENTACAO_TESTE_HPP_INCLUDED
#define MODULO_APRESENTACAO_TESTE_HPP_INCLUDED

#include "interfaces.hpp"
#include <list>

class CntrATeste: public IATeste {
private:
    ISTeste *cntrSTeste;
    list<Teste> testes;
    Teste teste;
    list<CasoDeTeste> casosDeTeste;
    CasoDeTeste casoDeTeste;
public:
    void executar(Matricula*);
    void setCntrSTeste(ISTeste*);
};

inline void CntrATeste::setCntrSTeste(ISTeste *cntr) {
    cntrSTeste = cntr;
};

#endif