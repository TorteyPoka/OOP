#include<stdio.h>
int main()
{
    int i;

    int arr[3]={1,2,3};

    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original form: \n");
    for(i=0; i<3; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nIn reverse: \n");
    for(i=3-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

}