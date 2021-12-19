#include <stdio.h>
#include <math.h>

int ngto(int n) {int i;
	if (n<2) return 0;
	for (i=2;i<=(int)sqrt(n);++i) 
	if (n%i==0) return 0;
	return 1;
}

int tach(int n){int a=0;int b=0;
	while (n!=0) {
		a=n%10;b+=a;
		n/=10;
		if (ngto(a)==0 || ngto(b)==0) return 0;
	}
	return 1;
}

int main () {
	int a,b,i;
	int c=0;
	scanf ("%d%d",&a,&b);
	for (i=a;i<=b;++i) 
	if (ngto(i) && tach(i)) c++;
	printf ("%d ",c);
	return 0;
}
