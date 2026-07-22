#include<stdio.h>

void display(int iNo)
{

    int iCnt=0;
    // updator
    if(iNo<0)      // if inout is negative it convert into positive
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("jay Ganesh\n");
    }

}

int main()
{
    int iValue=0;


    printf("Enter the frequency:\n");
    scanf("%D",&iValue);

    display(iValue);

    
    return 0;
}
