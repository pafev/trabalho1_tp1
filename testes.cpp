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

void TesteCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
};
void TesteCodigo::tearDown() {
    delete codigo;
};
void TesteCodigo::testarValorInvalido(string valor) {
    try {
        codigo->setValor(valor);
        estado = FALHA + "Valor invalido setado";
    }
    catch(invalid_argument &excecao) {
        if (codigo->getValor() == valor) {
            estado = FALHA + excecao.what();
        };
    };
};
void TesteCodigo::testarValorValido(string valor) {
    try {
        codigo->setValor(valor);
        if (codigo->getValor() != valor) {
            estado = FALHA + "Valor valido não foi setado";
        };
    }
    catch(invalid_argument &excecao) {
        estado = FALHA + excecao.what();
    };
};
string TesteCodigo::run(string valorInvalido, string valorValido) {
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