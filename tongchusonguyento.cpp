#include <stdio.h>
#include <math.h>

int main() {
    int s,a,b,c;
    c=0;
    long long i,m,n;
    s=0;
    a=1;
    b=0;
    scanf("%lld",&n);
    m=n
    ;for (i=1;i<=m;i++) {
    	s=n%10;
    	for (a=1;a<=s;a++) {
    		if (s%a==0) { b++;
			}
		
		};
		if (b==2) {c++;}
		 else {a=01;
		};b=0;
		n/=10;if (n==0) break;
		};
    printf ("%d ",c);
    return 0;
}
