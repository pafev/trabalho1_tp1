#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"

#include <iostream>
using namespace std;

int main() {
    cout << "---------- Testando Dominios ----------" << endl;

    TesteData testeData;
    cout << "Testando data: " << testeData.run() << endl;

    TesteSenha testeSenha;
    cout << "Testando senha: " << testeSenha.run() << endl;

    TesteClasse testeClasse;
    cout << "Testando classe: " << testeClasse.run() << endl;

    TesteTelefone testeTelefone;
    cout << "Testando telefone: " << testeTelefone.run() << endl;

    TesteCodigo testeCodigo;
    cout << "Testando codigo: " << testeCodigo.run() << endl;

    TesteMatricula testeMatricula;
    cout << "Testando matricula: " << testeMatricula.run() << endl;

    TesteResultado testeResultado;
    cout << "Testando resultado: " << testeResultado.run() << endl;

    TesteTexto testeTexto;
    cout << "Testando texto: " << testeTexto.run() << endl;

    cout << "---------- Testando Entidades ----------" << endl;

    TesteDesenvolvedor testeDesenvolvedor;
    cout << "Testando desenvolvedor: " << testeDesenvolvedor.run() << endl;

    TesteTeste teste;
    cout << "Testando teste: " << teste.run() << endl;

    TesteCasoDeTeste testeCasoDeTeste;
    cout << "Testando caso de teste: " << testeCasoDeTeste.run() << endl;

    return 0;
}
