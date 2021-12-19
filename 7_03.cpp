#include <stdio.h>

int main()
{
    int n,i,a,j;
     scanf ("%d",&n);a=1;
    for (i=1;i<=n;++i){
        for (j=1;j<=n;++j){
            printf("%d ",a);
            ++a;
        }
        printf("\n");
    }return 0;
}