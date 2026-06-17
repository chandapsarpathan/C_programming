#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRemender=0;

    iRemender=iNo % 2;

    if(iRemender==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number to check whether it is even or odd : ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d id Odd\n",iValue);
    }

    return 0;
}