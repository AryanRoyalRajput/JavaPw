// sum of two arrays //
#include<stdio.h>
int main()
{
    int n,a[10],b[10],c[10],i,j,k;
    printf("enter size of the array");
    scanf("%d",&n);
    printf("enter element of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter second array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=1;j<n;j++)
    {
        c[k] = a[i] + b[j];
    }
    printf("the sum is :");
    for(k=0;k<n;k++)
    {
        printf("%d",c[k]);
    }
    printf("\n");
    return 0;
}