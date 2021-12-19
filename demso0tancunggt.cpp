#include <stdio.h>

int main(){
	int a,n,i,z;z=0;
	long long j=1;
	scanf("%lld",n);
	for (i=5;i<=n;i+=5){
		a=i;
		while (a%5==0){
			++z;
			a/=5;
		}
	}
	printf("%d",z);
	return 0;}