#include<stdio.h>


int main()
{
    int n,i;
    float sum,mul,fac,sign;
    scanf("%d",&n);

    sum=0;
    mul=1;
    fac=1;
    sign=1;

    for(i=1;i<=n;i++)
    {
        mul = mul * i*(i+1)/2;
        fac = fac*i;
        sum = sum+sign*mul/fac;
        sign = -sign;
    }

    printf("%f",sum);
    return 0;
}
