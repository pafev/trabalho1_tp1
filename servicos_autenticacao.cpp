#include "servicos_autenticacao.hpp"

bool CntrSAutenticacao::autenticar(const Matricula &matricula, const Senha &senha) {
    ContainerDesenvolvedor *containerDesenvolvedor;
    containerDesenvolvedor = ContainerDesenvolvedor::getInstancia();
    Desenvolvedor desenvolvedor;

    if(containerDesenvolvedor->consultar(matricula, &desenvolvedor)) {
        if(desenvolvedor.getSenha().getValor() == senha.getValor()) {
            return true;
        }
    }

    return false;
};