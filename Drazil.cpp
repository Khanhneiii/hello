#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,k,x,y;
	scanf ("%d%d%d",&x,&y,&k);
	a=abs(x);
	b=abs(y);
	if(k<(a+b)) {printf ("No");} 
	else if (k==(a+b)) {printf ("Yes");}
	else if (k>a+b) {x=(k-(a+b)); if (x%2==0) {printf ("Yes");} else {printf("No");};}
	return 0;
}

