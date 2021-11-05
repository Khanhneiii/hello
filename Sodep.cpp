#include <stdio.h>
#include <math.h>

int main() {
    int s,a,b;
    long long i,m,n;
    s=0;
    a=0;
    b=0;
    scanf("%lld",&n);
    m=n
    ;for (i=1;i<=m;i++) {
    	s=n%10;
    	if (s % 2 == 0) {a++;}
    	else {b++;};
		n/=10;if (n==0) break;
		};
		if (a==b) printf ("YES"); else printf("NO");
	
    return 0;
}
