#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: \n");
    scanf("%s",str);
    char *p=str;
    int len= strlen(p);
    printf("%d",len);
    return 0;
}
