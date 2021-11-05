	#include <stdio.h>
	
	int main() {
		int n,a,b,c,i;
		a=0;b=0;c=0;
		scanf ("%d",&n);
		while (n!=0) {
			a=n%10;n/=10;
			if (a%2==0) b++;
			else c++;
		}
		printf ("%d %d ",c,b);
		return 0;
	}
