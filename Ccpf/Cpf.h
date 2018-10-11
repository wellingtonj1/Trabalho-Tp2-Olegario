#ifndef CPF_H
#define CPF_H
#include <string>
#include <iostream>

class Cpf
{
private:
    std::string cdpessoafis;
public:
    Cpf();
    static bool validacpf(std::string);
    void menu();
};
#endif // CPF_H
