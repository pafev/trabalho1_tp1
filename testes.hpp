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
    virtual void setUp() = 0;
    virtual void tearDown() = 0;
    virtual void testarValorInvalido() = 0;
    virtual void testarValorValido() = 0;
protected:
    const string SUCESSO = "Sucesso!";
    const string FALHA = "Erro: ";
    string estado;
public:
    string run();
};

class TesteData : public TesteDominio {
private:
    Data *data;
    const string VALOR_VALIDO = "29/FEV/2004";
    const string VALOR_INVALIDO = "32/DEZ/2023";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteData::tearDown() {
    delete data;
}

class TesteSenha : public TesteDominio {
private:
    Senha *senha;
    const string VALOR_VALIDO = "123@Ab";
    const string VALOR_INVALIDO = "senhaa";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteSenha::tearDown() {
    delete senha;
}

class TesteClasse : public TesteDominio {
private:
    Classe *classe;
    const string VALOR_INVALIDO = "ALEATORIO";
    const string VALOR_VALIDO = "SISTEMA";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteClasse::tearDown() {
    delete classe;
}

class TesteTelefone : public TesteDominio {
private:
    Telefone *telefone;
    const string VALOR_INVALIDO = "61999020080";
    const string VALOR_VALIDO = "+61982155097";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteTelefone::tearDown() {
    delete telefone;
}

class TesteCodigo : public TesteDominio {
private:
    Codigo *codigo;
    const string VALOR_INVALIDO = "ABCDE1";
    const string VALOR_VALIDO = "ABC123";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteCodigo::tearDown() {
    delete codigo;
}

class TesteMatricula : public TesteDominio {
private:
    Matricula *matricula;
    const string VALOR_INVALIDO = "1208340";
    const string VALOR_VALIDO = "2615334";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteMatricula::tearDown() {
    delete matricula;
}

class TesteResultado : public TesteDominio {
private:
    Resultado *resultado;
    const string VALOR_INVALIDO = "RECUSADO";
    const string VALOR_VALIDO = "REPROVADO";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteResultado::tearDown() {
    delete resultado;
}

class TesteTexto : public TesteDominio {
private:
    Texto *texto;
    const string VALOR_INVALIDO = "texto";
    const string VALOR_VALIDO = "aqui esta um exemplo";
    void setUp();
    void testarValorInvalido();
    void testarValorValido();
    void tearDown();
};

inline void TesteTexto::tearDown() {
    delete texto;
}



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
