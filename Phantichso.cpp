#include <stdio.h>
#include <math.h>

int main() {
    int i,n,s,a,b,m,c;
    a=0;
    b=0;c=0;
    scanf("%d",&n); m=n;
	for (i=1;i<=m;i++) {
		if (n/2!=0 || n==3) a++;
		if (n%2!=0) {b++;n-=3;}
		else if (n%2==0 && n!=0) {c++;n-=2;};
		if (n==0) break;
	};
	printf ("%d\n",a);
	for (i=1;i<=c;i++) printf ("2 ");
	for (i=1;i<=b;i++) printf ("3 ");
	return 0;
	
	}
