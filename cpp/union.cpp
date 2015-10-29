#include<iostream>

    union Holder
    {
    char  holdchar;
    short int holdint;
    long int holdlong;
    float holdfloat;
    };

    void DisplayHolder(Holder, char*);

    int main()
    {
    Holder hld;
    hld.holdchar = 'X';
    DisplayHolder( hld, "char");

    hld.holdint = 12345;
    DisplayHolder(hld ,"int");

    hld.holdlong = 7654321;
    DisplayHolder(hld ,"long");

    hld.holdfloat = 1.23;
    DisplayHolder(hld ,"float");

    return 0;
    }

    void DisplayHolder(Holder hld,char* tag)
    {
    std::cout<<"---Initialized"<<tag<<"---"<<std::endl;
    std::cout<<"holdchar"<<hld.holdchar<<std::endl;
    std::cout<<"holdint"<<hld.holdint<<std::endl;
    std::cout<<"holdlong"<<hld.holdlong<<std::endl;
    std::cout<<"holdloat"<<hld.holdfloat<<std::endl;
    }
