#include <stdio.h>
#include<math.h>

int main ()
{
	double a,b,c,x1,x2,x3;
	scanf ("%lf%lf%lf",&x1,&x2,&x3);
a= sqrt(x1*x3/x2);
b= x1/a;
c= x3/a;
	printf ("%.lf",1ll*a*4+b*4+c*4);
	return 0;
	
}
