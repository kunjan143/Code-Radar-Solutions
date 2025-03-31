#include<stdio.h>
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    if (n<1)
    {
        printf("please enter a positive integer.\n");
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("the sum of the first %d natural number is: %d\n",n,sum);
    return 0;
}