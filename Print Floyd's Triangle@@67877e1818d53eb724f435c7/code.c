#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}