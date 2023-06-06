#include <stdio.h>
void repeatedChar(char str[]);
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    repeatedChar(str);
    return 0;
}
void repeatedChar(char str[])
{
    int freq[150] = {0};
    int i;
    for (i = 0; str[i]; i++)
    {
        freq[str[i]]++;
    }
    for (i = 0; i < 150; i++)
    {    
        if ((freq[i] > 1) && i!= ' ' )
            printf("%c ", i);
    }
}