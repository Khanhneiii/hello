#include <stdio.h>

int main() {
	int n,m,a,b,i,j;
	scanf ("%d",&n);m=n;
	for (i=1;i<=n;++i){
		for (j=1;j<=m;++j){
			if (i==1 || j==1 || j==m) printf("*"); else printf(".");
		}
		m--;printf("\n");
	}
}
