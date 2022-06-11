/*6. WAP to input a string and replace every lower case letter with
upper case letter, upper case letter with a lower case letter, digit
with a ‘#’ and a special symbol with a ‘%’. Display the new string.*/

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='a' && str[i]<='z'))
        {
            str[i]=str[i]-32;
            continue;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
            continue;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            str[i]='#';
        }
        else if(str[i]==' ')
            str[i]=' ';
        else
            str[i]='%';
    }
    printf("New string is: %s\n",str);
    return 0;
}
