/*5. Write a function that returns 1 if the number is prime and 0 if
not prime. Number is passed to the function as argument.*/

#include<stdio.h>
void prime(int num)
{
    int i,k=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            k++;
        }
    }
    if(k==0)
        printf("1\n");
    else
        printf("0\n");
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
