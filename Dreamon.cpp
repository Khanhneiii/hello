#include <stdio.h>

int main ()
{
	int m,n,a,b,c,d;c=0;
	scanf ("%d%d",&n,&m);
	int min;
	if (n%2==0) min = n/2;
	else min = n/2+1;
	b = (min + m -1)/m * m;
	if (b>n) printf ("-1");
	else printf ("%d ",b);
	return 0;
}
	
