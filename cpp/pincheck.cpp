#include<iostream>

inline void ErrorMessage(char* msg)
    {
    std::cout<<"\aError: "<<msg<<std::endl;
    }

    int main()
    {
    char* ep="Invalid Input";

    ErrorMessage(ep);

    char msg[] = "Disk Failure";

    ErrorMessage(msg);

    ErrorMessage("Timeout");

    return 0;
    }
