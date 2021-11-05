	#include <stdio.h>
	
	int main() {
		int n,a,b,c,i;
		a=0;b=0;c=0;
		scanf ("%d",&n);
		while (n!=0) {
			a=n%10;n/=10;
			if (a==0 || a==6 || a==8) b=1; else {b=0; break;};
			};
			printf ("%d ",b);
			return 0;
		}
			
