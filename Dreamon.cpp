#include <stdio.h>

int main ()
{
	int m,n,a,b,c,d;c=0;
	scanf ("%d%d",&n,&m);
	for (a=0;a<=n;a++) {b=(n-a)/2; {if ((a+b)%m ==0 && (2*b+a)==n) {printf ("%d",a+b);c++;break;} };};
	if (c==0) {printf("-1");};
	return 0;
}
	
