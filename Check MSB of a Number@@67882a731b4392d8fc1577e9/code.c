#include<stdio.h>
#define BITS sizeof(int) * 32
int main()
{
    int a;
    scanf("%d" ,&a);
    if(a&1 | a&0)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}