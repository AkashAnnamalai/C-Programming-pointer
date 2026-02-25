#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1[100];
    printf("Enter a string: \n");
    scanf("%s",str);
    char *p=str;
    char *p2=str1;
    while(*p!='\0')
    {
        *p2=*p;
        p++;
        p2++;
    }
    *p2='\0';
    printf("After copided \n");
    printf("%s",str1);
    return 0;
}
