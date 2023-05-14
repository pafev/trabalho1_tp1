#ifndef TESTES_HPP_INCLUDED
#define TESTES_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;
#include "dominios.hpp"
#include "entidades.hpp"


//Testes de Dominio
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

class TesteClasse {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Classe *classe;
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

class TesteTelefone {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Telefone *telefone;
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
  
class TesteCodigo {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Codigo *codigo;
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

class TesteMatricula {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Matricula *matricula;
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

class TesteResultado {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Resultado *resultado;
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

class TesteTexto {
private:
    // const static string VALOR_INVALIDO;
    // const static string VALOR_VALIDO;
    Texto *texto;
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
    const static int VALOR_VALIDO   = 20;   
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
