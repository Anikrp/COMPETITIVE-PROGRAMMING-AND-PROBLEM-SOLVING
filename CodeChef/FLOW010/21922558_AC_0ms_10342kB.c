#include <stdio.h>
#include<string.h>
int main() 
{
	int t;
	char c;
	scanf("%d",&t);
	while(t--) 
	{
	scanf("\n%c",&c);
	    if(c=='B'||c=='b')
	    {
	        printf("BattleShip\n");
	        
	    }
	    else if(c=='C'||c=='c')
	   { 
	       printf("Cruiser\n");
	       
	   }
	    else if(c=='D'|| c=='d')
	    {
	        printf("Destroyer\n");
	        
	    }
	    else {
	        printf("Frigate\n");
	        
	    }
	}
	return 0;
}
