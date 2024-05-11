#include<stdio.h>
#include<string.h>
int main()
{

    char s[20];
    char a[20];
    int n=0;

    gets(s);
    int ln;
    ln = strlen(s);
    int i;

    for ( i=0; i<ln; i++)
        if( s[i]=='4' || s[i]=='7')
            n++;
            if( n==4 || n==7)
                printf("YES\n");
     else
        printf("NO\n");

}