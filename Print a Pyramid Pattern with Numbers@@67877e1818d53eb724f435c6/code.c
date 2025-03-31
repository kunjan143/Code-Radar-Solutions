#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int nst = 1;
    int nsp = n-1;
    for(int i=1;i<=n;i++)
    {
        int a = i-1;
        for(int q=1;q<=nsp;q++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int k=1;k<=i-1;k++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
}