#include <stdio.h>

int main() {
int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][n] = {0};
    for (i=0;i<n;++i)
    for (j=0;j<m;++j)
        scanf("%d",&a[i][j]);
        for (i=0;i<n;++i){
                for (int h=0;h<n;++h)
                    for (j=0;j<m;++j)
                        b[i][h]+=a[i][j]*a[h][j];
            }
    for (i=0;i<n;++i){
        for (j=0;j<n;++j)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
    

