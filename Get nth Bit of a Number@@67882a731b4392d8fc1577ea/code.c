#include<stdio.h>
int main()
{
    int num,n,bit status;
    scanf("%d%d", &num,&n);
    bitstatus = (num>>n) & 1;
    printf("The %d is set to %d", n, bitstatus);
    return 0;
}