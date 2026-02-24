#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array: \n");
    scanf("%d",&a);
    int arr1[a];
    int arr2[a];
    int *p;
    int *p1;
    p=arr1;
    int temp[a];
    printf("enter the array elements: \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",(p+i));
    }
    p1=arr2;
    printf("enter the array elements: \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",(p1+i));
    }
    for(int i=0;i<a;i++)
    {
        temp[i]=arr2[i];
        arr2[i]=arr1[i];
        arr1[i]=temp[i];
    }
    printf("\nSwap the 2nd array elements in first array are:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d ",*(p+i));
    }
    p1=arr2;
    printf("\nSwap the 1st array elements in 2nd array are:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d ",*(p1+i));
    }
    return 0;
}
