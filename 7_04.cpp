#include <stdio.h>

int main()
{
    int n,i,a,j;
     scanf ("%d",&n);
     for (i=1;i<=n;++i){
        for (j=1;j<=n;++j){
            if (j>n-i) printf ("%d",i); else printf ("~");
        }
        printf("\n");
     }
     return 0;
}