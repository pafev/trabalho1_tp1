#include "testes.hpp"


//Testes de Dominio
void TesteData::setUp() {
    data = new Data();
    estado = SUCESSO;
};

void TesteData::tearDown() {
    delete data;
};

void TesteData::testarValorInvalido(string valor) {
    try {
        data->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (data->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};

void TesteData::testarValorValido(string valor) {
    try {
        data->setValor(valor);
        if (data->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};

string TesteData::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
}

void TesteSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
};

void TesteSenha::tearDown() {
    delete senha;
};

void TesteSenha::testarValorInvalido(string valor) {
    try {
        senha->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (senha->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};

void TesteSenha::testarValorValido(string valor) {
    try {
        senha->setValor(valor);
        if (senha->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};

string TesteSenha::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
};

void TesteClasse::setUp() {
    classe = new Classe();
    estado = SUCESSO;
};
void TesteClasse::tearDown() {
    delete classe;
};
void TesteClasse::testarValorInvalido(string valor) {
    try {
        classe->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (classe->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteClasse::testarValorValido(string valor) {
    try {
        classe->setValor(valor);
        if (classe->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteClasse::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
};

void TesteTelefone::setUp() {
    telefone = new Telefone();
    estado = SUCESSO;
};
void TesteTelefone::tearDown() {
    delete telefone;
};
void TesteTelefone::testarValorInvalido(string valor) {
    try {
        telefone->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (telefone->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteTelefone::testarValorValido(string valor) {
    try {
        telefone->setValor(valor);
        if (telefone->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteTelefone::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
};

void TesteMatricula::setUp() {
    matricula = new Matricula();
    estado = SUCESSO;
};
void TesteMatricula::tearDown() {
    delete matricula;
};
void TesteMatricula::testarValorInvalido(string valor) {
    try {
        matricula->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (matricula->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteMatricula::testarValorValido(string valor) {
    try {
        matricula->setValor(valor);
        if (matricula->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteMatricula::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
};

void TesteMatricula::setUp() {
    matricula = new Matricula();
    estado = SUCESSO;
};
void TesteMatricula::tearDown() {
    delete matricula;
};
void TesteMatricula::testarValorInvalido(string valor) {
    try {
        matricula->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (matricula->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteMatricula::testarValorValido(string valor) {
    try {
        matricula->setValor(valor);
        if (matricula->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteMatricula::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
};

void TesteResultado::setUp() {
    resultado = new Resultado();
    estado = SUCESSO;
};
void TesteResultado::tearDown() {
    delete resultado;
};
void TesteResultado::testarValorInvalido(string valor) {
    try {
        resultado->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (resultado->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteResultado::testarValorValido(string valor) {
    try {
        resultado->setValor(valor);
        if (resultado->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteResultado::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
};

void TesteTexto::setUp() {
    texto = new Texto();
    estado = SUCESSO;
};
void TesteTexto::tearDown() {
    delete texto;
};
void TesteTexto::testarValorInvalido(string valor) {
    try {
        texto->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (texto->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteTexto::testarValorValido(string valor) {
    try {
        texto->setValor(valor);
        if (texto->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteTexto::run(string valorInvalido, string valorValido) {
    setUp();
    testarValorInvalido(valorInvalido);
    testarValorValido(valorValido);
    tearDown();
    return estado;
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