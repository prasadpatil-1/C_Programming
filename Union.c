// To Demostrate the Concept of Union

#include<stdio.h>

union Demo 
{
    double d ;
    int i ;
    float f ;
};




int main()
{
    union Demo dobj;
    
    printf("Size of Union %d:   " , sizeof(dobj));

    return 0;
}