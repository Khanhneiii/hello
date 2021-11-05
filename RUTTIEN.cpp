#include <stdio.h>

int main (){
	int n,x,a,b,c,d,e;
	a=0;
	scanf("%d",&n);
	a=n/100;n-=a*100;
	b=n/20;n-=b*20;c=n/10;n-=c*10;d=n/5;n-=d*5;e=n;
	printf("%d",a+b+c+d+e);
	return 0;
}
