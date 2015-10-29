#include<iostream>
#include<cstdlib>


int main()
{
    int item[4]={6,7,9,5};
for(int i=0; i<sizeof(item)/sizeof(int);i++) //izeof开辟的是最基本单位的空间，对于数组开辟空间，要对数据类型进行转换
    {
        std::cout<<"item#"<<i<<"----------"<<item[i]<<std::endl;
    }
}
