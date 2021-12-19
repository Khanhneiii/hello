#include <stdio.h>

long long gt(long long n) {
    long long gt=1;
    if (n<=1) return 1;
    for (int i=2;i<=n;++i) {
        gt*=i;
    }
    return gt;
}

int main() {
    int n;
    scanf ("%d",&n);
    printf ("%lld",gt(n));
    return 0;
}