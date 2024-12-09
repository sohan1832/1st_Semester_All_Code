#include <stdio.h>
int main()
{
    int a, i, search, arr[50];
    printf("Enter the size of array: ");
    scanf("%d", &a);
    printf("what number do you want to search: ");
    scanf("%d", &search);
    for (i = 0; i < a; i++)
    {
        printf("Enter the  %d element of array: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (arr[i] == search)
        {
            printf("the number of %d is present and its index is %d\n", search, i);
        }
        else
        {
            printf("Not present the number \n");
        }
    }
}