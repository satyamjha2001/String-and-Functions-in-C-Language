#include<stdio.h>
int length(char *str); // Or int length(char str[])
int main() {
char str[100];
printf("Enter your string: ");
fgets(str,100,stdin);
int len=length(str);
printf("Length of your string: %d",len);
return 0;
}
int length(char *str)  // Or int length(char str[])
{    int i,count=-1;
    for(i=0;str[i];i++)
    {
       
    }
    return i-1;
}
