#include <stdio.h>
#include <math.h>

int ngt(int n){
    if (n<=1) return 0;
    for (int i=2;i<=sqrt(n);i++)
    if (n%i==0) return 0;
    return 1;
}

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
        scanf("%d",&a[i][j]);
    for (int i=0;i<n;++i){
        if (ngt(a[i][i]) || ngt(a[i][n-i-1])) cnt++;
    }
    printf ("%d",cnt);
    return 0;
}