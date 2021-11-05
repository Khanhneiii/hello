#include <stdio.h>

int main () {
	int n,a,b,i,f,c,d,e,x;
	a=0;b=0;c=0;f=0;x=0;
	scanf ("%d%d",&a,&b);
	for (i=a;i<=b;++i) {
		c=i;
		while (c!=0) {e=1
			;n=c%10;c/=10;
			for (d=1;d<=n;d++) e*=d;
		f+=e
		;};
		if (f==i) {x++;printf("%d ",i);}
		f=0;
		};
		if (x==0) printf("0");
		return 0;
		
	}
