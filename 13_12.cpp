#include <stdio.h>

int main() {
    int i,j,tmp,index,index2;
    int m,n;
    scanf ("%d%d",&m,&n);
    int a[m][n];
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
    for (int i=index;i<m;++i){
        for (int j=0;j<n;++j)
            a[i][j]=a[i+1][j];
    }
    m--;

    long long max2 = -1e9-1;
    for (j=0;j<n;++j){
        tmp = 0;
        for (i=0;i<m;++i)
        tmp+=a[i][j];
        if (tmp > max2) {
            max2 = tmp;
            index2 = j;
        }
    }

    for (int j=index2;j<n;++j)
        for (int i=0;i<m;++i)
        a[i][j]=a[i][j+1];
    n--;
    //printf ("%d %d\n",index,index2);
    for (int i=0;i<m;++i){
        for (int j=0;j<n;++j)
        printf("%d ",a[i][j]);
        printf ("\n");
    }
    return 0;

}
