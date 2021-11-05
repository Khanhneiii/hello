#include <stdio.h>
#include <math.h>

int main () {
	int n,i,a,b,c,m,d;
	a=1;b=1;c=0;d=0;
	scanf("%d",&n);
	for (i=1;i<n;++i) {m=i;b=1;a=1;c=0;d=0;
		while (i/a>=10){
		b++;a*=10;
		};
	while (m!=0){
			c=m%10;m/=10;
			d+=(int)pow((double)c,(double)b);
		};
		if (d==i) printf("%d ",i);
		};
		return 0;
		}

