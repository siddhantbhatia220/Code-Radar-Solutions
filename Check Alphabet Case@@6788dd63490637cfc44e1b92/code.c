#include <stdio.h>
int main() {
    char ant;
    scanf("%c",&ant);
    if(ant>=65 && ant<=90)
        printf("Uppercase");
    else if(ant>=97 && ant<=122)
        printf("Lowercase");
    else   
        printf("Not an alphabet");
    return 0;}