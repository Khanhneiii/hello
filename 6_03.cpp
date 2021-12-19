#include <stdio.h>

int main() {
    int n,m,a,b,i;
    scanf ("%d",&n);
    m=n;
    for (i=1;i<=n;++i)
    {
        for (a=1;a<m;a++) printf("~");
        for (b=1;b<=n;++b) printf ("*");
        m--;printf("\n");
    }
    
    return 0;
}
