///9. Write a recursive function that will find the GCD of two numbers.

#include<stdio.h>
int gcd(int x, int y)
{
    if(x>y)
    {
        return gcd(x-y, y);
    }
    else if (x<y)
    {
        return gcd(y-x, x);
    }
    else
    {
        return x;
    }
}
int main()
{
    int a,b,result;
    printf("Enter numbers: ");
    scanf("%d%d", &a,&b);
    result=gcd(a,b);
    printf("G.C.D of %d and %d is %d.", a,b,result);
    return 0;
}
