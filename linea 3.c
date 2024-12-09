#include<stdio.h>
int main()
{
    int i,s,arr[]= {2,2,3,4,5,6,7,8,8,9,2},count=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("enter the number to find its index number: \n");
    scanf("%d",&s);
    for(i=0; i<size; i++)
    {
        count+=1;
        if(arr[i]==s)
        {
            break;
        }
    }
    printf("%d is on index number %d",s,count);

        return 0;
}
