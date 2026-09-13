#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Dry run this code

bool LinearSearch(int Arr[],int iSize,int iNO)
{
    int iCnt=0;
    bool bFlag=false;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNO)
        {
            bFlag=true;
            break;     
        }

    }
    return bFlag;

}

int main()
{
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    int iValue=0;
    bool bRet=false;

    printf("enter the number of elements:\n");
    scanf("%d",&iLength);

    Brr=(int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter the Element that you want to search:\n");
    scanf("%d",&iValue);

    bRet=LinearSearch(Brr,iLength,iValue);

    if(bRet==true)
    {
        printf("element is present");

    }
    else
    {
        printf("element is not present");
    }

    free(Brr);


    return 0;
}