#include "testes.hpp"


// Testes de Domínios
string TesteDominio::run() {         /*matricula aluno: 211043351*/
    setUp();
    testarValorInvalido();
    testarValorValido();
    tearDown();
    return estado;
}

void TesteData::setUp() {
    data = new Data();
    estado = SUCESSO;
};

void TesteData::testarValorInvalido() {        /*matricula aluno: 211043351*/
    try {
        data->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (data->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteData::testarValorValido() {        /*matricula aluno: 211043351*/
    try {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteSenha::setUp() {        /*matricula aluna: 211038253*/
    senha = new Senha();
    estado = SUCESSO;
};

void TesteSenha::testarValorInvalido() {       /*matricula aluna: 211038253*/
    try {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (senha->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteSenha::testarValorValido() {       /*matricula aluna: 211038253*/
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
    };
};

void TesteClasse::setUp() {          /*matricula aluna: 211038253*/
    classe = new Classe();
    estado = SUCESSO;
};

void TesteClasse::testarValorInvalido() {      /*matricula aluna: 211038253*/
    try {
        classe->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (classe->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteClasse::testarValorValido() {       /*matricula aluna: 211038253*/
    try {
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteTelefone::setUp() {             /*matricula aluna: 211038253*/
    telefone = new Telefone();
    estado = SUCESSO;
};

void TesteTelefone::testarValorInvalido() {       /*matricula aluna: 211038253*/
    try {
        telefone->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (telefone->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteTelefone::testarValorValido() {        /*matricula aluna: 211038253*/
    try {
        telefone->setValor(VALOR_VALIDO);
        if (telefone->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteCodigo::setUp() {        /*matricula aluna: 211038253*/
    codigo = new Codigo();
    estado = SUCESSO;
};

void TesteCodigo::testarValorInvalido() {         /*matricula aluna: 211038253*/
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteCodigo::testarValorValido() {          /*matricula aluna: 211038253*/
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteMatricula::setUp() {        /*matricula aluna: 211038253*/
    matricula = new Matricula();
    estado = SUCESSO;
};

void TesteMatricula::testarValorInvalido() {      /*matricula aluna: 211038253*/
    try {
        matricula->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (matricula->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteMatricula::testarValorValido() {       /*matricula aluna: 211038253*/
    try {
        matricula->setValor(VALOR_VALIDO);
        if (matricula->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteResultado::setUp() {          /*matricula aluna: 211038253*/
    resultado = new Resultado();
    estado = SUCESSO;
};

void TesteResultado::testarValorInvalido() {       /*matricula aluna: 211038253*/
    try {
        resultado->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (resultado->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteResultado::testarValorValido() {      /*matricula aluna: 211038253*/
    try {
        resultado->setValor(VALOR_VALIDO);
        if (resultado->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};

void TesteTexto::setUp() {             /*matricula aluna: 211038253*/
    texto = new Texto();
    estado = SUCESSO;
};

void TesteTexto::testarValorInvalido() {     /*matricula aluna: 211038253*/
    try {
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA + "Validação burlada";
    }
    catch(invalid_argument &excecao) {
        if (texto->getValor() == VALOR_INVALIDO) {
            estado = FALHA + "Valor inválido setado, com exceção " + excecao.what();
        };
    };
};

void TesteTexto::testarValorValido() {     /*matricula aluna: 211038253*/
    try {
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + "Validação indesejada, com exceção " + excecao.what();
    };
};


// Testes de Entidade
string TesteEntidade::run(){           /*matricula aluna: 221030830*/
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TesteDesenvolvedor::setUp(){           /*matricula aluna: 221030830*/
    desenvolvedor = new Desenvolvedor();
    estado = SUCESSO;
}

void TesteDesenvolvedor::tearDown(){       /*matricula aluna: 221030830*/
    delete desenvolvedor;
}

void TesteDesenvolvedor::testarCenarioSucesso(){      /*matricula aluna: 221030830*/
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


void TesteTeste::setUp(){            /*matricula aluna: 221030830*/
    teste = new Teste();
    estado = SUCESSO;
}

void TesteTeste::tearDown(){        /*matricula aluna: 221030830*/
    delete teste;
}

void TesteTeste::testarCenarioSucesso(){        /*matricula aluna: 221030830*/
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


void TesteCasoDeTeste::setUp(){          /*matricula aluna: 221030830*/
    casodeteste = new CasoDeTeste();
    estado = SUCESSO;
}

void TesteCasoDeTeste::tearDown(){          /*matricula aluna: 221030830*/
    delete casodeteste;
}

void TesteCasoDeTeste::testarCenarioSucesso(){        /*matricula aluna: 221030830*/
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
