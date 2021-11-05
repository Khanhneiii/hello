#include<stdio.h>

int main () {
	int n,i,a,b,c,m;
	b=1;i=2;c=0;a=0;
	scanf ("%d",&n);m=n;
	for (i=2;b!=m;i++)
	{a=0;c=1; if (n%i==0) {
	for (c=1;c<=i;c++) {
			if (i%c==0) a++;};	
	};
		if (a==2 && n%i==0) {b*=i;n/=i;printf("%d ",i);};
		if (i>=n) break;
	};
	return 0;
			
		}
