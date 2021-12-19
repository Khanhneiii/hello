#include <stdio.h>

int main() {
    int i,j,tmp,index2;
    int m,n;
    scanf ("%d",&n);
    int a[n][n];
    for (i=0;i<n;++i)
        for (j=0;j<n;++j)
         scanf("%d",&a[i][j]);

    long long max2=-1e9-1;
    for (j=0;j<n;++j){
        tmp = 0;
        for (i=0;i<n;++i)
        tmp+=a[i][j];
        if (tmp > max2) {
            max2 = tmp;
            index2 = j;
        }
    }
    printf ("%d\n",index2+1);
    for (int i=0;i<n;++i)
        printf ("%d ",a[i][index2]);
    return 0;
}