#include<stdio.h>
struct Demo
{
    int i;      //4
    int *ptr;   //8
};              //8 or 16

int main()
{
    struct Demo dobj;

    printf("Size of Object is : %lu\n",sizeof(dobj));

    return 0;

}