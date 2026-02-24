#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    int **pa;
    p=&a;
    pa=&p;
    printf("%d \n",&a);
    printf("%d \n",a);
    printf("%d \n",p);
    printf("%d \n",*p);
    printf("%d \n",*(&a));
    printf("%d \n",pa);
    printf("%d \n",*pa);
    printf("%d \n",**pa);
    return 0;
}
