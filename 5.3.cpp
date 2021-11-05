#include <stdio.h>

int main () {
	int n,i,a,b;
	a=0;b=0;
	scanf ("%d",&n);
	i=n;
	while (n!=0)
{
	a=n%10; n/=10;
	if (n==0) printf ("%d ",a);
};
printf ("%d ",i%10);
return 0;
}
