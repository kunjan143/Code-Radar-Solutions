#include<stdio.h>
int main()
{
    int First,Second;
    scanf("%d %d", &First ,&Second);
    if(First==Second)
    {
        printf("Equal");
    }
    else if(First>Second)
    {
        printf("First");
    }
    else
    {
        printf("Second");
    }
}