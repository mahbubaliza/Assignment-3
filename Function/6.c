/*6. Write a function that prints the sum of the digits, count of the
digits and reverse of a number. Number is passed to the function as
argument.*/

#include<stdio.h>
void ss(int num)
{
    int i,c=0,rem,sum=0,sum1=0;
    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        sum1 = sum1*10 + rem;
        num = num/10;
        c++;
    }
    printf("Sum of Digits is : %d\n",sum);
    printf("Count of Digits is : %d\n",c);
    printf("Reverse of Digits is : %d\n",sum1);
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    ss(n);
    return 0;
}
