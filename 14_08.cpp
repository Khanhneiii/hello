#include <stdio.h>
#include <math.h>
int check(int n){
    for (int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;

    return n>1;        
}

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for (i=0;i<n;++i)
        for (j=0;j<n;++j)
            scanf("%d",&a[i][j]);
    for (int i=0;i<n;++i)
        if (check(a[i][n-i-1]) || check(a[i][i])) cnt++;
    printf("%d",cnt);
    return 0;
}