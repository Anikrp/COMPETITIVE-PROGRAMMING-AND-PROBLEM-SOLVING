#include<stdio.h>
int main()
{
int t,a,b,c;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&a,&b,&c);
if(a<=0||b<=0||c<=0)
printf("NO\n");
else if(a+b+c!=180)
printf("NO\n");
else
printf("YES\n");
}
}