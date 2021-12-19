#include <stdio.h>

long long fb(int n) {
    if (n<=1) return n;
    return fb(n-1)+fb(n-2);
}

int main () {
    int n;
    scanf("%d",&n);
    printf ("%lld",fb(n));
    return 0;
}