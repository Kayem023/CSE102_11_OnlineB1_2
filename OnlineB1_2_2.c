#include<stdio.h>

int main()
{
    int n;
    int count,num;
    scanf("%d",&n);
    num=1;
    count=1;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        if(n==1)count++;
        num = num *2;
        num = num + n;
    }
    printf("%d %d\n",num,count);
    return 0;
}
