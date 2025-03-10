#include<stdio.h>
int main()
{
    int num,n,newNum;
    scanf("%d%d",&num,&n);
    newNum= num & (~(1<<n));
    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d(in decimal)\n",n,num);
    printf("Number after clearing %d bit:%d(in decimal)\n",n,newNum);
    return 0;
}