#include<stdio.h>
int main()
{
    int side1,side2,side3;
    scanf("%d %d %d", & side1,side2,side3);
    sum = side1+side2+side3;
    if(sum==180 && side1>0 && side2>0 && side3>0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}