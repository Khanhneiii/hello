#include <stdio.h>
#include <math.h>

int check(int n) {
    for (int i=2;i<=sqrt(n);++i){
        if (n%i==0) return 0;
    }
    return n > 1;
}

long long gt(int n){
    long long s=1;
    for (int i=2;i<=n;++i){
        s*=i;
    }
    return s;
}

int main() {
    int n;
    scanf("%d",&n);
    int m=n;
    long long s=0;
    while (n!=0){
        if (check(n%10)) s+=gt(n%10);
        n/=10;
    }
    printf ("%lld",s);
    return 0;
}