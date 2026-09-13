#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Brr = NULL;
    int iLength = 0,icnt=0;

    // Step 1 : Accept the number of elements
    printf("enter number of elements:\n");
    scanf("%d",&iLength);

    // Step 2 : Allocate the memory 
    Brr = (int*)malloc(iLength * sizeof(int));

    //Step 3 : Accept the value from user

    printf("enter the elements:\n");

    for(icnt=0;icnt<iLength;icnt++)
    {
        scanf("%d",&Brr[icnt]);
    }

    //step 4 : use the memory (LOGIC)


    // Step 5 : Deallocate the memory
    free(Brr);

    return 0;
}