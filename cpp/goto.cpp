#include<iostream>
#include<cstdlib>

int main()
    {
        std::cout<<"Compute a random number ? (y/n)";
        char ans;
        std::cin>>ans;

        if(ans=='n')
            goto done;//����������ʽ������ʽ�ı�����ʼ��������

        int ani;
        ani=std::rand();
        std::cout<<ani;

        done:
            return 0;
    }
