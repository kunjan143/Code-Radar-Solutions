#include<stdio.h>
int main()
{
    char st[100];
    int a;
    char st2[100];
    scanf("%s %d %s",&st,&a,&st2);
    printf("Name: %s\n", st);
    printf("Age: %d\n", a);
    printf("Hobby: %s", st2);
    return 0;
}