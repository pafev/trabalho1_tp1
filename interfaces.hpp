#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"
#include <list>

using namespace std;

class IAAutenticacao;
class IADesenvolvedor;
class IATeste;

class IAControle {
public:
    virtual void executar() = 0;
    virtual void executar(Matricula*) = 0;
    virtual void setCntrAAutenticacao(IAAutenticacao*) = 0;
    virtual void setCntrADesenvolvedor(IADesenvolvedor*) = 0;
    virtual void setCntrATeste(IATeste*) = 0;
    virtual ~IAControle(){}
};

class ISAutenticacao;
class ISDesenvolvedor;
class ISTeste;

class IAAutenticacao {
public:
    virtual bool autenticar(Matricula*) = 0;                        
    virtual void setCntrSAutenticacao(ISAutenticacao*) = 0;        
    virtual ~IAAutenticacao(){}                                     
};

class IADesenvolvedor {
public:
    virtual void executar(Matricula*) = 0;
    virtual void cadastrar() = 0;
    virtual void setCntrSDesenvolvedor(ISDesenvolvedor*) = 0;
    virtual ~IADesenvolvedor(){}
};

class IATeste {
public:
    virtual void executar(Matricula*) = 0;
    virtual void setCntrSTeste(ISTeste*) = 0;
    virtual ~IATeste(){}
};

class ISAutenticacao {
public:
    virtual bool autenticar(const Matricula&, const Senha&) = 0;
    virtual ~ISAutenticacao(){}
}; 

class ISDesenvolvedor {
public:
    virtual bool cadastrar(const Desenvolvedor&) = 0;
    virtual bool descadastrar(const Matricula&) = 0;
    virtual bool visualizar(const Matricula&, Desenvolvedor*) = 0;
    virtual bool editar(Desenvolvedor) = 0;
    virtual ~ISDesenvolvedor(){}
};

class ISTeste {
public:
    virtual bool cadastrarTeste(const Teste&, const Matricula&) = 0;
    virtual bool descadastrarTeste(const Codigo&) = 0;
    virtual bool visualizarTeste(const Codigo&, Teste*) = 0;
    virtual bool visualizarTestes(const Matricula&, list<Teste>*) = 0;
    virtual bool editarTeste(Teste) = 0;

    virtual bool cadastrarCasoDeTeste(const CasoDeTeste&, const Codigo&) = 0;
    virtual bool descadastrarCasoDeTeste(const Codigo&) = 0;
    virtual bool visualizarCasoDeTeste(const Codigo&, CasoDeTeste*) = 0;
    virtual bool visualizarCasosDeTeste(const Codigo&, list<CasoDeTeste>*) = 0;
    virtual bool editarCasoDeTeste(CasoDeTeste) = 0;

    virtual ~ISTeste(){}
};

#endif // INTERFACES_HPP_INCLUDED