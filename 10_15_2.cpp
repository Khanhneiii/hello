#include <stdio.h>
#include <math.h>

int dx(int a[], int n){
    int count=0;
    for (int i=0;i<=n/2;++i)
        if (a[i]!=a[n-1-i]) return 0;
        return 1;
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf ("%d",&a[i]);
    printf ("%d",dx(a,n));
    return 0;
}