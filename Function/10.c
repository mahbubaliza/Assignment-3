/*10. Write a function that receives a string (character array) as
argument and produce a string in which first letter of each word is
capitalized.*/

#include<stdio.h>
int pass(char a[])
{
    int i,n;
    n=strlen(a);
    a[0]=toupper(a[0]);
    for (i=1; i<n; i++)
    {
        if ( a[i]==' ')
        {
            a[i+1]=toupper(a[i+1]);
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%c", a[i]);
    }
}
int main()
{
    int string[100];
    printf("Enter a string: ");
    gets(string);
    printf("Capitalized string: ");
    pass(string);
    return 0;
}

