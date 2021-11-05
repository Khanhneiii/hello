#include <stdio.h>

int main (){
	long long n,a,b,c,i,d,e,m;
	d=0;e=0;c=0;n=0;
	scanf("%lld%lld",&a,&b);
	for (i=a;i<=b;i++) {m=i;d=1;c=10;n=0;
	
			while (m!=0){
			d=m%10,m/=10;n=n*c+d;
		//	printf ("%d ",n);
		
			};
		//	printf ("%d ",n);
	
			if (n-i!=0) {c=0;d=0;continue;};
		for (n=2;n<=i;n++) {d=0;
			if (i%n==0) {
						for (c=1;c<=n;c++) {
			if (n%c==0) d++;
			}
			if (d==2) e++;};d=0;}
			if (e>=3) {printf ("%lld ",i);
			};e=0;
			};
			return 0;
		}
			
