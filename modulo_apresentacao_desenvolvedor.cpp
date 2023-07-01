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
            while (true) {
                system("cls || clear");
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
                        system("cls || clear");
                        cout << "Dado em formato incorreto." << endl;
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
                    catch (const invalid_argument &exp) {
                        system("cls || clear");
                        cout << endl << "Dado em formato incorreto." << endl;
                        cout << "Pressione Enter para continuar" << endl;
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
                    catch (const invalid_argument &exp) {
                        system("cls || clear");
                        cout << endl << "Dado em formato incorreto." << endl;
                        cout << "Pressione Enter para continuar" << endl;
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
                    return;
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
                    system("cls || clear");
                    cout << "Desenvolvedor descadastrado com sucesso" << endl;
                    matricula = new Matricula();
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