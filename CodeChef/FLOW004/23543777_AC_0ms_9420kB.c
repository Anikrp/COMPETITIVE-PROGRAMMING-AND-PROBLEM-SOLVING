#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int sum=0,h;
	    sum=n%10;
	    while(n!=0)
	    {
	        h=n%10;
	        n=n/10;
	    }
	    sum=sum+h;
	    printf("%d\n",sum);
	}
	return 0;
}