#include <stdio.h>
void lowercase(char str[]);
int main()
{
    char str[100];
    printf("enter your string: ");
    fgets(str, 100, stdin);
    lowercase(str);
    return 0;
}
void lowercase(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    printf("%s", str);
}