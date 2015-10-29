#include<iostream>

    int main()
    {
    int actualint=123;
    int &otherint = actualint;

    std::cout<<actualint<<std::endl;
    std::cout<<otherint<<std::endl;


    otherint++;
    std::cout<<actualint<<std::endl;
    std::cout<<otherint<<std::endl;

    actualint++;
    std::cout<<actualint<<std::endl;
    std::cout<<otherint<<std::endl;
    }
