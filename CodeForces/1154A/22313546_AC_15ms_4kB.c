#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=d;

    if(a>b&&a>c&&a>d)
    {
        x=a;
        printf("%d %d %d",x-b,x-c,x-d);
    }

    else if(b>a&&b>c&&b>d){
        x=b;
         printf("%d %d %d",x-a,x-c,x-d);}
     else if(c>a&&c>b&&c>d){
        x=c;
        printf("%d %d %d",x-a,x-b,x-d);}
     else if(d>a&&d>c&&d>b){
        x=d;
         printf("%d %d %d",x-a,x-b,x-c);
     }



}