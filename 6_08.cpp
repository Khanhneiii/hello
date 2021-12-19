#include <stdio.h>

int main() {
        int n,i,j,a;
        scanf ("%d",&n);
        for (i=1;i<=n;++i){
        for (j=1;j<=n;++j)
        if (j==n || j==i || i==1 ) printf("*");
        else if (j<=i-1) printf ("~");
        else printf(".");

        printf("\n");}
        return 0;
}