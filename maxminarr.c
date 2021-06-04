#include <stdio.h>

int *maxmin(int arr[], int size)
{
    static int max_min[2];
    max_min[0] = arr[0];
    max_min[1] = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max_min[1])
        {
            max_min[1] = arr[i];
        }

        if(arr[i] < max_min[0])
        {
            max_min[0] = arr[i];
        }
    }

    return max_min;

}


void main()
{
    int n, *p;
    int arr[100];

    printf("How many values: ");
    scanf("%d", &n);
    printf("\nEnter %d values\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = maxmin(arr, n);

    printf("Minimun value is %d \n", *p);
    (*p++);
    printf("Maximun value is %d \n", *p);
}