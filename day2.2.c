#include <stdio.h>
int main()
{
    int arr[100], n, i, odd;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    odd = arr[0]
    for(i=1; i<n; i++)
    {
        odd = odd ^ arr[i];
    }

    // The odd element is the result of the XOR operation
    printf("The odd element is %d\n", odd);

    return 0;
}
