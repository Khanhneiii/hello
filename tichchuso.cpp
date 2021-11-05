#include <stdio.h>

int main() {
    long long n,a,b,c,i;a=0;b=1;
    scanf ("%lld",&n);
    while (n!=0){
        a=n%10;n/=10;b*=a;
    };
    printf ("%lld",b);
    return 0;
}
