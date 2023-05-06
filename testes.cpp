#include "testes.hpp"

// void TesteDominio::setUp() {
//     dominio = new Dominio();
//     estado = SUCESSO;
// };

// void TesteDominio::tearDown() {
//     delete dominio;
// };

// void TesteDominio::testarValorInvalido(string valor) {
//     try {
//         dominio->setValor(valor);
//         estado = FALHA + "Valor invalido setado";
//     }
//     catch(invalid_argument &excecao) {
//         if (dominio->getValor() == valor) {
//             estado = FALHA + excecao.what();
//         };
//     };
// };

// void TesteDominio::testarValorValido(string valor) {
//     try {
//         dominio->setValor(valor);
//         if (dominio->getValor() != valor) {
//             estado = FALHA + "Valor valido não foi setado";
//         };
//     }
//     catch(invalid_argument &excecao) {
//         estado = FALHA + excecao.what();
//     };
// };

// string TesteDominio::run(string valorInvalido, string valorValido) {
//     setUp();
//     testarValorInvalido(valorInvalido);
//     testarValorValido(valorValido);
//     tearDown();
//     return estado;
// }

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