#include <stdio.h>
#include <math.h>

int main()
{
    double n,i;
    double s=0;
    i =1;
    scanf("%lf",&n);
    for (i=1;i<=n;i++) { printf ("%d ",i); printf("%lf ",s) ;s=s+ 1/(i*(i+1))
	; printf("%lf ",s);}
	printf("%.2lf",s);
   
    return 0;
}
