#include <stdio.h>

int main() {
	int d,e,c,n,i,a,b;
	n=0;i=0;d=0;e=0;
	scanf("%d%d",&a,&b);
	if (a>b) {c=b;b=a;a=c;
	};
	for (i=a;i<=b;++i) {d=0;
		for (n=1;n<i;++n){
			if (i%n==0) {d+=n;
			};
		};
		if (d==i) {printf ("%d ",i);e++;};
		};
		if (e==0) printf ("0");
		return 0;
	}
