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

void Data::validar(string valor) {          /*matricula aluno: 211043351*/
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

void Senha::validar(string valor) {         /*matricula aluno: 211043351*/
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

void Classe::validar(string valor) {        /*matricula aluna: 211038253*/
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

void Telefone::validar(string valor) {          /*matricula aluna: 211038253*/
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

void Codigo::validar(string valor) {        /*matricula aluna: 211038253*/
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

void Matricula::validar(string valor) {         /*matricula aluna: 221030830*/
    if ((valor.size() != 7) ||
        (valor.find_first_not_of("0123456789") != string::npos)) {
        throw invalid_argument("Formato inválido");
    }

    int aux_digito_verificador = 0;

    for (int i = 0; i < 6; i++) {
        char caractere = valor[i];
        if (i % 2 == 0 || i == 0){
            aux_digito_verificador += caractere;
        };
        if (i % 2 != 0){
            aux_digito_verificador += 2 * caractere;
        };
    };
    
    int digito_verificador;

    int divisao_modulo10 = aux_digito_verificador / 10;
    if (divisao_modulo10 != 0){
        digito_verificador = 10 - (aux_digito_verificador % 10);
    } else {
        digito_verificador = 0;
    };
    
     if (digito_verificador != valor[6]) {
        throw invalid_argument("Matrícula inválida");
    };
};

void Matricula::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Resultado::validar(string valor) {         /*matricula aluna: 221030830*/
    if ((valor != "APROVADO") && 
        (valor != "REPROVADO")) {
        throw invalid_argument("Formato inválido");
    };
};

void Resultado::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};

void Texto::validar(string valor) {         /*matricula aluna: 221030830*/
    if (valor.size() < 10) {
        throw invalid_argument("Caracteres insuficientes (mínimo: 10)");
    };
    if (valor.size() > 20) {
        throw invalid_argument("Caracteres excessivos (máximo: 20)");
    };

    for (int i = 0; i < valor.size(); i++) {
        char caractere = valor[i];

        if (!((caractere >= 'a' & caractere <= 'z') |
              (caractere >= 'A' & caractere <= 'Z') |
              (caractere >= '0' & caractere <= '9') |
              caractere == '@' |
              caractere == '#' |
              caractere == '$' |
              caractere == '%' |
              caractere == '&' | 
              caractere == ' ')) {
            throw invalid_argument("Texto possui caractere inválido");
        };

        if (valor[i] == ' ' & valor[i-1] == ' '){
            throw invalid_argument("Texto possui caractere inválido");
        };
    };
};

void Texto::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};