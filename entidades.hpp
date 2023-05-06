#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

// class Entidade {
// private:
//     Dominio nomeAtributo;
// public:
//     void setNomeAtributo(const Dominio&);
//     Dominio getNomeAtributo() const;
// };

// inline void Entidade::setNomeAtributo(const Dominio &nomeAtributo){
//     this->nomeAtributo = nomeAtributo;
// }

// inline Dominio Entidade::getNomeAtributo() const {
//     return nomeAtributo;
// }

class Desenvolvedor {
private:
    Matricula matricula;
    Texto nome;
    Senha senha;
    Telefone telefone;
public:
    void setMatricula(const Matricula&);
    Matricula getMatricula() const;
    void setNome(const Texto&);
    Texto getNome() const;
    void setSenha(const Senha&);
    Senha getSenha() const;
    void setTelefone(const Telefone&);
    Telefone getTelefone() const;
};

inline void Desenvolvedor::setMatricula(const Matricula &matricula){
    this->matricula = matricula;
};

inline Matricula Desenvolvedor::getMatricula() const {
    return matricula;
};

inline void Desenvolvedor::setNome(const Texto &nome){
    this->nome = nome;
};

inline Texto Desenvolvedor::getNome() const {
    return nome;
};

inline void Desenvolvedor::setSenha(const Senha &senha){
    this->senha = senha;
};

inline Senha Desenvolvedor::getSenha() const {
    return senha;
};

inline void Desenvolvedor::setTelefone(const Telefone &telefone){
    this->telefone = telefone;
};

inline Telefone Desenvolvedor::getTelefone() const {
    return telefone;
};

class Teste {
private:
    Codigo codigo;
    Texto nome;
    Classe classe;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
    void setNome(const Texto&);
    Texto getNome() const;
    void setClasse(const Classe&);
    Classe getClasse() const;
};

inline void Teste::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
};

inline Codigo Teste::getCodigo() const {
    return codigo;
};

inline void Teste::setNome(const Texto &nome){
    this->nome = nome;
};

inline Texto Teste::getNome() const {
    return nome;
};

inline void Teste::setClasse(const Classe &classe){
    this->classe = classe;
};

inline Classe Teste::getClasse() const{
    return classe;
};

class CasoDeTeste {
private:
    Codigo codigo;
    Texto nome;
    Data data;
    Texto acao;
    Texto resposta;
    Resultado resultado;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
    void setNome(const Texto&);
    Texto getNome() const;
    void setData(const Data&);
    Data getData() const;
    void setAcao(const Texto&);
    Texto getAcao() const;
    void setResposta(const Texto&);
    Texto getResposta() const;
    void setResultado(const Resultado&);
    Resultado getResultado() const;
};

inline void CasoDeTeste::setCodigo(const Codigo &codigo){
    this->codigo = codigo;
};

inline Codigo CasoDeTeste::getCodigo() const {
    return codigo;
};

inline void CasoDeTeste::setNome(const Texto &nome){
    this->nome = nome;
};

inline Texto CasoDeTeste::getNome() const {
    return nome;
};

inline void CasoDeTeste::setData(const Data &data){
    this->data = data;
};

inline Data CasoDeTeste::getData() const {
    return data;
};

inline void CasoDeTeste::setAcao(const Texto &acao){
    this->acao = acao;
};

inline Texto CasoDeTeste::getAcao() const {
    return acao;
};

inline void CasoDeTeste::setResposta(const Texto &resposta){
    this->resposta = resposta;
};

inline Texto CasoDeTeste::getResposta() const {
    return resposta;
};

inline void CasoDeTeste::setResultado(const Resultado &resultado){
    this->resultado = resultado;
};

inline Resultado CasoDeTeste::getResultado() const {
    return resultado;
};

#endif // ENTIDADES_HPP_INCLUDED
