#include<stdio.h>
int main()
{
    int num,n,bitStatus;
    scanf("%d%d", &num,&n);
    bitStatus = (num>>n) & 1;
    printf("The %d is set to %d", n, bitStatus);
    return 0;
}