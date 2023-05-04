#include "dominios.hpp"

// void DominioASerCriado::validar(string valor) {
//     if (verificacao) {
//         throw invalid_argument("explique o erro");
//     };
// };

// void DominioASerCriado::setValor(string valor) {
//     validar(valor);
//     this->valor = valor;
// };

void Data::validar(string valor) {
    if (valor == "") {
        throw invalid_argument("argumento inválido");
    };
};

void Data::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Senha::validar(string valor) {
    if (valor.size() != 6) {
        throw invalid_argument("Senha não contém 6 caracteres");
    };

    for (int i = 0; i < 6; i++) {
        char caractere = valor[i];

        if (!((caractere >= 'a' & caractere <= 'z') |
              (caractere >= 'A' & caractere <= 'Z') |
              (caractere >= '0' & caractere <= '9') |
              caractere == '@' |
              caractere == '#' |
              caractere == '$' |
              caractere == '%' |
              caractere == '&')) {
            throw invalid_argument("Senha possui caractere inválido");
        };

        for (int j = i + 1; j < 6; j++) {
            if (caractere == valor[j]) {
                throw invalid_argument("Senha possui caracteres repetidos");
            };
        };
    };
};

void Senha::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};
