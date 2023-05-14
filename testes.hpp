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
    const string VALOR_INVALIDO = "32/DEZ/2023";
    const string VALOR_VALIDO = "29/FEV/2004";
    void setUp();
};

class TesteSenha : public TesteDominio {
private:
    const string VALOR_INVALIDO = "senhaa";
    const string VALOR_VALIDO = "123@Ab";
    void setUp();
};

class TesteClasse : public TesteDominio {
private:
    const string VALOR_INVALIDO = "ALEATORIO";
    const string VALOR_VALIDO = "SISTEMA";
    void setUp();
};

class TesteTelefone : public TesteDominio {
private:
    const string VALOR_INVALIDO = "61999020080";
    const string VALOR_VALIDO = "+61982155097";
    void setUp();
};

class TesteCodigo : public TesteDominio {
private:
    const string VALOR_INVALIDO = "ABCDE1";
    const string VALOR_VALIDO = "ABC123";
    void setUp();
};

class TesteMatricula : public TesteDominio {
private:
    const string VALOR_INVALIDO = "1208340";
    const string VALOR_VALIDO = "2615334";
    void setUp();
};

class TesteResultado : public TesteDominio {
private:
    const string VALOR_INVALIDO = "RECUSADO";
    const string VALOR_VALIDO = "REPROVADO";
    void setUp();
};

class TesteTexto : public TesteDominio {
private:
    const string VALOR_INVALIDO = "texto";
    const string VALOR_VALIDO = "aqui esta um exemplo";
    void setUp();
};


//Testes de Entidade
class TesteEntidade {
private:
    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarCenarioSucesso() = 0;
protected:
    const string SUCESSO = "Sucesso!";
    const string FALHA = "Erro";
    string estado;
public:
    string run();
};

class TesteDesenvolvedor : public TesteEntidade {
private:
    const string MATRICULA_VALIDA   = "2615334"; 
    const string NOME_VALIDO   = "Pocahontas2@";  
    const string SENHA_VALIDA   = "123@Ab";
    const string TELEFONE_VALIDO   = "+61982155097";
    Desenvolvedor *desenvolvedor;                       
    void setUp();                        
    void tearDown();            
    void testarCenarioSucesso();
};

class TesteTeste : public TesteEntidade {
private:
    const string CODIGO_VALIDO   = "AbC123";
    const string NOME_VALIDO   = "Pocahontas@2";
    const string CLASSE_VALIDA   = "FUMACA";  
    Teste *teste;                       
    void setUp();                           
    void tearDown();                        
    void testarCenarioSucesso();            
};

class TesteCasoDeTeste : public TesteEntidade {
private:
    const string CODIGO_VALIDO   = "AbC123";
    const string NOME_VALIDO   = "Pocahontas@2";
    const string DATA_VALIDA   = "29/JUN/2002";
    const string ACAO_VALIDA   = "Ir para casa dormir";
    const string RESPOSTA_VALIDA   = "Sim esta tudo certo";
    const string RESULTADO_VALIDO   = "APROVADO";
    CasoDeTeste *casodeteste;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
};

#endif // TESTES_HPP_INCLUDED
