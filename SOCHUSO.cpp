#include <stdio.h>
#include <math.h>

int main() {
	long long n,i,s;
	s=0;
	scanf("%lld",&n);
	for (i=1;i<=pow(10,18);i*=10) {if (n/i != 0) {s++;} else break;};
	printf("%lld",s);
	return 0;
}

