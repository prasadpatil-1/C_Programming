#include<stdio.h>

int main()
{
    int i = 10;
    const int j = 10;

    i++; //allowed
    j++; //Not allowed
    
    return 0;
}