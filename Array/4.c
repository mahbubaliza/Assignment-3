///4. Draw the Pascal’s Triangle using two-dimensional array.

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(int s=1; s<=n-i; s++)
            printf(" ");
        for(j=0; j<=i; j++)
        {
            if(j==0||j==i)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
