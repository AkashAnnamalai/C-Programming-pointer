#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array: \n");
    scanf("%d",&a);
    int arr1[a];
    int arr2[a];
    int *p;
    int *p1,*p2;
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
    p2=temp;
    for(int i=0;i<a;i++)
    {
        *(p2+i)=*(p+i);
        *(p+i)=*(p1+i);
        *(p1+i)=*(p2+i);
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
