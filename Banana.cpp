#include <stdio.h>
#include <math.h>

int main(){
	int k,n,w;
	scanf("%d%d%d",&k,&n,&w);
	int m=w*(1+w)*k/2;
	if (m<=n) {printf("0");} else {printf("%d",m-n);}
	return 0;
	}
