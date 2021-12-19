#include <stdio.h>

int main() {
    int i,j,tmp,index,index2;
    int m,n;
    scanf ("%d%d",&m,&n);
    int a[1000][1000];
    for (i=0;i<m;++i)
        for (j=0;j<n;++j)
         scanf("%d",&a[i][j]);
    long long max=-1e9-1;
 
    for (i=0;i<m;++i){
        tmp=0;
        for (j=0;j<n;++j)
        tmp+=a[i][j];
        if (tmp > max) {
            max = tmp;
            index = i;
    }
    }
    long long max2 = -1e9-1;
    for (j=0;j<n;++j){
        tmp = 0;
        for (i=0;i<m;++i)
        tmp+=a[i][j];
        if (tmp > max) {
            max2 = tmp;
            index2 = j;
        }
    }
    for (i=0;i<m;++i){
        for (j=0;j<n;++j)
        if (i!=index && j!=index2) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;

}
