#include <stdio.h>
#include <math.h>

int main() {
    int s;
    long long i,m,n;
    s=0;
    scanf("%lld",&n);
    m=n
    ;for (i=1;i<=m;i++) {
    	s+=n%10;n/=10;if (n==0) break;
		};
    printf ("%d",s);
    return 0;
}
