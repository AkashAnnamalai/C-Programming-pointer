#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the two numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    int *p1;
    int *p2;
    p1=&a;
    p2=&b;
    int sum=(*p1)+(*p2);
    int diff=(*p1)-(*p2);
    int mul=(*p1)*(*p2);
    int div=(*p1)/(*p2);
    printf("%d \n",sum);
    printf("%d \n",diff);
    printf("%d \n",mul);
    printf("%d \n",div);
    return 0;
}
