#include <stdio.h>
#include <math.h>

int main () {
	long long n,a,i,s,b;
	a=1;
	scanf ("%lld",&n);
	for (i=1;i<=n;i++) {
		a*=i;
	};long long m=a;printf ("%lld",a);
/*	for (i=1;i<=m;i++){
		b=a%10;a/=10
		;if (b==0) s++; else break;
	};*/
	printf("%lld",s);
	return 0;
}
