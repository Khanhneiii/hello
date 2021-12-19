#include <stdio.h>

int main() {
    int i,j,tmp,index2;
    int m,n;
    scanf ("%d",&n);
    int a[n][n];
    for (i=0;i<n;++i)
        for (j=0;j<n;++j)
         scanf("%d",&a[i][j]);

    for(j=n-1;j>=0;--j){
        for (i=0;i<n;++i){
            printf ("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}