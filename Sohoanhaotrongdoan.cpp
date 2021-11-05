#include <stdio.h>

int main (){
	int n,a,b,i,c;
	c=0;
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;i++) {c=0;n=1;
		for (n=1;n<i;++n) {
			if (i%n==0) c+=n;
		};
		if (c==i) printf("%d ",i);};
		return 0;
	}
