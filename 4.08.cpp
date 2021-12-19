#include <stdio.h>
#include <math.h>

int thuannghich(int n) {
	int a=0,b=0;
	a=n;
	while (n!=0) {
		b=b*10+n%10;
		n/=10;
	}
	if (b==a) return 1;
	return 0;
}

int chia10(int n){
	int a=0,b=0;
	while (n!=0) {
		a+=n%10;
		n/=10;
	}
	if (a%10==0) return 1;
	return 0;
}

int main() {
	int n,i,dem=0;
	scanf("%d",&n);
	for (i=1ll*pow(10,n-1);i<=1ll*pow(10,n)-1;++i) {
		if (thuannghich(i) && chia10(i)) ++dem;
	}
	printf ("%d ",dem);
	return 0;
}
