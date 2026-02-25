#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array: \n");
    scanf("%d",&a);
    int arr[a];
    int *rev;
    rev=arr;
    printf("Enter the array elements: \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",(rev+i));
    }
    printf("Reverse of the array elements are: \n");
    for(int i=a-1;i>=0;i--)
    {
        printf("%d ",*(rev+i));
    }
    return 0;
}
