#include<iostream>
    void show(int = 1,float = 1.45,long =4);
 main()
    {
    show();
    show(5);
    show(6,7.8);
    show(5,7.8,9);
    }
    void show(int first,float second,long three)
    {
    std::cout<<"first ="<<first<<std::endl;
    std::cout<<"second ="<<second;
    std::cout<<"three ="<<three<<std::endl;
    }
