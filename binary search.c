#include <stdio.h>
int binary(int arr[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)

            return mid;

        if (arr[mid] < x)

            low = mid + 1;

        else

            high = mid - 1;

        return -1;
    }
    int main()
    {
        int x, arr[10];
        printf("\nenter 10 elements in stored way: ");
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("\n enter a number to find index: ");
        scanf("%d", &x);

        int n = sizeof(arr) / sizeof(arr[0]);
        int result = binary(arr, x, 0, n - 1);
        if (result == -1)

        {
            printf("NOT found");
        }
        else
        {
            printf("element is found %d", result);
        }
        return 0;
    }
