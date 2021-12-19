#include <stdio.h>

int main() 
{
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;++i)
    {
        for(j=1;j<=n;j++)
        {
            if (j==n||j==n-(i-1) || i==n) printf ("*");
            else if (j<=n-i) printf ("~");
            else if("j<n && j>n-i")  printf (".");
        }
        printf("\n");
    }
    return 0;
}