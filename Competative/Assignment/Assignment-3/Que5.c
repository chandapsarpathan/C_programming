#include<stdio.h>

void Display(char cValue)
{

     if(cValue=='a' || cValue=='e' || cValue=='i' || 
       cValue=='o' || cValue=='u' ||
       cValue=='A' || cValue=='E' || 
       cValue=='I' || cValue=='O' || cValue=='U')
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    
}
int main()
{
    char cValue=0;

    printf("enter number:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
