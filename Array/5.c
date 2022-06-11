/*5. WAP that takes a 5x5 matrix of integer values as input and then
find out the biggest number from upper-left to lower bottom
diagonal elements of that matrix.*/

#include<stdio.h>
int main()
{
    int a[5][5];
    int i,j;
    printf("enter values: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=1; i<5; i++)
    {
        j=i;
        if (a[0][0]<a[i][j])
        {
            a[0][0]=a[i][j];
        }
    }
    printf("Biggest diagonal elements= %d",a[0][0]);

    return 0;
}
