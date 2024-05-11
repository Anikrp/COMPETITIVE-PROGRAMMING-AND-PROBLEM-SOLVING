#include <stdio.h>

int main() {
    int t, n, sum=0, s[200];
	scanf("%d", &t);

	for(int i=0; i<t; i++){

	    scanf("%d", &n);

	    while(n!=0){

	       sum = sum + (n%10);
         n = n/10; 
         
	    }
	    printf("%d\n", sum); sum=0; 
	}
	
	return 0;
}