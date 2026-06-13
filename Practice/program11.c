/*

    START
       Accept number as No
       if No is completely divisible by 2
            then print Even
        otherwise
            print odd
    STOP

   
    START

        Accept number as No
        DIvide No by 2
        if reminder is 0
             then print as even
        otherwise
            print as odd  

    STOP

*/

#include<stdio.h>

int main()
{
    int iValue=0;
    int iRemender=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRemender=iValue % 2;

    if(iRemender==0)
    {
        printf("number is Even\n");
    }
    else
    {
        printf("number is odd\n");
    }

    return 0;
}