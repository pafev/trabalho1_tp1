#include "stubs_sevicos.hpp"

#include <string>

bool StubSAutenticacao::autenticar(Matricula matricula, Senha senha) {
    if(matricula.getValor() == "2615334" && senha.getValor() == "123@ab") {
        return true;
    }
    return false;
}
