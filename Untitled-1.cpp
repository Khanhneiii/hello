#include <stdio.h>

int main() {
    int i,j,tmp,index,index2;
    int m,n;
    scanf ("%d%d",&m,&n);
    int a[m][n];
    for (i=0;i<m;++i)
        for (j=0;j<n;++j)
         scanf("%d",&a[i][j]);

    long long max2=-1e9-1;
    for (j=0;j<n;++j){
        tmp = 0;
        for (i=0;i<m;++i)
        tmp+=a[i][j];
        if (tmp > max2) {
            max2 = tmp;
            index2 = j;
        }
    }