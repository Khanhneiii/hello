
#include <stdio.h>
#include <math.h>
long long eu(long long n) { // = n (1-1/p1) ... (1-1/pn)
    if (n == 0) return 0;
    long long ans = n;
    for (int i = 2; i<=sqrt(n); ++i) {
        if (n % i == 0) {
            ans -= ans / i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}

int main() {
    long long n;
    scanf("%lld",&n);
    printf ("%lld ",eu(n));
    return 0;
}