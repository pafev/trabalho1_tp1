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
        cout << "Desenvolvedor: " << matricula->getValor() << endl;
        cout << "1 - Visualizar" << endl;
        cout << "2 - Editar" << endl;
        cout << "3 - Descadastrar conta" << endl;
        cout << "4 - Sair" << endl;

        char entrada;
        cin >> entrada;
        switch (entrada)
        {
        case '2':
            cout << "O que você deseja editar?" << endl;
            cout << "1 - Nome" << endl;
            cout << "2 - Senha" << endl;
            cout << "3 - Telefone" << endl;

            char entrada;
            cin >> entrada;
            switch (entrada)
            {
            case '1':
                cout << "Digite o novo nome: " << endl;
                cin >> nomeStr;

                try {
                    nomeObj.setValor(nomeStr);
                }
                catch (const invalid_argument &exp) {
                    cout << endl << "Dado em formato incorreto." << endl;
                    break;
                }

                desenvolvedorObj.setMatricula(*matricula);
                desenvolvedorObj.setNome(nomeObj);
                if (cntrSDesenvolvedor->editar(desenvolvedorObj)){
                    cout << "Nome alterado com sucesso" << endl;
                } else {
                    cout << "Erro ao alterar nome" << endl;
                }
                break;
            case '2':
                cout << "Digite a nova senha: " << endl;
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
                cout << "Digite o novo telefone: " << endl;
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
            default:
                cout << "Opção inválida." << endl;
                cin;
                break;
            }
            break;
        case '3':
            cout << "Tem certeza que deseja descadastrar o desenvolvedor? (s/n)" << endl;
            char confirmacao;
            cin >> confirmacao;

            if(confirmacao == 's' || confirmacao == 'S') {
                if(cntrSDesenvolvedor->descadastrar(*matricula)) {
                    cout << "Desenvolvedor descadastrado com sucesso" << endl;
                    matricula->setValor("");
                    cin;
                    return;
                } else {
                    cout << "Erro ao descadastrar desenvolvedor" << endl;
                    cin;
                }
            }
            break;
        case '4':
            return;
        default:
            cout << "Opção inválida." << endl;
            cin;
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
        cout << "Cadastro de Desenvolvedor" << endl;
        cout << "Digite sua matrícula: " << endl;
        cin >> matriculaStr;
        cout << "Digite sua senha " << endl;
        cin >> senhaStr;

        try {
            matriculaObj.setValor(matriculaStr);
            senhaObj.setValor(senhaStr);
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
        }

        desenvolvedorObj.setMatricula(matriculaObj);
        desenvolvedorObj.setSenha(senhaObj);
        if(cntrSDesenvolvedor->cadastrar(desenvolvedorObj)){
            cout << "Desenvolvedor cadastrado com sucesso" << endl;
            cin;
            return;
        } else {
            cout << "Erro ao cadastrar desenvolvedor" << endl;
            cout << "Pressione qualquer tecla para continuar ou 1 para sair" << endl;
            char entrada;
            cin >> entrada;
            if (entrada == '1') return;
        }
    }
}