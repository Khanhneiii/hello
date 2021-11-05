#include <stdio.h>

int main () {
	int n,a,b,i,f,c,d,e,x;
	a=0;b=0;c=0;f=0;x=0;
	scanf ("%d",&n);
		while (n!=0) {e=1
			;c=n%10;n/=10;
			for (d=1;d<=c;d++) e*=d;
		f+=e
		;};
		if (f==n) {printf("1");} else printf("0");

		return 0;
		
	}
