#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"
#include <stdexcept>

using namespace std;

class ISAutenticacao;

class IAAutenticacao {
public:
    virtual bool autenticar(Matricula*) = 0;                        
    virtual void setCntrISAutenticacao(ISAutenticacao*) = 0;        
    virtual ~IAAutenticacao(){}                                     
};

class IADesenvolvedor {
public:
    virtual bool executar(Matricula*) = 0;
    virtual void setCntrISDesenvolvedor(ISDesenvolvedor*) = 0;        
    virtual ~IADesenvolvedor(){} 
};

class ISAutenticacao {
public:
    virtual bool autenticar(const Matricula&, const Senha&) = 0;    
    virtual ~ISAutenticacao(){}                                     
};

class ISDesenvolvedor {
public:
    // métodos os quais não sei quais serão;   
    virtual ~ISDesenvolvedor(){}                                     
};

#endif // INTERFACES_HPP_INCLUDED