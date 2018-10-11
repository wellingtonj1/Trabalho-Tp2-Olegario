#include <QCoreApplication>
#include <iostream>
#include "Cpf.h"

int main()
{
    //std::string x;
    //std::getline(std::cin,x);
    Cpf::validacpf("7039107015");

    /*
    Cpf p;
    std::string x;
    int escolha;

    do
    {
        p.menu();
        std::cin>>escolha;

        switch (escolha)
        {
            case 1:

                std::cout<<"Digite o cpf para o mesmo ser validado!\n";
                std::cin.ignore();
                std::getline(std::cin,x);
                if(Cpf::validacpf(&x))
                {
                    std::cout<<"\nCpf valido!\n";
                }
                else
                {
                    std::cout<<"\nCpf invalido!\n";
                }
                break;

            case 2:

            break;

            default:

                std::cout<<"\nDigite uma opção valida!\n";
                break;
        }

    }while(escolha!=2);

    return 0;
    */
}
