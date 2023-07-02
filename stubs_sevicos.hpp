#ifndef STUBS_SERVICOS_HPP_INCLUDED
#define STUBS_SERVICOS_HPP_INCLUDED

#include "interfaces.hpp"

class StubSAutenticacao : public ISAutenticacao {
public:
    bool autenticar(const Matricula&, const Senha&);
};

class StubSDesenvolvedor : public ISDesenvolvedor {
public:
    bool cadastrar(const Desenvolvedor&);
    bool descadastrar(const Matricula&);
    bool visualizar(const Matricula&, Desenvolvedor*);
    bool editar(Desenvolvedor);
};

inline bool StubSDesenvolvedor::cadastrar(const Desenvolvedor &desenvolvedor) {
    return true;
}

inline bool StubSDesenvolvedor::descadastrar(const Matricula &matricula) {
    return true;
}

inline bool StubSDesenvolvedor::editar(Desenvolvedor desenvolvedor) {
    return true;
}

class StubSTeste : public ISTeste {
public:
    bool cadastrarTeste(const Teste&, const Matricula&);
    bool descadastrarTeste(const Codigo&);
    bool visualizarTeste(const Codigo&, Teste*);
    bool visualizarTestes(const Matricula&, list<Teste>*);
    bool editarTeste(Teste);

    bool cadastrarCasoDeTeste(const CasoDeTeste&, const Codigo&);
    bool descadastrarCasoDeTeste(const Codigo&);
    bool visualizarCasoDeTeste(const Codigo&, CasoDeTeste*);
    bool visualizarCasosDeTeste(const Codigo&, list<CasoDeTeste>*);
    bool editarCasoDeTeste(CasoDeTeste);
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

inline bool StubSTeste::editarTeste(Teste teste) {
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

inline bool StubSTeste::editarCasoDeTeste(CasoDeTeste casoDeTeste) {
    return true;
}

#endif
