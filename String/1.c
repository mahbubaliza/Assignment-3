/*1. WAP to count the number of words and number of characters in a given
line of text
except the spaces.*/


#include<stdio.h>
int main()
{
    char a[100];
    int i,j=0,len,count=1,s;
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    printf("The number of words= %d\n",count);
    for(i=0; i<len; i++)
    {
        if(a[i]==' ')
        {
            j++;
        }
    }
    s=len-j;
    printf("The number of character expect spaces = %d",s);
    return 0;
}
