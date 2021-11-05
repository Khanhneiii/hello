#include <stdio.h>

void uoc(int i){
	int a,b;b=0;
	for (a=1;a<i;a++) if (i%a==0) b+=a;
	if (i==b) printf("%d ",i);
}

int main() {
	int n,i,a,b;
	scanf ("%d",&n);
	for (i=1;i<n;++i) {
		uoc(i);
//	if (uoc(i)) printf("%d ",i);
	}
		return 0;
	} 
