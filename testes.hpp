#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

#include "dominios.hpp"
#include "entidades.hpp"


//Testes de Dominio
class TesteDominio {
private:
    const string VALOR_INVALIDO;
    const string VALOR_VALIDO;
    virtual void setUp() = 0;
    void tearDown();
    void testarValorInvalido();
    void testarValorValido();
protected:
    Dominio *dominio;
    string estado;
    const string SUCESSO = "Sucesso!";
    const string FALHA = "Erro: ";
public:
    string run();
};

inline void TesteDominio::tearDown() {
    delete dominio;
}

class TesteData : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteSenha : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteClasse : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteTelefone : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteCodigo : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteMatricula : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteResultado : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};

class TesteTexto : public TesteDominio {
private:
    const string VALOR_INVALIDO = "";
    const string VALOR_VALIDO = "";
    void setUp();
};


//Testes de Entidade
class TesteDesenvolvedor {
private:
    const string MATRICULA_VALIDA   = "2615334"; 
    const string NOME_VALIDO   = "Pocahontas2@";  
    const string SENHA_VALIDA   = "123@Ab";
    const string TELEFONE_VALIDO   = "+61982155097";
    Desenvolvedor *desenvolvedor;                       
    int estado;                             
    void setUp();                           
    void tearDown();                        
    void testarCenarioSucesso();            
public:
    const int SUCESSO =  0;
    const int FALHA   = -1;
    int run(); 
};

class TesteTeste {
private:
    const string CODIGO_VALIDO   = "AbC123";
    const string NOME_VALIDO   = "Pocahontas@2";
    const string CLASSE_VALIDA   = "FUMACA";  
    Teste *teste;                       
    int estado;                             
    void setUp();                           
    void tearDown();                        
    void testarCenarioSucesso();            
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run(); 
};

class TesteCasoDeTeste {
private:
    const string CODIGO_VALIDO   = "AbC123";
    const string NOME_VALIDO   = "Pocahontas@2";
    const string DATA_VALIDA   = "29/JUN/2002";
    const string ACAO_VALIDA   = "Ir para casa dormir";
    const string RESPOSTA_VALIDA   = "Sim esta tudo certo";
    const string RESULTADO_VALIDO   = "APROVADO";
    CasoDeTeste *casodeteste;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTES_HPP_INCLUDED
