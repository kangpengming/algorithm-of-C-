#include<iostream>
#include<cstdlib>


int main()
{
    int item[4]={6,7,9,5};
for(int i=0; i<sizeof(item)/sizeof(int);i++) //izeof���ٵ����������λ�Ŀռ䣬�������鿪�ٿռ䣬Ҫ���������ͽ���ת��
    {
        std::cout<<"item#"<<i<<"----------"<<item[i]<<std::endl;
    }
}
