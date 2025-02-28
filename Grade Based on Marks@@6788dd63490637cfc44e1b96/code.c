#include<stdio.h>
int main()
{
    int A,B,C,D,F;
    float per;
    scanf("%f %f %f %f %f", &A, &B , &C ,&D ,&F);
    per = (A+B+C+D+F)/5.0;
    printf("percentage=%.2f\n",per);
    if(per>=90)
    {
        printf("A");
    }
    else if(per>=80 && per<=90)
    {
        printf("B");
    }
    else if (per>=70 && per<=80)
    {
        printf("C");
    }
    else if(per>=60 && per<=70)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}