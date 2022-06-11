/*4. Write a function to print the sum and average of first n odd
numbers where n is passed to the function as argument.*/

#include<stdio.h>
void sum(int num)
{
    int i,sum=0,k=0;
    for(i=1; i<=num; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
            k++;
        }
    }
    printf("Sum is:- %d\n",sum);
    printf("Avg is:- %.2lf\n",(double)sum/k);
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    sum(n);
    return 0;
}
