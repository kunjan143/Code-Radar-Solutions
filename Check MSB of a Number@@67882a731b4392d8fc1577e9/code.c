#include<stdio.h>
#define BITS sizeof(int) * 32
int main()
{
    int a, MSB;
    scanf("%d" ,&a);
    MSB= 1 << (BITS - 1);
    if(a&MSB)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}