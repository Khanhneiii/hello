#include <stdio.h>
#include <math.h>
int check(int n){
    for (int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;

    return n>1;        
}

int main() {
    int n,cnt=0,sum = 0;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for (i=0;i<n;++i)
        for (j=0;j<n;++j)
            scanf("%d",&a[i][j]);
    for (int i=0;i<n;++i){
        if (check(a[i][i])) {
            sum+=a[i][i];
        }
        if (n-i-1!=i && check(a[i][n-i-1]))
            sum+=a[i][n-i-1];
    }
    printf("%d",sum);
    return 0;
}