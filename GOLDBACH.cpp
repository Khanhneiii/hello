#include <stdio.h>
#include <math.h>

int main (){
	int n,x,y,a,b,i,o;
	a=0;b=0;
	scanf ("%d",&n);
	for (x=n-1;x>3;x--) {for (i=1;i<=x;i++) {if (x%i==0) {a++;};if (a>=3) {break;}}; 
	 if (a<3) {a=0;}else  {y=n-x;for (o=1;o<=y;o++) {if (y%o==0) {b++;}}; 
	 if (b<3 ) {b=0;};}; if (a>=3 & b>=3 ) {break;} else {a=0 ; b=0;}};
	printf ("%d %d ",x,y);
	return 0; 
}

