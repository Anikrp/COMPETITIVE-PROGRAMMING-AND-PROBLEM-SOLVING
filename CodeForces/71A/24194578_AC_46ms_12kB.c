#include<stdio.h>
int main()
{
	int n,i;
	char a[6000];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",a);
		int x= strlen(a);

			if(x>10){
		printf("%c%d%c",a[0],x-2,a[x-1]);
		printf("\n");
		}
		else
		{
			printf("%s",a);
			printf("\n");
		}
	}
}
