#include <iostream>
#include "Data.h"


int main()
{
    Data p;
    int x,escolha;;
    do
    {
        std::cout<<"\nDigite o dia : ";
        std::cin>>x;
        p.setdia(x);

        std::cout<<"\nDigite o mês : ";
        std::cin>>x;
        p.setmes(x);

        std::cout<<"\nDigite o ano : ";
        std::cin>>x;
        p.setano(x);

        switch (p.getdiasemana())
        {
            case 0:

                std::cout<<"Domingo:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;

            case 1:

                std::cout<<"\nSegunda feira:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;

            case 2:

                std::cout<<"\nTerça feira:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;

            case 3:

                std::cout<<"Quarta feira:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;
            case 4:

                std::cout<<"Quinta feira:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;
            case 5:

                std::cout<<"Sexta feira:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;
            case 6:

                std::cout<<"Sabado:\t";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano();
                break;

            default:

                std::cout<<"Erro\n\n"<<"Data = "<<p.getdiasemana()<<"\n\n";
                std::cout<<p.getdia()<<"/"<<p.getmes()<<"/"<<p.getano()<<"\n";
                break;
        }
        std::cout<<"\nDigite 0 para encerrar o programa ou qualquer numero para continuar !\n";
        std::cin>>escolha;
    }while(escolha!=0);
}
