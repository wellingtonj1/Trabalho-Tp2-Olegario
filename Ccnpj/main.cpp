#include <QCoreApplication>
#include <iostream>
#include "Cnpj.h"

int main()
{
    /*std::string x;
    std::cin.ignore();
    std::getline(std::cin,x);
    Cnpj::validacnpj(&x);
    */
    Cnpj p;
    std::string x;
    int escolha;

    do
    {
        p.menu();
        std::cin>>escolha;

        switch (escolha)
        {
            case 1:

                std::cout<<"Digite o cnpj para o mesmo ser validado!\n";
                std::cin.ignore();
                std::getline(std::cin,x);
                if(p.validacnpj(&x))
                {
                    std::cout<<"\nCnpj valido!\n";
                }
                else
                {
                    std::cout<<"\nCnpj invalido!\n";
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

}
