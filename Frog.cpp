#include <stdio.h>

int main()
{
	int a,b,k,x,y;
	scanf ("%d%d%d",&a,&b,&k);
	if (k%2 == 0) {y=k/2;x=k/2;} else {y=k/2;x=k/2+1;};
	printf("%d",x*a-y*b);
	return 0;
}
	
