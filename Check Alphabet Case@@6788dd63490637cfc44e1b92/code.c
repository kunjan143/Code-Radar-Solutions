#include<stdio.h>
int main()
{
    int ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
}