#include <stdio.h> 
#include <math.h>

int ngto(int n) {
	int i;
		for (i=2;i<=sqrt(n);++i) {
			if (n%i==0) return 0;
		}
		return 1;
}

int dao(int n){
	int i,a,b;a=0;
	while (n!=0) {
		a=a*10+n%10;
		n/=10;
	}
	if (ngto(a)) return 1;
	return 0;
}

int main () {
	int a,b,i;
	scanf("%d%d",&a,&b);
	for (i=a;i<=b;++i) {
		if (ngto(i) && dao(i)) printf("%d ",i);
	}
	return 0;
}
