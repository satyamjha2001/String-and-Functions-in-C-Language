#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],l;
    printf("enter words in string\n");
    fgets(s,100,stdin);

    int i,count=0,word;
    for(i=0;s[i];i++)
    {
        if( (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
        {
            if(s[i+1]==' ')
            {
                count++;
            }

        }
    }
    for(l=0;s[l];l++);
    if(s[l-2]==' ')
       count--;
    word=count+1;
    printf("%d word in a string",word);
    return 0;


}
