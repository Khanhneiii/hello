#include <stdio.h>

int num(long long n){
    while (n!=0){
        if (n%10!=0 && n%10!=6 && n%10!=8) return 0;
        n/=10;
    }
    return 1;
}

int main() {
    long long n;
    scanf ("%lld",&n);
    if (num(n)) printf("1"); else printf("0");
    return 0;
}