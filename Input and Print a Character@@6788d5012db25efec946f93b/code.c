#include <stdio.h>
 

char*welcome() {
    return "Welcome to Code Radar!";
}
 
int main() {
    char A;
    scanf("%c",&A);
    printf("you entered: %c" , A);
    return 0;
}