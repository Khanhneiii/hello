#include <stdio.h>

int main() {
    int n,a,b,i,j,m;
    scanf ("%d",&n);m=n;
    for (i=1;i<=n*2-1;++i)
    {
        for (j=1;j<=m;++j)
        {
            if ((i<=n && j<=(i-1)*2) || (i>n && j<=m-(i-(n-1)))) printf ("~"); else printf ("*");
            
        }
        if (i>=n) --m; else ++m;
        printf("\n");
    }
    return 0;
}