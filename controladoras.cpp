#include "controladoras.hpp"

// bool CntrIAAutenticacao::autenticar(Matricula *matricula){

//     bool resultado;
//     Senha senha;
//     string entrada;

//     while(true) {
//         try {
//             cout << "Digite a matrícula : ";
//             cin >> entrada;
//             matricula->setValor(entrada);
//             cout << "Digite a senha     : ";
//             cin >> entrada;
//             senha.setValor(entrada);
//             break;
//         }
//         catch (const invalid_argument &exp) {
//             cout << endl << "Dado em formato incorreto." << endl;
//         }
//     }

//     resultado = cntrISAutenticacao->autenticar(*matricula, senha); 

//     return resultado;                                               
// }