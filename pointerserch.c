#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size of array: \n");
    scanf("%d",&a);
    int arr[a];
    int *p;
    p=arr;
    printf("Enter the array elements: \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",(p+i));
    }
    int f,j=0;
    printf("Enter the elements to search: ");
    scanf("%d",&f);
    for(int i=0;i<a;i++)
    {
        if(*(p+i)==f)
        {
           j=1;
        }
    }
    if(j==1)
    {
        printf("yes your searching element %d is not in array.",f);
    }
    else
    {
        printf("sorry your searching element %d is not in array.",f);
    }
    return 0;
}
