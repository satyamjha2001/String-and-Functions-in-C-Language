#include<stdio.h>
int length(char *str); // Or int length(char)
void rev(char str[]);
int main() {
char str[100];
printf("Enter your string: ");
gets(str);
rev(str);
return 0;
}
int length(char *str)  // Or int length(char str[])
{    int i;
    for(i=0;str[i];i++)
    {
       
    }
    return i;
}
void rev(char str[])
{
   int low=0,temp;
   int high = length(str)-1;
   while(low<high)
   {  temp=str[low];
      str[low]=str[high];
      str[high]=temp;
      low++;
      high--;
   }
   printf("Reverse of your string is :\n%s",str);
}
