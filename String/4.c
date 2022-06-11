///4. WAP to search a character in a given string.
#include<stdio.h>
int main()
{
    char a[100],ch;
    int i,j=0,k,len;
    printf("Enter the string: ");
    gets(a);
    printf("Enter the character: ");
    scanf("%c",&ch);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]==ch)
        {
            j=1;
        }
    }
    if(j==1)
        printf("%c is found",ch);
    else
        printf("%c is not found",ch);
    return 0;
}
