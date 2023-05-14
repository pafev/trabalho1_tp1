#include "testes.hpp"


// Testes de Domínios
string TesteDominio::run() {
    setUp();
    testarValorInvalido();
    testarValorValido();
    tearDown();
    return estado;
}

void TesteDominio::testarValorInvalido() {
    try {
        dominio->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (dominio->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteDominio::testarValorValido() {
    try {
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Exceção não esperada - " + excecao.what();
    };
};

void TesteData::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteSenha::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteClasse::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteTelefone::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteCodigo::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteMatricula::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteResultado::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};

void TesteTexto::setUp() {
    dominio = new Data();
    estado = SUCESSO;
};


// Testes de Entidade
void TesteDesenvolvedor::setUp(){
    desenvolvedor = new Desenvolvedor();
    estado = SUCESSO;
}

void TesteDesenvolvedor::tearDown(){
    delete desenvolvedor;
}

void TesteDesenvolvedor::testarCenarioSucesso(){
    Matricula matricula;
    matricula.setValor(MATRICULA_VALIDA);
    desenvolvedor->setMatricula(matricula);
    if(desenvolvedor->getMatricula().getValor() != MATRICULA_VALIDA)
        estado = FALHA;

    Texto nome;
    nome.setValor(NOME_VALIDO);
    desenvolvedor->setNome(nome);
    if(desenvolvedor->getNome().getValor() != NOME_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setValor(SENHA_VALIDA);
    desenvolvedor->setSenha(senha);
    if(desenvolvedor->getSenha().getValor() != SENHA_VALIDA)
        estado = FALHA;

    Telefone telefone;
    telefone.setValor(TELEFONE_VALIDO);
    desenvolvedor->setTelefone(telefone);
    if(desenvolvedor->getTelefone().getValor() != TELEFONE_VALIDO)
        estado = FALHA;
}

int TesteDesenvolvedor::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TesteTeste::setUp(){
    teste = new Teste();
    estado = SUCESSO;
}

void TesteTeste::tearDown(){
    delete teste;
}

void TesteTeste::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    teste->setCodigo(codigo);
    if(teste->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Texto nome;
    nome.setValor(NOME_VALIDO);
    teste->setNome(nome);
    if(teste->getNome().getValor() != NOME_VALIDO)
        estado = FALHA;
    
    Classe classe;
    classe.setValor(CLASSE_VALIDA);
    teste->setClasse(classe);
    if(teste->getClasse().getValor() != CLASSE_VALIDA)
        estado = FALHA;
}

int TesteTeste::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TesteCasoDeTeste::setUp(){
    casodeteste = new CasoDeTeste();
    estado = SUCESSO;
}

void TesteCasoDeTeste::tearDown(){
    delete casodeteste;
}

void TesteCasoDeTeste::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    casodeteste->setCodigo(codigo);
    if(casodeteste->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Texto nome;
    nome.setValor(NOME_VALIDO);
    casodeteste->setNome(nome);
    if(casodeteste->getNome().getValor() != NOME_VALIDO)
        estado = FALHA;

    Data data;
    data.setValor(DATA_VALIDA);
    casodeteste->setData(data);
    if(casodeteste->getData().getValor() != DATA_VALIDA)
        estado = FALHA;

    Texto acao;
    acao.setValor(ACAO_VALIDA);
    casodeteste->setAcao(acao);
    if(casodeteste->getAcao().getValor() != ACAO_VALIDA)
        estado = FALHA;

    Texto resposta;
    resposta.setValor(RESPOSTA_VALIDA);
    casodeteste->setResposta(resposta);
    if(casodeteste->getResposta().getValor() != RESPOSTA_VALIDA)
        estado = FALHA;

    Resultado resultado;
    resultado.setValor(RESULTADO_VALIDO);
    casodeteste->setResultado(resultado);
    if(casodeteste->getResultado().getValor() != RESULTADO_VALIDO)
        estado = FALHA;
}

int TesteCasoDeTeste::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}