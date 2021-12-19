#include <stdio.h> 
#include <math.h>

int chia(int n) {
	int i,a,b;
	for (i=2;i<=sqrt(n);++i) {
		if (n%i==0 && n%(i*i)==0) return 1;
	}
	return 0;
	}
	
	int main() {
		int a,b,i;
		scanf("%d%d",&a,&b);
		for (i=a;i<=b;++i) 
		if (chia(i)) printf("%d ",i);
		return 0;
	}
