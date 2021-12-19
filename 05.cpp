#include <stdio.h>

int main() {
    int n,a,b,i,c,j;
    scanf("%d",&n);
    for (i=1;i<=n;++i) {
        for (j=1;j<=i;++i) printf("*");
        printf("\n");
    }
    for (i=n-1;i>0;++i)
     for (j=1;j<=i;++i) printf("*");
        printf("\n");
    }
    return 0;

}