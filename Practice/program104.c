#include<stdio.h>

void Display(int *iPtr)
{
   printf("value of iptr:%d\n",iPtr);   //Address of arr[5]
    
   printf("%d\n",*iPtr);         // 10
   
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    printf("Base Address of Arr:%d\n",Arr); 
    Display(Arr);

    return 0;
}