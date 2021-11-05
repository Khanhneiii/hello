#include <stdio.h>
#include <math.h>
int main (){
	int n,a,b,c,i,d,e;
	b=0;c=0;a=0;e=0;
	scanf("%d",&n);
	for (i=1ll*pow(10,n-1);i<=1ll*pow(10,n)-1;++i) {
		a=i;b=0;
		while (a!=0){
			d=a%10,a/=10;b=b*10+d;e+=d;};
			if (i-b==0 && e%10==0) {c=0;d=0;printf("%d ",i);};
	}
	return 0;
}
