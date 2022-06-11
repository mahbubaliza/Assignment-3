/*3. WAP to input the values in a two
dimensional array of integers and display the
values.*/

#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    printf("enter values: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
