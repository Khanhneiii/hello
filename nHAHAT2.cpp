#include <stdio.h>
#include <math.h>

int main (){
	long long m,n,a,x;
	scanf ("%lld%lld%lld",&n,&m,&a);
	x=m*n;int b=0;int z;
	for ( int i=1;i<=(2*x/(a*a));i++) {for (int o=0;o<=20;o++) {for (z=0;z<=20;z++)
	 {if ((i*a*a)==x+o*1/m+z/n ) {b++;} ;};};if (b>0) {printf("%d",i);break;} else {z=0;};};
	return 0;
}
