#include "testes.hpp"

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
}