#include <stdio.h>
void alphanumeric(char str[]);
int main()
{
    char str[100];
    printf("enter your string: ");
    gets(str);
    alphanumeric(str);
    return 0;
}
void alphanumeric(char str[])
{
    int i,a=0,d=0;
    for (i = 0; str[i] != '\0'; i++)
       { if (str[i] >= '0' && str[i] <= '9')
            d=1;
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            a=1;
       }
    if(a==1 && d==1)
    printf("%s is alphanumeric",str);
    else
    printf("%s is not alphanumeric",str);
}