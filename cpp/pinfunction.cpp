#include<iostream>

void FileFunc(),EditFunc();
    int main()
    {
    void (*funcp)();

    funcp=&FileFunc;
    (*funcp)();

    funcp=EditFunc;
    funcp();
    return 0;
    }
    void FileFunc()
    {
    std::cout<<"File Function"<<std::endl;
    }
    void EditFunc()
    {
    std::cout<<"Edit Function"<<std::endl;
    }
