#include<iostream>
#include<cstdlib>

int main()
    {
        std::cout<<"Compute a random number ? (y/n)";
        char ans;
        std::cin>>ans;

        if(ans=='n')
            goto done;//不能跳过隐式或者显式的变量初始化的声明

        int ani;
        ani=std::rand();
        std::cout<<ani;

        done:
            return 0;
    }
