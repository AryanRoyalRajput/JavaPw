// sum of the diagonals of a matrix//
#include<stdio.h>
int main()
{
    int i,j,m,n,a[10][10],sum=0;
    printf("enter order of the matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements of the matrix");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("the sum is:");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
            sum = sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("%d ",sum);
    return 0;
}