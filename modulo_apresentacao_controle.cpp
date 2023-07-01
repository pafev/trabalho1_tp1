#include <iostream>

#include "modulo_apresentacao_controle.hpp"

using namespace std;

void CntrAControle::executar() {
    while(true){
        system("clear || cls"); //limpa terminal

        cout << "Sistema de suporte ao gerenciamento de Testes" << endl;
        cout << "Selecione uma das seguintes opções:" << endl;
        cout << "1 - Autenticar" << endl;
        cout << "2 - Cadastrar desenvolvedor" << endl;
        cout << "3 - Fechar programa" << endl;

        char opcao;
        cin >> opcao;
        switch(opcao) {
            case '1': 
                if(cntrAAutenticacao->autenticar(&matricula)) {
                   this->executar(&matricula);
                };
                break;
            case '2':
                cntrADesenvolvedor->cadastrar();
                break;
            case '3':
                return;
            default:
                system("clear || cls");
                cout << "Opção Inválida" << endl;
                cout << "Pressione Enter para continuar" << endl;
                cin.get();
                cin.ignore();
                break;
        }

    }
}

void CntrAControle::executar(Matricula *matricula) {
    while(matricula->getValor() != ""){
        system("clear || cls");

        cout << "Sistema de suporte ao Gerenciamento de Testes" << endl;
        cout << "Desenvolvedor: " << matricula->getValor() << endl;
        cout << "Selecione uma das seguintes opções:" << endl;
        cout << "1 - Subsistema de Desenvolvedor" << endl;
        cout << "2 - Subsistema de Gerenciamento de Testes" << endl;
        cout << "3 - Sair" << endl;

        char a;
        cin >> a;
        switch(a) {
            case '1':
                cntrADesenvolvedor->executar(matricula);
                break;
            case '2':
                cntrATeste->executar(matricula);
                break;
            case '3':
                return;
            default:
                system("cls || clear");
                cout << "Opção Inválida" << endl;
                cout << "Pressione Enter para continuar" << endl;
                cin.get();
                cin.ignore();
                break;
        }
    }
}