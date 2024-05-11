#include <stdio.h>

int main() {
	int t,rev,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    rev=0;
	    while(n!=0)
	    {
	        rev=rev*10+n%10;
	        n=n/10;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}