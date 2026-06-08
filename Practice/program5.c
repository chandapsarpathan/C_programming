/*
    Algorithm

    Start
        Accept first number as no1
        Accept second number as no2
        perform Addition of no1&no2
        Display the result 
    Stop
*/

#include<stdio.h>

int main()
{
    float i,j,k;

    printf("enter first number:\n");
    scanf("%f",&i);

    printf("enter second number:\n");
    scanf("%f",&j);
    
    k=i+j;
    printf("addition is:%f\n",k);

    return 0;
}