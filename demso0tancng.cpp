#include <stdio.h>

int main(){
	int a,n,i,z;z=0;
	long long j=1;
	scanf("%lld",&n);
	for (i=5;i<=n;i*=5){
		z+=n/i;
	}
	printf("%d",z);
	return 0;}