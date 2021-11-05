#include <sTdio.h>

int main() {
	long long d1,d2,d3;
	scanf("%lld%lld%lld",&d1,&d2,&d3);
	if (d2-d1==d3) {printf("%lld",d3);}
	else if (d3>d1 & d3>d2) {printf("%lld",2*(d1+d2));}
	else if (d2==d1 & d1==d3) {printf ("%lld",d1+d2+d3);}
	else if(d2>=d1+d3) {printf("%lld",2*d3+2*d1);}
	else if (d2<d3+d1) {if (d2<d1) {printf("%lld",2*(d3+d2));};}
	
	return 0;
	}
