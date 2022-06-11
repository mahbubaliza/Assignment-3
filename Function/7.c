/*7. Write a program to take two numbers as input and function
to swap them by passing parameters as values and also as
addresses.*/
#include<stdio.h>
int swap(int i,int j)
{
    int x;
    x=i;
    i=j;
    j=x;
    printf("%d %d\n", i,j);
    x=&i;
    i=&j;
    printf("%p %p\n", x,i);
}
int main()
{
    int k,l;
    printf("Enter Two numbers: ");
    scanf("%d%d", &k,&l);
    swap(k,l);
    return 0;
}
