#include <stdio.h>
#include <math.h>
int thuannghich(int n) {
	int a=0,b=0;
	a=n;
	while (n!=0) {
		b=b*10+n%10;
		n/=10;
	}
	if (b==a) return 1;
	return 0;
}


int uoc(int n) {
	int i,a,b,dem=0;b=n;
	for (i= 2;i<=sqrt(b);++i) {
		if (n%i==0){
			while (n%i==0) {
				n/=i;
			};
			++dem;
		}	
	}
	if (n!=1) ++dem;
	if (dem>=3) return 1;
	return 0;
}

int main() {
	int a,b,i;
	scanf ("%d%d",&a,&b);
	for (i=a;i<=b;++i) {
	if (thuannghich(i) && uoc(i) ) printf("%d ",i);
}

return 0;
}
