#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

class Dominio {
private:
    virtual void validar(string) = 0
protected:
    string valor;
public:
    virtual void setValor(string) = 0;
    string getValor() const;
};

inline string Dominio::getValor() const {
    return valor;
};

class Data : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Senha : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Classe : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Telefone : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Codigo : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Matricula : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Resultado : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

class Texto : public Dominio {
private:
    void validar(string);
public:
    void setValor(string);
};

#endif // DOMINIOS_HPP_INCLUDED
