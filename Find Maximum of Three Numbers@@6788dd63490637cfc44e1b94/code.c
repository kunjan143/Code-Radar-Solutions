#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a , &b ,&c);
    if(a>b && a>c)
    {
        printf(" a is maximum number");
    }
    else if(b>c)
    {
        printf("b is maximum number");
    }
    else
    {
        printf("c is maximum");
    }
}