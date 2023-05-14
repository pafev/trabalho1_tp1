#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

class Dominio {         /*matricula aluno: 211043351*/
private:
    virtual void validar(string) = 0;
protected:
    string valor;
public:
    virtual void setValor(string) = 0;
    string getValor() const;
};

inline string Dominio::getValor() const {
    return valor;
};

class Data : public Dominio {        /*matricula aluno: 211043351*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Senha : public Dominio {          /*matricula aluno: 211043351*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Classe : public Dominio {         /*matricula aluna: 211038253*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Telefone : public Dominio {        /*matricula aluna: 211038253*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Codigo : public Dominio {         /*matricula aluna: 211038253*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Matricula : public Dominio {          /*matricula aluna: 221030830*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Resultado : public Dominio {          /*matricula aluna: 221030830*/
private:
    void validar(string);
public:
    void setValor(string);
};

class Texto : public Dominio {          /*matricula aluna: 221030830*/
private:
    void validar(string);
public:
    void setValor(string);
};

#endif // DOMINIOS_HPP_INCLUDED
