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
    int count=0;
    for(int i=0;*(p+i)!=0&&*(p2+i)!='\0';i++)
    {
        if(*(p+i)==*(p2+i))
        {
            count=1;
        }
        else
        {
            continue;
        }
    }
    if(count==1)
    {
        printf("Strings are equal.");
    }
    else
    {
        printf("String are not equal.");
    }
    return 0;
}
