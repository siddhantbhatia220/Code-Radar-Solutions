#include<stdio.h>
int main()
{
    int a,i,j,N=1;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",N);
            N++;
        }
        printf("\n");
    }
    return 0;
}