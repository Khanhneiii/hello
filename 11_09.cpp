#include <stdio.h>
#define ll long long


void find(ll a[],int n){
    ll min=10e9+1,max=-10e9-1;
    ll b[2];
    for (int i=0;i<n;++i){
        if (a[i]>=max) {
            max=a[i];
            b[0]=i;
        }
        if (a[i] < min){
            min = a[i];
            b[1]=i;
        }
    }
    printf("%lld %lld\n%lld %lld",max,b[0]+1,min,b[1]+1);
}

int main() {
    int n;
    ll a[100000];
    scanf("%d",&n);
    for (int i=0;i<n;++i)
    scanf("%lld",&a[i]);
    find(a,n);
}
