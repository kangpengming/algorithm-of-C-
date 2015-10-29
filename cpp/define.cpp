#include<iostream>
#include<iomanip>

#define OVERTIME 1.5
#define TAXRATE 0.15
#define WKWEEK  40
#define REG(h)  ((h)<WKWEEK?(h):WKWEEK)
#define OTIME(h)   ((h)<WKWEEK?0:h-WKWEEK)
#define OTIMEPAY(h,r)  ((r)*OTIME(h)*OVERTIME)
#define REGPAY(h,r)    ((r)*REG(h))
#define GROSSPAY(h,r)  (OTIMEPAY(h,r)+REGPAY(h,r))
#define WHOLDING(h,r)  (GROSSPAY(h,r)*TAXRATE)
#define NETPAY(h,r)    (GROSSPAY(h,r)-WHOLDING(h,r))

void setformat();

int main()
    {
        std::cout<<"Enter hours (xx) rate (x.xx):";
        int hours;
        float rate;
        std::cin>>hours>>rate;

        std::cout<<"Regular:   ";
        setformat();
        std::cout<<REGPAY(hours,rate)  <<std::endl;

        std::cout<<"Overtime:   ";
        setformat();
        std::cout<<OTIMEPAY(hours,rate)<<std::endl;

         std::cout<<"Gross:   ";
        setformat();
        std::cout<<GROSSPAY(hours,rate)<<std::endl;

         std::cout<<"Withholding:   ";
        setformat();
        std::cout<<WHOLDING(hours,rate)<<std::endl;

         std::cout<<"Net Pay:   ";
        setformat();
        std::cout<<NETPAY(hours,rate)<<std::endl;
        return 0;
    }
void setformat()
    {
    std::cout<<std::setw(10)
                <<std::setiosflags(std::ios::fixed)
                <<std::setiosflags(std::ios::right)
                <<std::setprecision(2);
    }
