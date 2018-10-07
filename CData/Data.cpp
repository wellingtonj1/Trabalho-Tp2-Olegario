#include "Data.h"

Data::Data()
{

}

void Data::setdia(int x)
{
    dia=x;
}

void Data::setmes(int x)
{
    mes=x;
}

void Data::setano(int x)
{
    ano=x;
}

int Data::getdia()
{
    return dia;
}

int Data::getmes()
{
    return mes;
}

int Data::getano()
{
    return ano;
}

int Data::getdiasemana()
{
    /*Dados Dia, Mes e Ano, calcule

    1) a = (14 - Mes) / 12

    2) y = Ano - a

    3) m = Mes + 12a - 2

    4) q = Dia + 31m/12 + y + y/4 - y/100 + y/400

    5) d = q mod 7 (resto da divisão por 7)
    */

    int a,y,m,q,d;

    a=(14-mes)/12;
    y=ano-a;
    m=mes+(12*a)-2;
    q=dia+((31*m)/12)+y+(y/4)-(y/100)+(y/400);
    d= q%7;

    return d;
}


