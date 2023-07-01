#include <iostream>

#include "modulo_apresentacao_controle.hpp"

using namespace std;

void CntrAControle::setCntrAAutenticacao
(IAAutenticacao *cntr) {
    cntrAAutenticacao = cntr;
}

void CntrAControle::setCntrADesenvolvedor
(IADesenvolvedor *cntr) {
    cntrADesenvolvedor = cntr;
}

void CntrAControle::setCntrATeste
(IATeste *cntr) {
    cntrATeste = cntr;
}

void CntrAControle::executar() {
    bool autenticado = false;

    while(true){
        system("clear || cls"); //limpa terminal

        cout << "Sistema de suporte ao Gerenciamento de Testes" << endl;
        cout << "Selecione uma das seguintes opções:" << endl;
        cout << "1 - Autenticar" << endl;
        cout << "2 - Cadastrar" << endl;
        cout << "3 - Sair" << endl;

        int a;
        cin >> a;
        switch(a) {
            case 1: 
                autenticado = cntrAAutenticacao->autenticar(&matricula);
                if(autenticado) executarAutenticado();
                break;
            case 2:
                cntrADesenvolvedor->cadastrar();
                break;
            case 3:
                return;
            default:
                cout << "Opção Inválida" << endl;
                cin >> a;
                break;
        }

    }
}

void CntrAControle::executarAutenticado() {

    while(1){
        system("clear || cls");

        cout << "Sistema de suporte ao Gerenciamento de Testes" << endl;
        cout << "Usuário:" << matricula.getValor() << endl;
        cout << "Selecione uma das seguintes opções:" << endl;
        cout << "1 - Serviços de Usuário" << endl;
        cout << "2 - Serviços de Gerenciamento de Testes" << endl;
        cout << "3 - Sair";

        char a;
        cin >> a;
        switch(a) {
            case '1':
                cntrADesenvolvedor->executar(&matricula);
                if (matricula.getValor() == "") return;
                break;
            case '2':
                cntrATeste->executar(&matricula);
                break;
            case '3':
                return;
            default:
                cout << "Opção Inválida" << endl;
                cin >> a;
                break;

        }
    }
}