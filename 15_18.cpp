#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    for (i=0;i<m;++i)
        for (j=0;j<n;++j)
            scanf("%d",&a[i][j]);
    int x,y;

    scanf("%d%d",&x,&y);
        x--;
         y--;
    for (i=0;i<m;++i){
        int tmp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = tmp;
    }
    for (i=0;i<m;++i){
        for (j=0;j<n;++j)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}