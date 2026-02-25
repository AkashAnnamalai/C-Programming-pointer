#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string: \n");
    scanf("%s",str);
    char *rev=str;
    int len=strlen(rev);
    printf("The reverse of the string is:");
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",*(rev+i));
    }


}
