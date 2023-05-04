#include "dominios.hpp"

void Data::validar(string valor) {
    if (valor == "") {
        throw invalid_argument("argumento inválido");
    };
};

void Data::setValor(string valor) {
    validar(valor);
    this->valor = valor;
};
