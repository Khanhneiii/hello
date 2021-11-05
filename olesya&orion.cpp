#include <stdio.h>
#include <math.h>

int main() { 
	int a,b,c,d;
	long long i,n,s;
	scanf("%lld%d",&n,&a);
	s=1ll*(pow(10,(double)n)-1);
	n*=1ll*pow(10,(double)n-1);
	for (i=n;i<=s;i++) {if(i%a==0) {printf("%lld",i);c++;break;}};
	if (c=0) printf ("-1");
	return 0;  
}
