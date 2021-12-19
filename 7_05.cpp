#include <stdio.h>

int main()
{
    int n,i,a,j;a=0;
     scanf ("%d",&n);
     for (i=1;i<=n;++i){a=0;
         for (j=0;j<i;++j){
         if (j==0) a=i;
         else a+=n-j;
         printf("%d ",a);
         }
         printf("\n");
     }
     return 0;
}