#include<stdio.h>

int gcd(long int a,long int b)
{
    if(a==0){ return b;}
    return gcd(b%a,a);
}

int main()
{
    int t;
    scanf("%d",&t);
    long int a,b,r;
    while(t--)
    {
        scanf("%ld %ld",&a,&b);
        r=gcd(a,b);
        printf("%ld %ld\n",r,a*b/r);
    }
    return 0;
}