///5. WAP to reverse a string.
#include<stdio.h>
int main()
{
    char a[100];
    int i,l,s;
    printf("Enter a string: \n");
    gets(a);
    s=strrev(a);
    printf("revers string: %s",s);
    return 0;
}
