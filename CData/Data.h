#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data
{
private:
    int dia,mes,ano;
public:
    Data();
    void setdia(int);
    void setmes(int);
    void setano(int);
    int getdia();
    int getmes();
    int getano();
    int getdiasemana();


};

#endif // DATA_H
