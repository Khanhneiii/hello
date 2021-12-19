#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for (i=0;i<n;++i)
        for (j=0;j<n;++j)
            scanf("%d",&a[i][j]);
    for (i=0;i<n;++i){
        for (j=0;j<n;++j){
            for (int k=j+1;k<n;++k)
                if (a[k][i] > a[j][i]){
                    int tmp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = tmp;
                }
        }
    }
    for (i=0;i<n;++i){
        for (j=0;j<n;++j)
            printf ("%d ",a[i][j]);
            printf("\n");
    }
    return 0;
    
}