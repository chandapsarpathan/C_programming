#include<stdio.h>

void DisplayConverter(char cValue)
{
    if(cValue>='a' && cValue<='z')
    {
        printf("%c",cValue -32);
    }
    else if(cValue>='A' && cValue<='Z')
    {
        printf("%c",cValue +32);
    }

    
}
int main()
{
    char cValue='\0';

    printf("enter character:");
    scanf("%c",&cValue);

    DisplayConverter(cValue);

    return 0;
}
