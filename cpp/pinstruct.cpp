#include<iostream>

    struct Date
    {
    int year,month,day;
    };

    main()
    {
    Date d[2]={{2,3,4},{4,12,8}};
    Date *pin=d;

    std::cout<<pin<<"+"<<&pin<<std::endl;
    }
