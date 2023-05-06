#include "dominios.hpp"

#include <iostream>
using namespace std;

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
    if ((valor.size() != 11) ||
        (valor[2] != '/' | valor[6] != '/')) {
        throw invalid_argument("Formato inválido");
    }
    else {
        int dia = stoi(valor.substr(0,2));
        string mes = valor.substr(3,3);
        int ano = stoi(valor.substr(7,4));

        if (dia < 1 || dia > 31) {
            throw invalid_argument("Dia inválido");
        }
        else if (mes != "JAN" & mes != "FEV" & mes != "MAR" &
                 mes != "ABR" & mes != "MAI" & mes != "JUN" &
                 mes != "JUL" & mes != "AGO" & mes != "SET" &
                 mes != "OUT" & mes != "NOV" & mes != "DEZ") {
            throw invalid_argument("Mês inválido");
        }
        else if (ano < 2000 || ano > 2999) {
            throw invalid_argument("Ano inválido");
        }
        else if (mes == "FEV" && ano % 4 != 0 && dia > 28) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == "FEV" && dia > 29) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == "ABR" && dia > 30) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == "JUN" && dia > 30) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == "SET" && dia > 30) {
            throw invalid_argument("Data não existe");
        }
        else if (mes == "NOV" && dia > 30) {
            throw invalid_argument("Data não existe");
        };
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

void Classe::validar(string valor) {
    if (valor != "UNIDADE" && valor != "INTEGRACAO" &&
        valor != "FUMACA" && valor != "SISTEMA" &&
        valor != "REGRESSAO" && valor != "ACEITACAO") {
        throw invalid_argument("Formato inválido");
        };
};

void Classe::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Telefone::validar(string valor) {
    if ( valor.size() < 7 || valor.size() > 15) {
        throw invalid_argument("Tamanho inválido");
    };
    
    for (int i = 0; i < valor.size(); i++) {
        char caractere = valor[i];

        if (!(caractere >= '0' & caractere <= '9')) {
            throw invalid_argument("Telefone possui caractere inválido");
        };
    };
};

void Telefone::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Codigo::validar(string valor) {
    if ( valor.size() != 6) {
        throw invalid_argument("Tamanho inválido");
    };
    
    for (int i = 0; i < 6; i++) {
        char caractere = valor[i];

        if (i < 3) {
            if(!((caractere >= 'a' & caractere <= 'z') |
              (caractere >= 'A' & caractere <= 'Z'))) {
                throw invalid_argument("Codigo possui caractere inválido");
            };
        }
        else {
            if (!(caractere >= '0' & caractere <= '9')) {
                throw invalid_argument("Telefone possui caractere inválido");
            };
        };
    };
};

void Codigo::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};