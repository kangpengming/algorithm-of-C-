#include<iostream>
int CountDown[]={10,9,8,7,6,5,4,3,2,1};
int main()
    {
   char c='A';
    int i=1;
    long l=1234567;
    float f=12.098;

    char *cp;
    int *ip;
    long *lp;
    float *fp;

    cp=&c;
    ip=&i;
    lp=&l;
    fp=&f;

    std::cout<<*cp<<"+"<<cp<<std::endl;
    std::cout<<*ip<<"+"<<ip<<std::endl;
    std::cout<<*lp<<"+"<<lp<<std::endl;
    std::cout<<*fp<<"+"<<fp<<std::endl;

    }
   /* int* cdp=&CountDown[0];
    std::cout<<cdp+1<<std::endl;//指针的值即为地址，无论地址还是指针加减都是数据类型的长度。
    std::cout<<&CountDown[0]+1<<std::endl;
    do
        {
        std::cout<<*cdp<<"+"<<cdp<<std::endl;
    cdp++;
        }while(*cdp);

        std::cout<<"over";

        return 0;
    }*/
