#include<stdio.h>

int main () {
	int n,i,a,b,c,m;
	b=1;i=2;c=0;a=0;
	scanf ("%d",&n);m=n;
	while (n!=0 || b!=m)
	{a=0; if (n%i!=0) i++; else {
	for (c=1;c<=i;c++) {//printf ("%d ",i);
			if (i%c==0) a++;};
		if (a==2 && n%i==0) {b*=i;n/=i;printf("%d ",i);};
		if (m==b) break;
		};
		
	};
	return 0;
			
		}
