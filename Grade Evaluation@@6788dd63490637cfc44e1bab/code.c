#include<stdio.h>
int main()
{
    int grade ,A,B,C,D,F;
    scanf("%d %d %d %d %d %d" ,&grade ,&A ,&B ,&C ,&D ,&F);
    if(grade==A)
    {
        printf("Excellent");
    }
    else if(grade==B)
    {
        printf("Good");
    }
    else if(grade==C)
    {
        printf("Average");
    }
    else if(grade==D)
    {
        printf("Below Average");
    }
    else if(grade==F)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid grade");
    }
}