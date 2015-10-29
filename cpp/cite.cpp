#include<iostream>
#define NDEBUG
#include<cassert>

void DisplayMsg(char* msg);

    int main()
    {
    char* cp=0;
    DisplayMsg(cp);
    return 0;
    }

    void DisplayMsg(char* msg)
    {
    assert(msg!=0);
    std::cout<<msg;
    }
