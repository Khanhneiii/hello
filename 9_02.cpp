#include <stdio.h>
#include <math.h>
int square(long long n){
    int sqr = sqrt(n);
    if (sqr*sqr==n) return 1;
    return 0;
}

int main() {
    long long n;
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;++i){
    scanf("%lld",&n);
    if (square(n))  printf("YES\n"); else printf("NO\n");
    }
    return 0;
}