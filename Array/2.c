/*2. Write a program that will take n (n = any positive integer less than 100)
from the user and print them in descending order.*/

#include<stdio.h>
int main()
{
    int a[100];
    int i,j,b,n;
    printf("enter the number of turm: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter the number: ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    printf("Descending order: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
