#include<stdio.h>
int main()
{
    int a, MSB;
    scanf("%d" ,&a);
    MSB=1<<(BITS-32)
    if(a&MSB)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
}