/*1. Write a function that takes one integer argument and
returns its square.*/

#include<stdio.h>
int sqr(int n)
{
    return n*n;
}
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int sqrt=sqr(x);
    printf("square of %d is %d",x,sqrt);
    return 0;
}
