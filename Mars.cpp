#include <stdio.h>

int main() {
	int m,n,a,b,c;
	scanf ("%d",&n);
	a=0;
	b=0;
	m=n;
	if (n<=1) {a=1;} else  {b=0;n-=2;a=2;
	for (int i=1;i<=n;i++) {
		if (i%7==0 || i%7==6) {a++;};};
		b=0;
		for (int i=1;i<=m;i++){
		if (i%7==0 || i%7==6) b++;}
	};
	printf ("%d %d",b,a);
	return 0;
}
