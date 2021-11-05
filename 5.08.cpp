#include <stdio.h>

int main() {
    long long n,i,a;i=0;
    scanf("%lld",&n);
    while (n!=0){
        i++;
        n/=10;
    };
    printf("%lld",i);
    return 0;
}
