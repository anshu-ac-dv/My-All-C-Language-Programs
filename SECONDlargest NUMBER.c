#include <stdio.h>
#include <limits.h>
#include<conio.h>
int main()
{
    int arr[50], i, size, firstL, secondL;
 
    printf("Please Enter the Number of elements in an array : \n");
    scanf("%d", &size);
 
    printf("Please Enter %d elements of an Array \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    firstL = secondL = INT_MIN;
 
    for (i = 0; i < size; i++)
    {
        if(arr[i] > firstL)
        {
            secondL = firstL;
            firstL = arr[i];
        }
        else if(arr[i] > secondL && arr[i] < firstL)
        {
            secondL = arr[i];
        }
    }
    if (secondL == INT_MIN)
    {
        printf("The Second Largest Number does not exist.\n");
    }
 
    else
    {
        printf("\nThe Second Largest Number in this Array = %d", secondL);
    }
 
    return 0;
}
