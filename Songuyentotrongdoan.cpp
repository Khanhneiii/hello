#include <stdio.h>

int main (){
	int n,a,b,c,i;
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;i++) {
		for (n=1;n<=i;n++) {
			if (i%n==0) c++;
	};
			if (c==2) printf ("%d ",i);
		c=0; };
		return 0;
	}
