/*2. Write a function to calculate the area of a circle where radius is
passed to the function as argument*/

#include<stdio.h>
#define pi 3.1416
double area(double radius)
{
    return pi*radius*radius;
}
int main()
{
    double x;
    printf("enter a poitive number: \n");
    scanf("%lf",&x);
    double rad = area(x);
    printf("Area of circle is= %.2lf\n",rad);
    return 0;
}
