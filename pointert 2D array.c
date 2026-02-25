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
    printf("The matrix are: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           printf("%d ",*(p+i*b+j));
        }
        printf("\n");
    }
    return 0;
}

