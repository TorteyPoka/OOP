#include<stdio.h>

int main()
{
    int glasses = 48;
    int length1;
    int length2;
    int cut, size1;
    int totalCut;

    scanf("%d %d", &length1, &length2);

    int size  = length1*length2;

    printf("Initial size: %d\n", size);

    if (length1<length2)
    {
        cut= length2 - length1; //cut

        size1 = cut*length1;

        int size2=size-size1;
        printf("After resize: %d\n", size2);
    }
    totalCut = size1*glasses;
    printf("Total Cut Area: %d\n", totalCut);

    return 0;
}