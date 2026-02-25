#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1[100];
    printf("Enter a string 1: \n");
    scanf("%s",str);
    printf("Enter a string 2: \n");
    scanf("%s",str1);
    char *p=str;
    char *p2=str1;
    while(*p!='\0')
    {
        *p++;
    }
    while(*p2!='\0')
    {
        *p=*p2;
        *p++;
        *p2++;
    }
    printf("concatenate two strings : %s",str);
    return 0;
}
