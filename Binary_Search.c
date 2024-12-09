#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int elements[] = {10, 21, 31, 35, 42, 45, 56, 62, 64, 77, 80, 85};
    int n = sizeof(elements) / sizeof(elements[0]);
    int target;
    printf("Enter Your Searching Number:");
    scanf("%d", &target);

    int result = binarySearch(elements, 0, n - 1, target);
    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}
