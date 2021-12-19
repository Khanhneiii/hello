#include <stdio.h>

int fibo(int n){
	int i,a,b,c;
	a=0;b=1;
	for (i=2;i<=92;i++) {
		c=a+b;
		a=b;
		b=c;
		if (n==c) return 1;
	}
	return 0;
}

int main() {
	int n;
	scanf ("%d",&n);
	if (fibo(n)) printf ("1"); else printf("0");
	return 0; 
}
