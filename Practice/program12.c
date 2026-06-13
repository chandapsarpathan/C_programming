#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemender=0;

    iRemender=iNo % 2;

    if(iRemender==0)
    {
        printf("number is Even\n");
    }
    else
    {
        printf("number is odd\n");
    }

}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}