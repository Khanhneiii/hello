#include <stdio.h>

int main ()
{
	int m,n,a;
	scanf ("%d%d",&n,&m);
	if (n>m & n<(2*m) & n<m) {printf ("-1");}
	else if (m<=5) {a=m*2;n-=a*2;if ((a+n)%m==0) {printf("%d",a+n);} else {printf("-1");}}
	else if (m>5) {a=m-1;n-=a*2;if ((a+n)%m==0) {printf("%d",a+n);} else {printf("-1");}}
		else if (n>=(2*m)) {n-=(m+1)*2;a=m+1+n;if (a%m==0) {printf("%d",a);} else {printf("-1");};}

	return 0;
}
	
