#include <stdio.h>

int main() {
    int n,i,j,a,b,c;
    scanf ("%d",&n);
    for (i=0;i<=n-1;++i){
        for (j=1;j<=n;++j){
            if (j+i>=n) printf ("%d",n); else printf ("%d",j+i);
        }
        printf("\n");

    }
    return 0;
}