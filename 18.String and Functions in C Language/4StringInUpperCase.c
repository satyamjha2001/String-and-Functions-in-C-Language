#include <stdio.h>
void uppercase(char *str);
int main()
{
    char str[100];
    printf("enter your string: ");
    fgets(str, 100, stdin);
    uppercase(str);
    return 0;
}
void uppercase(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}