#include <stdio.h>
#include <math.h>

int count(int n){int i,a;
a=0;
	for (i=1;i<=sqrt(n);++i) {
		if (n%i==0) {
		a++;
		if (i!=n/i) a++;}}
		return a;

}

int main () {
	int n;
	scanf ("%d",&n);
	printf ("%d",count(n));
	return 0;
}
