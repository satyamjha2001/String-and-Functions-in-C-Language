#include <stdio.h>
#include <string.h>
int length(char *str);
void isPalindrome(char str[]);
int main()
{
    int i;
    char str[100];
    printf("Enter your string: ");
    gets(str);
    isPalindrome(str);
    return 0;
}
void isPalindrome(char str[])
{
    int low = 0, i;
    int high = strlen(str) - 1;
    while (low <= high)
    {
        if (low == high)
        {
            printf("%s is palindrome string.", str);
            break;
        }

        if (str[low] != str[high])
        {
            printf("%s is not palindrome string.", str);
            break;
        }
        low++;
        high--;
    }
    if (low > high)
    {
        printf("%s is palindrome string.", str);
    }
}