#include<stdio.h>
int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=(2*n-1);i++)
    {
        printf("*");
    }
    printf("\n\n");
    for(i=1;i<=(n-1);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        printf("*");
        if(i != (n-1))
        {
            for(j=1+(n-i-2)*2;j>0;j--)
            {
                printf(" ");
            }
            printf("*\n\n");
        }
    }
    return 0;
}
