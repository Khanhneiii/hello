#include <stdio.h>
#include <math.h>

long long binpow(int a,int b) {
    if (b==0) return a;
    long long ans=1ll*pow(a,b/2);
    if (b%2==0) return 1ll*ans*ans;
    else return 1ll*a*ans*ans;
}

int main() {
    int a,b,t;
    scanf ("%d",&t);
    for (int i=1;i<=t;++i) {
    scanf ("%d%d",&a,&b);
    printf ("%lld\n",binpow(a,b));
    }
    return 0;
}