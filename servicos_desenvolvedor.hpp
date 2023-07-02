#ifndef MODULO_SERVICO_DESENVOLVEDOR_HPP_INCLUDED
#define MODULO_SERVICO_DESENVOLVEDOR_HPP_INCLUDED

#include "interfaces.hpp"

#include <string>
#include <map>

class CntrSDesenvolvedor: public ISDesenvolvedor {
public:
    bool cadastrar(const Desenvolvedor&);
    bool descadastrar(const Matricula&);
    bool visualizar(const Matricula&, Desenvolvedor*);
    bool editar(const Desenvolvedor&);
};

class ContainerDesenvolvedor {
private:
    map<string, Desenvolvedor> container;
    static ContainerDesenvolvedor *instancia;
    ContainerDesenvolvedor() {};
public:
    static ContainerDesenvolvedor *getInstancia();
    bool inserir(const Desenvolvedor&);
    bool remover(const Matricula&);
    bool consultar(const Matricula&, Desenvolvedor*);
    bool atualizar(const Desenvolvedor&);
};

#endif