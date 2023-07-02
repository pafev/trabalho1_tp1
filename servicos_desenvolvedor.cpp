#include "servicos_desenvolvedor.hpp"

#include <iostream>

using namespace std;

bool CntrSDesenvolvedor::cadastrar(const Desenvolvedor &desenvolvedor) {
    ContainerDesenvolvedor *containerDesenvolvedor;
    containerDesenvolvedor = ContainerDesenvolvedor::getInstancia();
    Desenvolvedor desenvolvedorCadastrado;

    if(containerDesenvolvedor->consultar(desenvolvedor.getMatricula(), &desenvolvedorCadastrado)) {
        return false;
    }

    return containerDesenvolvedor->inserir(desenvolvedor);
}

bool CntrSDesenvolvedor::descadastrar(const Matricula &matricula) {
    ContainerDesenvolvedor *containerDesenvolvedor;
    containerDesenvolvedor = ContainerDesenvolvedor::getInstancia();
    Desenvolvedor desenvolvedor;

    if(!containerDesenvolvedor->consultar(matricula, &desenvolvedor)) {
        return false;
    }

    return containerDesenvolvedor->remover(matricula);
}

bool CntrSDesenvolvedor::editar(const Desenvolvedor &desenvolvedor) {
    ContainerDesenvolvedor *containerDesenvolvedor;
    containerDesenvolvedor = ContainerDesenvolvedor::getInstancia();
    Desenvolvedor desenvolvedorCadastrado;

    if(!containerDesenvolvedor->consultar(desenvolvedor.getMatricula(), &desenvolvedorCadastrado)) {
        return false;
    }

    return containerDesenvolvedor->atualizar(desenvolvedor);
}

bool CntrSDesenvolvedor::visualizar(const Matricula &matricula, Desenvolvedor *desenvolvedor) {
    ContainerDesenvolvedor *containerDesenvolvedor;
    containerDesenvolvedor = ContainerDesenvolvedor::getInstancia();

    return containerDesenvolvedor->consultar(matricula, desenvolvedor);
}

ContainerDesenvolvedor *ContainerDesenvolvedor::instancia = nullptr;

ContainerDesenvolvedor* ContainerDesenvolvedor::getInstancia() {
    if (instancia == nullptr) {
        instancia = new ContainerDesenvolvedor();
    }

    return instancia;
}

bool ContainerDesenvolvedor::inserir(const Desenvolvedor &desenvolvedor) {
    return container.insert(pair<string, Desenvolvedor>(desenvolvedor.getMatricula().getValor(), desenvolvedor)).second;
}

bool ContainerDesenvolvedor::remover(const Matricula &matricula) {
    return container.erase(matricula.getValor());
}

bool ContainerDesenvolvedor::consultar(const Matricula &matricula, Desenvolvedor *desenvolvedor) {
    map<string, Desenvolvedor>::iterator it = container.find(matricula.getValor());

    if(it == container.end()) return false;

    *desenvolvedor = it->second;

    return true;
}

bool ContainerDesenvolvedor::atualizar(const Desenvolvedor &desenvolvedor) {
    map<string, Desenvolvedor>::iterator it = container.find(desenvolvedor.getMatricula().getValor());

    if(it == container.end()) return false;

    it->second = desenvolvedor;

    return true;
}