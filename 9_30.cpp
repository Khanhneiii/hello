#include <stdio.h>
#include <math.h>

int gcd(int a,int b){
    int tmp;
    while (a*b!=0) {
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}


long long lcm(int a,int b) {
    return (a*b)/gcd(a,b);
}


int main() {
    long long a,b;
    scanf ("%lld%lld",&a,&b);
    printf ("%d %lld",gcd(a,b),lcm(a,b));
    return 0;
}