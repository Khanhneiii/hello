#include <stdio.h>

int main () {
	int n,i,s,a;
	scanf("%d%d",&n,&s);
	for (i=1;i<=s;i++) {if ((i*n)>=s) {break;}};
	printf("%d",i);
	return 0;
}

