#include <stdio.h>

int main() 
{
    int n,i,j,m;
    scanf ("%d",&n);
    for (i=1;i<2*n;++i)
    {
        for (j=1;j<=2*n;++j)
        {
            if ((i<=n && j>n-(i-1) && j<n+i) || (i>n && j >i-n+1 && j<3*n-i)) printf ("~"); else printf ("*");
        }
        printf ("\n");

    }
    return 0;
}