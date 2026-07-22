#include<stdio.h>

void display(int iNo)
{

    int iCnt=0;
    // filter
    if(iNo<0)
    {
        printf("invalid input\n");
        return; 
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d: jay Ganesh\n",iCnt);
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
