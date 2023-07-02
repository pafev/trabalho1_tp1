#ifndef STUBS_SERVICOS_HPP_INCLUDED
#define STUBS_SERVICOS_HPP_INCLUDED

#include "interfaces.hpp"

class StubSTeste : public ISTeste {
public:
    bool cadastrarTeste(const Teste&, const Matricula&);
    bool descadastrarTeste(const Codigo&);
    bool visualizarTeste(const Codigo&, Teste*);
    bool visualizarTestes(const Matricula&, list<Teste>*);
    bool editarTeste(const Teste&);

    bool cadastrarCasoDeTeste(const CasoDeTeste&, const Codigo&);
    bool descadastrarCasoDeTeste(const Codigo&);
    bool visualizarCasoDeTeste(const Codigo&, CasoDeTeste*);
    bool visualizarCasosDeTeste(const Codigo&, list<CasoDeTeste>*);
    bool editarCasoDeTeste(const CasoDeTeste&);
};

inline bool StubSTeste::cadastrarTeste(const Teste &teste, const Matricula &matricula) {
    return true;
}

inline bool StubSTeste::descadastrarTeste(const Codigo &codigo) {
    return true;
}

inline bool StubSTeste::visualizarTestes(const Matricula &matricula, list<Teste> *testes) {
    return true;
}

inline bool StubSTeste::editarTeste(const Teste &teste) {
    return true;
}

inline bool StubSTeste::cadastrarCasoDeTeste(const CasoDeTeste &casoDeTeste, const Codigo &codigo) {
    return true;
}

inline bool StubSTeste::descadastrarCasoDeTeste(const Codigo &codigo) {
    return true;
}

inline bool StubSTeste::visualizarCasosDeTeste(const Codigo &codigo, list<CasoDeTeste> *casosDeTeste) {
    return true;
}

inline bool StubSTeste::editarCasoDeTeste(const CasoDeTeste &casoDeTeste) {
    return true;
}

#endif
