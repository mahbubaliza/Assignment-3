/*8. Write a recursive function that will find the average of an
integer*/

#include<stdio.h>
float avg(int x)
{
    if(x!=0)
    {
        return x/2;
    }
    else
    {
        return x;
    }
}
int main()
{
    int a;
    float z;
    printf("Enter number: ");
    scanf("%d", &a);
    z=avg((float) a);
    printf("%.2f ",z);
    return 0;
}
