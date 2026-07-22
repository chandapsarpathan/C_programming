#include<stdio.h>

void display(int iNo)
{

    int iCnt=0;

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
