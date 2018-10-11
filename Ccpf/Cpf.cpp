#include "Cpf.h"

Cpf::Cpf()
{

}

void Cpf::menu()
{
    std::cout<<"Digite 1 para validar cpf\n";
    std::cout<<"Digite 2 para sair\n";
}

bool Cpf::validacpf(std::string x)
{
    unsigned int i,d,z,y;
    if(x.length()!=11)
    {
        std::cout<<"\n tamanho invalido!\n";
        return false;
    }
    else
    {
        int aux[x.length()];
        for(i=0;i!=x.length();i++)
        {
            std::string u=x.substr(i,1);
            aux[i]=std::stoi(u);
        }
        int resmultip1=0;
        z=10;
        for(y=0;y<9;y++)
        {
            resmultip1=resmultip1+(aux[y]*z);
            z--;
        }
        resmultip1=(resmultip1*10)%11;

        int resmultip2=0;
        d=11;
        for(int t=0;t<10;t++)
        {

            resmultip2=(resmultip2)+aux[t]*d;
            d--;
        }
        resmultip2=(resmultip2*10);
        resmultip2=resmultip2%11;

        if(resmultip1==aux[9]&&resmultip2==aux[10])
        {
            std::cout<<"\nCpf valido!\n";
            return true;
        }
        else
        {
            std::cout<<"\nCpf invalido!\n";
            return false;
        }
    }

}
