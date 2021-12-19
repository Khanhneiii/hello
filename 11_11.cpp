#include <stdio.h>
#include <math.h>
#define ll long long 


ll min(ll a,ll b,ll c){
    if ((a-b)<(b-c)) return (a-b);
    else return (b-c);
}

ll max (ll a,ll b,ll c){
    if ((b-a)>(c-b)) return (b-a);
    else return (c-b);
}

int main() {
    int n;
    scanf ("%d",&n);
    ll a[n];
    for (int i=0;i<n;++i)
    scanf ("%lld",&a[i]);
    printf ("%lld %lld\n",a[1]-a[0],a[n-1]-a[0]);
    for (int i=1;i<n-1;++i)
    printf ("%lld %lld\n",min(a[i+1],a[i],a[i-1]),max(a[0],a[i],a[n-1]));
    printf("%lld %lld\n",a[n-1]-a[n-2],a[n-1]-a[0]);
    return 0;
}