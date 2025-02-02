#include <stdio.h>

int main() {
    int n , i , j;
    scanf("%d",&n);
    for (i=31;i>=0;i--)
    {
        if(n&(1<<i))
            j=1;
        if(j)
            printf("%d",(n&(1<<i))?1:0);
    }
    if (!j)
    {
        printf("0");
    } 
    return 0;
}