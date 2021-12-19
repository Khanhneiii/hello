#include <stdio.h>
#include <math.h>
#define ll long long
int ngto(ll n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);++i)
    if (n%i==0) return 0;
    return 1;
}

int shh(ll n) {
    int i,tich,tmp;
    for (i=1;i<=32;++i) {
        if (ngto(i)){
            ll tmp=(ll)pow(2,i)-1;
            if (ngto(tmp)) {
                ll tich = tmp*(ll)pow(2,i-1);
            if(tich==n) return 1;
            }
        }
    }
    return 0;
}

int main() {
    ll n;
    int t;
    scanf ("%d",&t);
    while (t--){
    scanf ("%lld",&n);
    if (shh(n)) printf("YES\n");
    else printf("NO\n");
}
return 0;
}