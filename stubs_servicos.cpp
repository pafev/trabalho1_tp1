#include "stubs_sevicos.hpp"

#include <string>

bool StubSAutenticacao::autenticar(const Matricula &matricula, const Senha &senha) {
    if(matricula.getValor() == "2615334" && senha.getValor() == "123@ab") {
        return true;
    }
    return false;
}

bool StubSDesenvolvedor::visualizar(const Matricula &matricula, Desenvolvedor *desenvolvedor) {
    desenvolvedor->setMatricula(matricula);
    Texto nomeObj;
    nomeObj.setValor("NomeDeDesenvolvedor");
    desenvolvedor->setNome(nomeObj);
    Senha senhaObj;
    senhaObj.setValor("123@ab");
    desenvolvedor->setSenha(senhaObj);
    Telefone telefoneObj;
    telefoneObj.setValor("+61982155097");
    desenvolvedor->setTelefone(telefoneObj);

    return true;
}

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
    dataObj.setValor("01/07/2023");
    casoDeTeste->setData(dataObj);
    Texto acaoObj;
    acaoObj.setValor("descricao de uma acao");
    casoDeTeste->setAcao(acaoObj);
    Texto respostaObj;
    respostaObj.setValor("descricao de resposta");
    casoDeTeste->setResposta(respostaObj);
    Resultado resultadoObj;
    resultadoObj.setValor("REPROVADO");
    casoDeTeste->setResultado(resultadoObj);

    return true;
}
