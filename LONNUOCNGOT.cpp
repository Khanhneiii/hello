#include <stdio.h>

int main() {
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	if (a<=(float)b/2) {printf ("%lld",1ll*n*a);}
	else {printf("%lld",1ll*n*b-2*b+a);}
	return 0;
}
	
