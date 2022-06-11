/*3. WAP to input a multi word string and produce a string in which first
letter of each word is capitalized.*/

#include<stdio.h>
int main()
{
    char a[100];
    int i,l;
    printf("Enter a string: ");
    gets(a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(i==0)
        {
            if((a[i]>='a' && a[i]<='z'))
                a[i]=a[i]-32;
            continue;
        }
        if(a[i]==' ')
        {
            ++i;
            if(a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-32;
                continue;
            }
        }
        else
        {
            if(a[i]>='A' && a[i]<='Z')
                a[i]=a[i]+32;
        }
    }
    printf("Capitalize string is: %s\n",a);
    return 0;
}
