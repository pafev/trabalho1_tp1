#include "servicos_teste.hpp"

#include <string>

bool StubSTeste::visualizarTeste(const Codigo &codigo, Teste *teste) {
    teste->setCodigo(codigo);
    Texto nomeObj;
    nomeObj.setValor("NomeDeTeste");
    teste->setNome(nomeObj);
    Classe classeObj;
    classeObj.setValor("SISTEMA");
    teste->setClasse(classeObj);

    return true;
}

bool StubSTeste::visualizarCasoDeTeste(const Codigo &codigo, CasoDeTeste *casoDeTeste) {
    casoDeTeste->setCodigo(codigo);
    Texto nomeObj;
    nomeObj.setValor("NomeDeCasoTeste");
    casoDeTeste->setNome(nomeObj);
    Data dataObj;
    dataObj.setValor("01/JUL/2023");
    casoDeTeste->setData(dataObj);
    Texto acaoObj;
    acaoObj.setValor("isto e uma acao");
    casoDeTeste->setAcao(acaoObj);
    Texto respostaObj;
    respostaObj.setValor("isto e a resposta");
    casoDeTeste->setResposta(respostaObj);
    Resultado resultadoObj;
    resultadoObj.setValor("REPROVADO");
    casoDeTeste->setResultado(resultadoObj);

    return true;
}
