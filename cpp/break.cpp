#include<iostream>
#include<cstdlib>

int main()
{
    char selection='\0';
    while(selection!='q')
    {
        std::cout<<"show number ,Q-uit:";
        std::cin>>selection;
    if(selection!='s'&&selection!='q')
    {
    std::cout<<'\a';
    break;
    }
    if(selection=='s')
        std::cout<<std::rand()<<std::endl;
    }
    return 0;
}
