#include<stdio.h>

int main()
{
    // Static memory allocation
    float marks[5];    // 40 bytes

    int i = 0;      // Loop counter

    printf("Enter your marks\n");
    
    // Iteration
    //   1    2    3
    for(i=0; i<5; i++)      //4
    {
        scanf("%f",&marks[i]);
    }
    
    printf("Entered marks are : \n");

    //   1    2    3
    for(i=0; i<5; i++)      //4
    {
        printf("%f\n",marks[i]);
    } 
       return 0;
}