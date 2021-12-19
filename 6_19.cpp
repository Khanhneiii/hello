#include <stdio.h>

int main() 
{
    int n,i,j,m;
    scanf("%d",&n);m=n;
    for (i=1;i<2*n;++i)
    {
        for (j=1;j<2*m;++j)
        {
            if ((i<=n && j<=n-i) || (i>n && j<=i-n)) {printf ("~"); continue;}; printf("*");
        }

        if (i>=n) ++m; else m--;
        printf ("\n");
    }
    return 0;
}