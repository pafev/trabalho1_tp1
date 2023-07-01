#ifndef STUBS_SERVICOS_HPP_INCLUDED
#define STUBS_SERVICOS_HPP_INCLUDED

#include "interfaces.hpp"

class StubSAutenticacao : public ISAutenticacao {
public:
    bool autenticar(Matricula, Senha);
};

class StubSDesenvolvedor : public ISDesenvolvedor {
public:
    bool cadastrar(Desenvolvedor);
    bool descadastrar(Matricula);
    bool visualizar(Matricula, Desenvolvedor*);
    bool editar(Desenvolvedor);
};

inline bool StubSDesenvolvedor::cadastrar(Desenvolvedor desenvolvedor) {
    return true;
}

inline bool StubSDesenvolvedor::descadastrar(Matricula matricula) {
    return true;
}

inline bool StubSDesenvolvedor::visualizar(Matricula matricula, Desenvolvedor *desenvolvedor) {
    return true;
}

inline bool StubSDesenvolvedor::editar(Desenvolvedor desenvolvedor) {
    return true;
}

class StubSTeste : public ISTeste {
public:
    bool cadastrarTeste(Teste, Matricula);
    bool descadastrarTeste(Codigo);
    bool visualizarTeste(Codigo, Teste*);
    bool visualizarTestes(Matricula, list<Teste>*);
    bool editarTeste(Teste);

    bool cadastrarCasoDeTeste(CasoDeTeste, Codigo);
    bool descadastrarCasoDeTeste(Codigo);
    bool visualizarCasoDeTeste(Codigo, CasoDeTeste*);
    bool visualizarCasosDeTeste(Codigo, list<CasoDeTeste>*);
    bool editarCasoDeTeste(CasoDeTeste);
};

inline bool StubSTeste::cadastrarTeste(Teste teste, Matricula matricula) {
    return true;
}

inline bool StubSTeste::descadastrarTeste(Codigo codigo) {
    return true;
}

inline bool StubSTeste::visualizarTeste(Codigo codigo, Teste *teste) {
    return true;
}

inline bool StubSTeste::visualizarTestes(Matricula matricula, list<Teste> *testes) {
    return true;
}

inline bool StubSTeste::editarTeste(Teste teste) {
    return true;
}

inline bool StubSTeste::cadastrarCasoDeTeste(CasoDeTeste casoDeTeste, Codigo codigo) {
    return true;
}

inline bool StubSTeste::descadastrarCasoDeTeste(Codigo codigo) {
    return true;
}

inline bool StubSTeste::visualizarCasoDeTeste(Codigo codigo, CasoDeTeste *casoDeTeste) {
    return true;
}

inline bool StubSTeste::visualizarCasosDeTeste(Codigo codigo, list<CasoDeTeste> *casosDeTeste) {
    return true;
}

inline bool StubSTeste::editarCasoDeTeste(CasoDeTeste casoDeTeste) {
    return true;
}

#endif
