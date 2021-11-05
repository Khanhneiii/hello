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
    	if (s % 2 == 0) {a+=s;}
    	else {b+=s;};
		n/=10;if (n==0) break;
		};
    printf ("%d %d",a,b);
    return 0;
}
