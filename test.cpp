#include <stdio.h>
double tong(int n){
	int i;
double s=0;
	for (i=1;i<=n;i++) {
		s+=1/(double)i;	
	}
	return s;
	
};
int main() {
	int m;
	scanf ("%d",&m);
	double sum=tong(m);
	printf("%lf",sum);
	return 0;
}
