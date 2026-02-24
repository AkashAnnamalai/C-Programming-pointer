#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array: \n");
    scanf("%d",&a);
    int arr1[a];
    int arr2[a];
    int *u;
    int *v;
    u=arr1;
    v=arr2;
    printf("Enter the array elements : \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",(u+i));
    }
    printf("The first array elements: \n");
    for(int i=0;i<a;i++)
    {
        printf("%d",*(u+i));
    }
    for(int i=0;i<a;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nAfter copy the first elements in second elements: \n");
    for(int i=0;i<a;i++)
    {
        printf("%d",*(v+i));
    }
    return 0;
}
