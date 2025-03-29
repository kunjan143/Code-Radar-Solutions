#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          for(k=1;k<=j;k++)
          {
            printf("*");
          }
        }
        printf("\n");
        
    }
}