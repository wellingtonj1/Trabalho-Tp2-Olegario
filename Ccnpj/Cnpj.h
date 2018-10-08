#ifndef CNPJ_H
#define CNPJ_H
#include <iostream>

class Cnpj
{
private:
    std::string cdcnpj;
public:
    Cnpj();
    void menu();
    bool validacnpj(std::string *);
};

#endif // CNPJ_H
