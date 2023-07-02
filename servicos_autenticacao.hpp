#ifndef MODULO_SERVICO_AUTENTICACAO_HPP_INCLUDED
#define MODULO_SERVICO_AUTENTICACAO_HPP_INCLUDED

#include "interfaces.hpp"
#include "servicos_desenvolvedor.hpp"

#include <string>
#include <map>

class CntrSAutenticacao : public ISAutenticacao {
public:
    bool autenticar(const Matricula&, const Senha&);
};

#endif