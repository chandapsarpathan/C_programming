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
    //variable creation with Default value
    float i=0.0f,j=0.0f,k=0.0f;

    printf("enter first number:\n");
    scanf("%f",&i);

    printf("enter second number:\n");
    scanf("%f",&j);
    
    k=i+j;
    printf("addition is:%f\n",k);

    return 0;
}