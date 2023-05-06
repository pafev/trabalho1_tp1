#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;
#include "dominios.hpp"
#include "entidades.hpp"

// class TesteDominio {
// private:
//     // const static string VALOR_INVALIDO;
//     // const static string VALOR_VALIDO;
//     Dominio *dominio;
//     string estado;
//     void setUp();
//     void tearDown();
//     void testarValorInvalido(string);
//     void testarValorValido(string);
// public:
//     const string SUCESSO = "Sucesso!";
//     const string FALHA = "Erro: ";
//     string run(string, string);
// };


class TesteData {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Data *data;
    string estado;
    void setUp();
    void tearDown();
    void testarValorInvalido(string);
    void testarValorValido(string);
public:
    const string SUCESSO = "Sucesso!";
    const string FALHA = "Erro: ";
    string run(string, string);
};

class TesteSenha {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Senha *senha;
    string estado;
    void setUp();
    void tearDown();
    void testarValorInvalido(string);
    void testarValorValido(string);
public:
    const string SUCESSO = "Sucesso!";
    const string FALHA = "Erro: ";
    string run(string, string);
};

#endif // TESTES_HPP_INCLUDED
