#include <stdio.h>

int main() {
	int n,i,a,b;
	a=0;b=0;
	scanf("%d",&n);
	for (i=1;i<n;++i) {
		if (n%i==0) a+=i; 
	}
	if (a==n) printf("1"); else printf("0");
	return 0;
}

