#include "modulo_apresentacao_autenticacao.hpp"

#include <iostream>

using namespace std;

bool CntrAAutenticacao::autenticar(Matricula *matricula) {
    while(true){
        string matriculaStr, senhaStr;
        Matricula matriculaObj;
        Senha senhaObj;

        system("clear || cls");
        cout << "Autenticação de Desenvolvedor" << endl;
        cout << "Digite a matrícula: ";
        cin >> matriculaStr;
        cout << "Digite a senha: ";
        cin >> senhaStr;
        
        try {
            matriculaObj.setValor(matriculaStr);
            senhaObj.setValor(senhaStr);
        } catch (const invalid_argument &e) {
            system("cls || clear");
            cout << e.what() << endl;
            cout << endl << "Pressione Enter para retornar" << endl;
            cin.get();
            cin.ignore();
            return false;
        };

        if(cntrSAutenticacao->autenticar(matriculaObj, senhaObj)){
            matricula->setValor(matriculaStr);
            return true;
        } else {
            system("cls || clear");
            cout << "Não foi possível autenticar" << endl;
            cout << "Pressione Enter para retornar" << endl;
            cin.get();
            cin.ignore();
            return false;
        };
    };
};