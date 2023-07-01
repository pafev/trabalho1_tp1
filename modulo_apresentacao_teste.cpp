#include "modulo_apresentacao_teste.hpp"

#include <iostream>
#include <string>

using namespace std;

void CntrATeste::executar(Matricula *matricula) {
    while(true) {
        char opcao;

        system("clear || cls");
        cout << "Sistema de Testes" << endl;
        cout << "Desenvolvedor: " << matricula->getValor() << endl;
        cout << "Selecione a opção que deseja" << endl;
        cout << "1 - Gerenciar Testes" << endl;
        cout << "2 - Gerenciar Casos de Teste" << endl;
        cout << "3 - Sair" << endl;
        cin >> opcao;

        string codigoTesteStr;
        Codigo codigoTesteObj;
        switch (opcao) {
            case '1':
                while(true) {
                    int opcaoTeste;

                    system("clear || cls");
                    cout << "Gerenciamento de Testes" << endl;
                    cout << "Selecione a opção que deseja" << endl;
                    cout << "1 - Visualizar Testes" << endl;
                    cout << "2 - Visualizar Teste" << endl;
                    cout << "3 - Cadastrar Teste" << endl;
                    cout << "4 - Editar Teste" << endl;
                    cout << "5 - Descadastrar Teste" << endl;
                    cout << "6 - Sair" << endl;
                    cin >> opcaoTeste;

                    string nomeStr, codigoStr, classeStr;
                    Codigo codigoObj;
                    Texto nomeObj;
                    Classe classeObj;
                    Teste testeObj;
                    switch(opcaoTeste) {
                        case 1:
                            system("cls || clear");
                            if(cntrSTeste->visualizarTestes(*matricula, &testes)) {
                                cout << endl << "Aqui se visualiza testes";
                            } else {
                                cout << "Não foi possível visualizar testes" << endl;
                            }
                            cout << endl << "Pressione Enter para continuar" << endl;
                            cin.get();
                            cin.ignore();
                            break;
                        case 2:
                            system("cls || clear");
                            cout << "Digite o código do Teste: ";
                            cin >> codigoStr;
                            codigoObj.setValor(codigoStr);
                            if(cntrSTeste->visualizarTeste(codigoObj, &teste)) {
                                system("cls || clear");
                                cout << "Teste de código " << teste.getCodigo().getValor() << endl;
                                cout << "Nome: " << teste.getNome().getValor() << endl;
                                cout << "Classe: " << teste.getClasse().getValor() << endl;
                            } else {
                                cout << "Não foi possível visualizar teste" << endl;
                            }
                            cout << endl << "Pressione Enter para continuar" << endl;
                            cin.get();
                            cin.ignore();
                            break;
                        case 3:
                            system("cls || clear");
                            cout << "Digite o nome do Teste: ";
                            cin >> nomeStr;
                            cout << "Digite o código do Teste: ";
                            cin >> codigoStr;
                            cout << "Digite a classe do Teste: ";
                            cin >> classeStr;

                            try {
                                nomeObj.setValor(nomeStr);
                                testeObj.setNome(nomeObj);
                                codigoObj.setValor(codigoStr);
                                testeObj.setCodigo(codigoObj);
                                classeObj.setValor(classeStr);
                                testeObj.setClasse(classeObj);
                            } catch(const invalid_argument& e) {
                                system("cls || clear");
                                cout << "Dado em formato incorreto." << endl;
                                cout << endl << "Pressione Enter para continuar" << endl;
                                cin.get();
                                cin.ignore();
                                break;
                            };

                            if(cntrSTeste->cadastrarTeste(testeObj, *matricula)) {
                                system("cls || clear");
                                cout << "Teste cadastrado com sucesso" << endl;
                                cout << endl << "Pressione Enter para continuar" << endl;
                                cin.get();
                                cin.ignore();
                            } else {
                                system("cls || clear");
                                cout << "Não foi possível cadastrar teste" << endl;
                                cout << endl << "Pressione Enter para continuar" << endl;
                                cin.get();
                                cin.ignore();
                            }
                            break;
                        case 4:
                            system("cls || clear");
                            cout << "Digite o código do teste: ";
                            cin >> codigoStr;

                            try {
                                codigoObj.setValor(codigoStr);
                                testeObj.setCodigo(codigoObj);
                            } catch(const invalid_argument& e) {
                                system("cls || clear");
                                cout << "Dado em formato incorreto." << endl;
                                cout << endl << "Pressione Enter para continuar" << endl;
                                cin.get();
                                cin.ignore();
                                break;
                            };

                            int opcaoEditaTeste;
                            system("cls || clear");
                            cout << "O que deseja editar?" << endl;
                            cout << "1 - Editar nome" << endl;
                            cout << "2 - Editar classe" << endl;
                            cout << "3 - Sair" << endl;
                            cin >> opcaoEditaTeste;

                            switch(opcaoEditaTeste) {
                                case 1:
                                    cout << endl << "Digite o novo nome: ";
                                    cin >> nomeStr;
                                    try {
                                        nomeObj.setValor(nomeStr);
                                        testeObj.setNome(nomeObj);
                                    } catch(const invalid_argument& e) {
                                        system("cls || clear");
                                        cout << "Dado em formato incorreto." << endl;
                                        cout << endl << "Pressione Enter para continuar" << endl;
                                        cin.get();
                                        cin.ignore();
                                        break;
                                    };

                                    if(cntrSTeste->editarTeste(testeObj)) {
                                        system("cls || clear");
                                        cout << "Nome alterado com sucesso" << endl;
                                        cout << endl << "Pressione Enter para continuar" << endl;
                                        cin.get();
                                        cin.ignore();
                                    } else {
                                        system("cls || clear");
                                        cout << "Erro ao alterar nome" << endl;
                                        cout << endl << "Pressione Enter para continuar" << endl;
                                        cin.get();
                                        cin.ignore();
                                    };
                                    break;
                                case 2:
                                    cout << endl << "Digite a nova classe: ";
                                    cin >> classeStr;
                                    try {
                                        classeObj.setValor(classeStr);
                                        testeObj.setClasse(classeObj);
                                    } catch(const invalid_argument& e) {
                                        system("cls || clear");
                                        cout << endl << "Dado em formato incorreto." << endl;
                                        cout << "Pressione Enter para continuar" << endl;
                                        cin.get();
                                        cin.ignore();
                                        break;
                                    };

                                    if(cntrSTeste->editarTeste(testeObj)) {
                                        system("cls || clear");
                                        cout << "Classe alterada com sucesso" << endl;
                                        cout << "Pressione Enter para continuar" << endl;
                                        cin.get();
                                        cin.ignore();
                                    } else {
                                        system("cls || clear");
                                        cout << "Erro ao alterar classe" << endl;
                                        cout << "Pressione Enter para continuar" << endl;
                                        cin.get();
                                        cin.ignore();
                                    };
                                    break;
                                case 3:
                                    break;
                                default:
                                    cout << "Opção inválida" << endl;
                                    cin;
                                    break;
                            }

                        case 5:
                            cout << "Digite o código do teste: ";
                            cin >> codigoStr;

                            try {
                                codigoObj.setValor(codigoStr);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            if(cntrSTeste->descadastrarTeste(codigoObj)) {
                                cout << "Teste descadastrado com sucesso" << endl;
                                cin;
                            } else {
                                cout << "Não foi possível descadastrar teste" << endl;
                                cin;
                            }
                        case 6:
                            return;
                        default:
                            cout << "Opção inválida" << endl;
                            cin;
                            break;   
                    }
                };
                break;
            case '2':
                cout << "Digite código do teste do qual deseja gerenciar casos de teste" << endl;
                cin >> codigoTesteStr;

                try {
                    codigoTesteObj.setValor(codigoTesteStr);
                } catch(const invalid_argument& e) {
                    cout << e.what() << endl;
                    cin;
                    break;
                };

                while(true) {
                    int opcaoCasoDeTeste;

                    system("clear || cls");
                    cout << "Gerenciamento de Casos de Teste" << endl;
                    cout << "Selecione a opção que deseja" << endl;
                    cout << "1 - Visualizar Casos de Testes" << endl;
                    cout << "2 - Visualizar Caso de Teste" << endl;
                    cout << "3 - Cadastrar Caso de Teste" << endl;
                    cout << "4 - Editar Caso de Teste" << endl;
                    cout << "5 - Descadastrar Caso de Teste" << endl;
                    cout << "6 - Sair" << endl;
                    cin >> opcaoCasoDeTeste;

                    string codigoStr, nomeStr, dataStr, acaoStr, respostaStr, resultadoStr;
                    Codigo codigoObj;
                    Texto nomeObj;
                    Data dataObj;
                    Texto acaoObj;
                    Texto respostaObj;
                    Resultado resultadoObj;
                    CasoDeTeste casoDeTesteObj;

                    switch(opcaoCasoDeTeste) {
                        case 1:
                            if(cntrSTeste->visualizarCasosDeTeste(codigoTesteObj, &casosDeTeste)) {
                                cout << "Aqui se visualiza casos de teste" << endl;
                                cin;
                            } else {
                                cout << "Não foi possível visualizar casos de teste" << endl;
                                cin;
                            }
                            break;
                        case 2:
                            cout << "Digite o código do Caso de Teste: ";
                            cin >> codigoStr;
                            codigoObj.setValor(codigoStr);
                            if(cntrSTeste->visualizarCasoDeTeste(codigoObj, &casoDeTeste)) {
                                cout << endl << "Caso de teste de código " << casoDeTeste.getCodigo().getValor() << endl;
                                cout << "Nome: " << casoDeTeste.getNome().getValor() << endl;
                                cout << "Data: " << casoDeTeste.getData().getValor() << endl;
                                cout << "Acao: " << casoDeTeste.getAcao().getValor() << endl;
                                cout << "Resposta: " << casoDeTeste.getResposta().getValor() << endl;
                                cout << "Resultado: " << casoDeTeste.getResultado().getValor() << endl;
                                cin;
                            } else {
                                cout << "Não foi possível visualizar caso de teste" << endl;
                                cin;
                            }
                        case 3:
                            cout << "Digite o nome do Caso de Teste: ";
                            cin >> nomeStr;

                            try {
                                nomeObj.setValor(nomeStr);
                                casoDeTesteObj.setNome(nomeObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            cout << "Digite o código do Caso de Teste: ";
                            cin >> codigoStr;

                            try {
                                codigoObj.setValor(codigoStr);
                                casoDeTesteObj.setCodigo(codigoObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            cout << "Digite a data do Caso de Teste: ";
                            cin >> dataStr;
                            
                            try {
                                dataObj.setValor(dataStr);
                                casoDeTesteObj.setData(dataObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            cout << "Digite a acao do Caso de Teste: ";
                            cin >> acaoStr;
                            
                            try {
                                acaoObj.setValor(acaoStr);
                                casoDeTesteObj.setAcao(acaoObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            cout << "Digite a resposta do Caso de Teste: ";
                            cin >> respostaStr;
                            
                            try {
                                respostaObj.setValor(respostaStr);
                                casoDeTesteObj.setResposta(respostaObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            cout << "Digite o resultado do Caso de Teste: ";
                            cin >> resultadoStr;
                            
                            try {
                                resultadoObj.setValor(resultadoStr);
                                casoDeTesteObj.setResultado(resultadoObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            if(cntrSTeste->cadastrarCasoDeTeste(casoDeTesteObj, codigoTesteObj)) {
                                cout << "Caso de teste cadastrado com sucesso" << endl;
                                cin;
                            } else {
                                cout << "Não foi possível cadastrar caso de teste" << endl;
                                cin;
                            }
                        case 4:
                            cout << "Digite o código do caso de teste: ";
                            cin >> codigoStr;

                            try {
                                codigoObj.setValor(codigoStr);
                                casoDeTesteObj.setCodigo(codigoObj);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            int opcaoEditaTeste;
                            cout << "O que deseja editar?" << endl;
                            cout << "1 - Editar nome" << endl;
                            cout << "2 - Editar data" << endl;
                            cout << "3 - Editar acao" << endl;
                            cout << "5 - Editar resposta" << endl;
                            cout << "5 - Editar resultado" << endl;
                            cout << "6 - Sair" << endl;
                            cin >> opcaoEditaTeste;

                            switch(opcaoEditaTeste) {
                                case 1:
                                    cout << "Digite o novo nome: ";
                                    cin >> nomeStr;
                                    try {
                                        nomeObj.setValor(nomeStr);
                                        casoDeTesteObj.setNome(nomeObj);
                                    } catch(const invalid_argument& e) {
                                        cout << e.what() << endl;
                                        cin;
                                        break;
                                    };

                                    if(cntrSTeste->editarCasoDeTeste(casoDeTesteObj)) {
                                        cout << "Caso de teste editado com sucesso" << endl;
                                        cin;
                                    } else {
                                        cout << "Não foi possível editar caso de teste" << endl;
                                        cin;
                                    };

                                    break;
                                case 2:
                                    cout << "Digite a nova data: ";
                                    cin >> dataStr;
                                    try {
                                        dataObj.setValor(dataStr);
                                        casoDeTesteObj.setData(dataObj);
                                    } catch(const invalid_argument& e) {
                                        cout << e.what() << endl;
                                        cin;
                                        break;
                                    };

                                    if(cntrSTeste->editarCasoDeTeste(casoDeTesteObj)) {
                                        cout << "Caso de teste editado com sucesso" << endl;
                                        cin;
                                    } else {
                                        cout << "Não foi possível editar caso de teste" << endl;
                                        cin;
                                    };

                                    break;
                                case 3:
                                    cout << "Digite a nova acao: ";
                                    cin >> acaoStr;
                                    try {
                                        acaoObj.setValor(acaoStr);
                                        casoDeTesteObj.setAcao(acaoObj);
                                    } catch(const invalid_argument& e) {
                                        cout << e.what() << endl;
                                        cin;
                                        break;
                                    };

                                    if(cntrSTeste->editarCasoDeTeste(casoDeTesteObj)) {
                                        cout << "Caso de teste editado com sucesso" << endl;
                                        cin;
                                    } else {
                                        cout << "Não foi possível editar caso de teste" << endl;
                                        cin;
                                    };
                                    break;
                                case 4:
                                    cout << "Digite a nova resposta: ";
                                    cin >> respostaStr;
                                    try {
                                        respostaObj.setValor(respostaStr);
                                        casoDeTesteObj.setResposta(respostaObj);
                                    } catch(const invalid_argument& e) {
                                        cout << e.what() << endl;
                                        cin;
                                        break;
                                    };

                                    if(cntrSTeste->editarCasoDeTeste(casoDeTesteObj)) {
                                        cout << "Caso de teste editado com sucesso" << endl;
                                        cin;
                                    } else {
                                        cout << "Não foi possível editar caso de teste" << endl;
                                        cin;
                                    };
                                    break;
                                case 5:
                                    cout << "Digite o novo resultado: ";
                                    cin >> resultadoStr;
                                    try {
                                        resultadoObj.setValor(resultadoStr);
                                        casoDeTesteObj.setResultado(resultadoObj);
                                    } catch(const invalid_argument& e) {
                                        cout << e.what() << endl;
                                        cin;
                                        break;
                                    };

                                    if(cntrSTeste->editarCasoDeTeste(casoDeTesteObj)) {
                                        cout << "Caso de teste editado com sucesso" << endl;
                                        cin;
                                    } else {
                                        cout << "Não foi possível editar caso de teste" << endl;
                                        cin;
                                    };
                                    break;
                                case 6:
                                    break;
                                default:
                                    cout << "Opção inválida" << endl;
                                    cin;
                                    break;
                            }

                        case 5:
                            cout << "Digite o código do teste: ";
                            cin >> codigoStr;

                            try {
                                codigoObj.setValor(codigoStr);
                            } catch(const invalid_argument& e) {
                                cout << e.what() << endl;
                                cin;
                                break;
                            };

                            if(cntrSTeste->descadastrarTeste(codigoObj)) {
                                cout << "Teste descadastrado com sucesso" << endl;
                                cin;
                            } else {
                                cout << "Não foi possível descadastrar teste" << endl;
                                cin;
                            }
                        case 6:
                            return;
                        default:
                            cout << "Opção inválida" << endl;
                            cin;
                            break;   
                    }
                };
                break;
            case '3':
                return;
            default:
                cout << "Opção inválida" << endl;
                cin;
                break;
        }

    };
};