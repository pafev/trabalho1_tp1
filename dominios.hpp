#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

class Dominio {
protected:
    string valor;
public:
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


#endif // DOMINIOS_HPP_INCLUDED
