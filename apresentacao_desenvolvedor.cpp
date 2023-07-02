#include "apresentacao_desenvolvedor.hpp"

#include <iostream>
using namespace std;

void CntrADesenvolvedor::executar(Matricula *matricula){
    string nomeStr, senhaStr, telefoneStr;
    Senha senhaObj;
    Texto nomeObj;
    Telefone telefoneObj;
    Desenvolvedor desenvolvedorObj;
    
    while(true) {
        system("clear || cls");
        cout << "Desenvolvedor: " << matricula->getValor() << endl;
        cout << "1 - Visualizar conta" << endl;
        cout << "2 - Editar conta" << endl;
        cout << "3 - Descadastrar conta" << endl;
        cout << "4 - Sair" << endl;

        char opcaoDesenvolvedor;
        cin >> opcaoDesenvolvedor;
        switch (opcaoDesenvolvedor) {
        case '1':
            system("cls || clear");
            desenvolvedorObj.setMatricula(*matricula);
            if(cntrSDesenvolvedor->visualizar(*matricula, &desenvolvedorObj)) {
                cout << "Nome: " << desenvolvedorObj.getNome().getValor() << endl;
                cout << "Telefone: " << desenvolvedorObj.getTelefone().getValor() << endl;
            } else {
                cout << "Não foi possível visualizar teste" << endl;
            }
            cout << endl << "Pressione Enter para continuar" << endl;
            cin.get();
            cin.ignore();
            break;
        case '2':
            char opcaoEditar;
            while (opcaoEditar != '4') {
                system("cls || clear");
                cout << "O que você deseja editar?" << endl;
                cout << "1 - Nome" << endl;
                cout << "2 - Senha" << endl;
                cout << "3 - Telefone" << endl;
                cout << "4 - Sair" << endl;

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
                    catch (const invalid_argument &e) {
                        system("cls || clear");
                        cout << e.what() << endl;
                        cout << endl << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                        break;
                    }

                    if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                        system("cls || clear");
                        cout << "Nome alterado com sucesso" << endl;
                        cout << endl << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                        break;
                    } else {
                        system("cls || clear");
                        cout << "Erro ao alterar nome" << endl;
                        cout << endl << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                        break;
                    }
                case '2':
                    cout << endl << "Digite a nova senha: ";
                    cin >> senhaStr;

                    try {
                        senhaObj.setValor(senhaStr);
                        desenvolvedorObj.setMatricula(*matricula);
                        desenvolvedorObj.setSenha(senhaObj);
                    }
                    catch (const invalid_argument &e) {
                        system("cls || clear");
                        cout << e.what() << endl;
                        cout << endl << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                        break;
                    }

                    if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                        system("cls || clear");
                        cout << "Senha alterada com sucesso" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                    } else {
                        system("cls || clear");
                        cout << "Erro ao alterar senha" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                    }
                    break;
                case '3':
                    cout << endl << "Digite o novo telefone: ";
                    cin >> telefoneStr;

                    try {
                        telefoneObj.setValor(telefoneStr);
                        desenvolvedorObj.setMatricula(*matricula);
                        desenvolvedorObj.setTelefone(telefoneObj);
                    }
                    catch (const invalid_argument &e) {
                        system("cls || clear");
                        cout << e.what() << endl;
                        cout << endl << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                        break;
                    }

                    if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                        system("cls || clear");
                        cout << "Telefone alterado com sucesso" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                    } else {
                        system("cls || clear");
                        cout << "Erro ao alterar telefone" << endl;
                        cout << "Pressione Enter para continuar" << endl;
                        cin.get();
                        cin.ignore();
                    }
                    break;
                case '4':
                    break;;
                default:
                    system("cls || clear");
                    cout << endl << "Opção inválida." << endl;
                    cout << endl << "Pressione Enter para continuar" << endl;
                    cin.get();
                    cin.ignore();
                    break;
                }
            }
            break;
        case '3':
            system("cls || clear");
            cout << "Tem certeza que deseja descadastrar o desenvolvedor? (s/n)" << endl;
            char confirmacao;
            cin >> confirmacao;

            if(confirmacao == 's' || confirmacao == 'S') {
                if(cntrSDesenvolvedor->descadastrar(*matricula)) {
                    *matricula = *new Matricula();
                    system("cls || clear");
                    cout << "Desenvolvedor descadastrado com sucesso" << endl;
                    cout << endl << "Pressione Enter para continuar" << endl;
                    cin.get();
                    cin.ignore();
                    return;
                } else {
                    system("cls || clear");
                    cout << "Erro ao descadastrar desenvolvedor" << endl;
                    cout << endl << "Pressione Enter para continuar" << endl;
                    cin.get();
                    cin.ignore();
                }
            }
            break;
        case '4':
            return;
        default:
            system("cls || clear");
            cout << "Opção inválida." << endl;
            cout << endl << "Pressione Enter para continuar" << endl;
            cin.get();
            cin.ignore();
            break;
        }
    }
}

void CntrADesenvolvedor::executar() {
    string matriculaStr, senhaStr, nomeStr, telefoneStr;
    Matricula matriculaObj;
    Senha senhaObj;
    Texto nomeObj;
    Telefone telefoneObj;
    Desenvolvedor desenvolvedorObj;

    while(true) { 
        system("clear || cls");
        cout << "Cadastro de Desenvolvedor" << endl;
        cout << "Digite uma matrícula: ";
        cin >> matriculaStr;
        cout << "Digite uma senha: ";
        cin >> senhaStr;
        cout << "Digite um nome: ";
        cin >> nomeStr;
        cout << "Digite seu telefone: ";
        cin >> telefoneStr;

        try {
            matriculaObj.setValor(matriculaStr);
            senhaObj.setValor(senhaStr);
            nomeObj.setValor(nomeStr);
            telefoneObj.setValor(telefoneStr);
            desenvolvedorObj.setMatricula(matriculaObj);
            desenvolvedorObj.setSenha(senhaObj);
            desenvolvedorObj.setNome(nomeObj);
            desenvolvedorObj.setTelefone(telefoneObj);
        }
        catch (const invalid_argument &e) {
            system("cls || clear");
            cout << e.what() << endl;
            cout << endl << "Pressione Enter para retornar" << endl;
            cin.get();
            cin.ignore();
            return;
        }

        system("cls || clear");
        if(cntrSDesenvolvedor->cadastrar(desenvolvedorObj)){
            cout << "Desenvolvedor cadastrado com sucesso" << endl;
        } else {
            cout << "Erro ao cadastrar desenvolvedor" << endl;
        }
        cout << endl << "Pressione Enter para retornar" << endl;
        cin.get();
        cin.ignore();
        return;

    }
}