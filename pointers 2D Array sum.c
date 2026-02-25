#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the size of row: \n");
    scanf("%d",&a);
    printf("Enter the size of column: \n");
    scanf("%d",&b);
    int arr[a][b];
    int *p=&arr[0][0];
    printf("Enter the array elements: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",(p+i*b+j));
        }
    }
    printf("The 1st matrix are: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           printf("%d ",*(p+i*b+j));
        }
        printf("\n");
    }
    int arr2[a][b];
    int *p2=&arr2[0][0];
    printf("Enter the array elements: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",(p2+i*b+j));
        }
    }
    printf("The 2nd matrix  are: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           printf("%d ",*(p2+i*b+j));
        }
        printf("\n");
    }
    int sum[a][b];
    int *add=&sum[0][0];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           *(add+i*b+j)=(*(p+i*b+j))+(*(p2+i*b+j));
        }
    }
    printf("The sum of array: \n");
        for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           printf("%d ",*(add+i*b+j));
        }
        printf("\n");
    }
    return 0;
}

