#include<iostream>
static const char* brothers[]=
{
"a","ab","abcd","abc","abcdef","abcde"
};
extern "C"
void SortCharArray(const char**);
int SizeArray()
{
return sizeof brothers / sizeof(char*);
}
int main()
{
    SortCharArray(brothers);
    int size= SizeArray();
    for(int i=0; i<size;i++)
    std::cout<<brothers[i]<<std::endl;
    return 0;
}
