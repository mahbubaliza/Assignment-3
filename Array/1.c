/*1.Write a program that will take n (n = any positive
integer less than 100) from the user and find the
biggest number among them.*/

#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter the number of turm: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the number: ");
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("The biggest number is: %d",a[0]);
    return 0;
}
