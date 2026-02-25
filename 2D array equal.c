#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Row and column of the matrix:");
    scanf("%d",&a);
    scanf("%d",&b);
    int mat1[a][b];
    printf("Enter enter the elements: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("The matrix of A: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    int mat2[a][b];
    printf("Enter enter the elements: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("The matrix of B: \n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    int equal=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(mat1[i][j]!= mat2[i][j])
            {
                equal=1;
                break;
            }
            else
            {
                 continue;
            }
        }
    }
    if(equal==0)
    {
        printf("This two Matrix are Equal");
    }
    else
    {
        printf("This two Matrix are not Equal");
    }
    return 0;

}
