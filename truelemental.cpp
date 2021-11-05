#include <stdio.h>

int main (){
	int n,a,b,i,c,d,e,f,m;
	d=0;e=0;f=0;c=0;
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;i++) {e=0;d=0;c=0;m=i;
		for (n=1;n<=i;n++) {
			if (i%n==0) c++;
			};
		if (c!=2) continue;
	
			c=0;
			while (m!=0) {
				c=m%10;m/=10;
				if (c==2 || c==3 ||c==5 || c==7) d+=c; else break;
			};
			if (m!=0) break;
			for (c=1;c<=d;c++) {
				if (d%c==0) e++;
			};
			if (e==2) f++;
		};
		printf ("%d ",f);
		return 0; 
	}
