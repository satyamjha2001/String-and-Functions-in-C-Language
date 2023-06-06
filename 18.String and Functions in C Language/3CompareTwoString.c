#include <stdio.h>
int length(char *str);
int cmp(char str1[], char str2[]);
int main()
{
    char str1[100], str2[100];
    printf("Enter your first string: ");
    gets(str1);
    printf("Enter your second string: ");
    gets(str2);
    int r = cmp(str1, str2);
    if (r == -1)
        printf("\nBoth string is in dictionary order");
    else if (r == 1)
        printf("\nBoth string is not in dictionary order");
    else
        printf("\nBoth string is equal");
    return 0;
}
int length(char *str)
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    return i;
}
int cmp(char str1[], char str2[])
{
    int l1 = length(str1);
    int l2 = length(str2);
    int max = l1 > l2 ? l1 : l2;
    int i, count;
    for (i = 0; i < max; i++)
    {
        if (str1[i] == '\0')
        {
            count = -1;
            break;
        }
        if (str2[i] == '\0')
        {
            count = 1;
            break;
        }
        if (str1[i] > str2[i])
            count = 1;
        else if (str1[i] < str2[i])
            count = -1;
        else if (str1[i] == str2[i])
            count = 0;
    }
    return count;
}
