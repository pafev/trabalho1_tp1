#include "modulo_apresentacao_autenticacao.hpp"

#include <iostream>

using namespace std;

bool CntrAAutenticacao::autenticar(Matricula *matricula) {
    cout << "ola" << endl;
    Senha senha;
    string matriculaStr, senhaStr;
    bool autenticado = false;

    while(true){
        cout << "Autenticação de Desenvolvedor" << endl;
        cout << "Digite a matrícula: ";
        cin >> matriculaStr;
        cout << "Digite a senha: ";
        cin >> senhaStr;
        
        Matricula matriculaObj;
        Senha senhaObj;
        try {
            matriculaObj.setValor(matriculaStr);
            senhaObj.setValor(senhaStr);
        } catch (const invalid_argument &exp) {
            cout << endl << "Dado em formato incorreto." << endl;
            break;
        };

        autenticado = cntrSAutenticacao->autenticar(matriculaObj, senhaObj); 
        if(autenticado){
         matricula->setValor(matriculaStr);
         return true;
        } else {
         cout << "Email ou senha incorretos" << endl;
         cout << "Pressione qualquer tecla para continuar ou 1 para sair" << endl;
         char entrada;
         cin >> entrada;
         if (entrada == '1') return false;
        };

    };
    return autenticado; 
};