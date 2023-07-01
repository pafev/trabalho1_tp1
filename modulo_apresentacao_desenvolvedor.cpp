#include "modulo_apresentacao_desenvolvedor.hpp"

#include <iostream>
using namespace std;

void CntrADesenvolvedor::executar(Matricula* matricula){
    string nomeStr, senhaStr, telefoneStr;
    Senha senhaObj;
    Texto nomeObj;
    Telefone telefoneObj;
    Desenvolvedor desenvolvedorObj;
    
    while(true) {
        system("clear || cls");
        cout << "Desenvolvedor: " << matricula->getValor() << endl;
        cout << "1 - Visualizar" << endl;
        cout << "2 - Editar" << endl;
        cout << "3 - Descadastrar conta" << endl;
        cout << "4 - Sair" << endl;

        char entrada;
        char opcaoDesenvolvedor;
        cin >> opcaoDesenvolvedor;
        switch (opcaoDesenvolvedor) {
        case '2':
            while(true) {
                system("clear || cls");
                cout << "O que você deseja editar?" << endl;
                cout << "1 - Nome" << endl;
                cout << "2 - Senha" << endl;
                cout << "3 - Telefone" << endl;
                cout << "4 - Sair" << endl;

                char opcaoEditar;
                cin >> opcaoEditar;
                switch (opcaoEditar) {
                case '1':
                    cout << endl << "Digite o novo nome: ";
                    cin >> nomeStr;

                    try {
                        nomeObj.setValor(nomeStr);
                        desenvolvedorObj.setMatricula(*matricula);
                        desenvolvedorObj.setNome(nomeObj);
                    }
                    catch (const invalid_argument &exp) {
                        cout << endl << "Dado em formato incorreto." << endl;
                        cout << "Pressione qualquer tecla para continuar" << endl;
                        char entrada;
                        cin >> entrada;
                        break;
                    }

                    if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                        cout << "Nome alterado com sucesso" << endl;
                    } else {
                        cout << "Erro ao alterar nome" << endl;
                    }
                    break;
                case '2':
                    cout << endl << "Digite a nova senha: ";
                    cin >> senhaStr;

                    try {
                        senhaObj.setValor(senhaStr);
                    }
                    catch (const invalid_argument &exp) {
                        cout << endl << "Dado em formato incorreto." << endl;
                        break;
                    }

                    desenvolvedorObj.setMatricula(*matricula);
                    desenvolvedorObj.setSenha(senhaObj);
                    if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                        cout << "Senha alterada com sucesso" << endl;
                    } else {
                        cout << "Erro ao alterar senha" << endl;
                    }
                    break;
                case '3':
                    cout << endl << "Digite o novo telefone: ";
                    cin >> telefoneStr;

                    try {
                        telefoneObj.setValor(telefoneStr);
                    }
                    catch (const invalid_argument &exp) {
                        cout << endl << "Dado em formato incorreto." << endl;
                        break;
                    }

                    desenvolvedorObj.setMatricula(*matricula);
                    desenvolvedorObj.setTelefone(telefoneObj);
                    if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                        cout << "Telefone alterado com sucesso" << endl;
                    } else {
                        cout << "Erro ao alterar telefone" << endl;
                    }
                    break;
                case '4':
                    return;
                default:
                    cout << endl << "Opção inválida." << endl;
                    break;
                }
                cout << "Pressione qualquer tecla para continuar" << endl;
                cin >> entrada;
            }
            break;
        case '3':
            system("clear || cls");
            cout << "Tem certeza que deseja descadastrar o desenvolvedor? (s/n)" << endl;
            char confirmacao;
            cin >> confirmacao;

            if(confirmacao == 's' || confirmacao == 'S') {
                if(cntrSDesenvolvedor->descadastrar(*matricula)) {
                    cout << endl << "Desenvolvedor descadastrado com sucesso" << endl;
                    matricula->setValor("");
                    cin;
                    return;
                } else {
                    cout << endl << "Erro ao descadastrar desenvolvedor" << endl;
                }
            }
            cout << "Digite qualquer texto para continuar" << endl;
            cin >> entrada;
            break;
        case '4':
            return;
        default:
            cout << "Opção inválida." << endl;
            cout << "Digite qualquer texto para continuar" << endl;
            cin >> entrada;
            break;
        }
    }
}

void CntrADesenvolvedor::cadastrar() {
    string matriculaStr, senhaStr;
    Matricula matriculaObj;
    Senha senhaObj;
    Desenvolvedor desenvolvedorObj;

    while(true) { 
        system("clear || cls");
        cout << "Cadastro de Desenvolvedor" << endl;
        cout << "Digite sua matrícula: " << endl;
        cin >> matriculaStr;
        cout << "Digite sua senha " << endl;
        cin >> senhaStr;

        try {
            matriculaObj.setValor(matriculaStr);
            senhaObj.setValor(senhaStr);
            desenvolvedorObj.setMatricula(matriculaObj);
            desenvolvedorObj.setSenha(senhaObj);
    
            if(cntrSDesenvolvedor->cadastrar(desenvolvedorObj)){
                cout << endl << "Desenvolvedor cadastrado com sucesso" << endl;
                cout << "Pressione qualquer tecla para continuar" << endl;
                char entrada;
                cin >> entrada;
                return;
            } else {
                cout << endl << "Erro ao cadastrar desenvolvedor" << endl;
                cout << "Pressione qualquer tecla para continuar ou 1 para sair" << endl;
                char entrada;
                cin >> entrada;
                if (entrada != '1') return;
            }
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
            cout << "Pressione qualquer tecla para continuar" << endl;
            char entrada;
            cin >> entrada;
        }

    }
}