/*1. Write a program that will copy one string to another. You can’t
use strcpy() function.*/

#include<stdio.h>
#include<string.h>
int main()
{
 int i,n;
 char string[100],string2[100];
 gets(string);
 n=strlen(string);
 for(i=0; i<n; i++)
 {
 string2[i]=string[i];
 }
 printf("%s", string2);
 return 0;
}
