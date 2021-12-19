#include <stdio.h>
#include <math.h>

int findmax(int a[],int n){
        long long max=-10e9-1;
        for (int i=0;i<n;++i){
            if (a[i]>=max) max=i;
        }
        return max;
}

int main() {
    int n,j,r;
    scanf("%d",&n);
    long long a[10000000];
    for (int i=0;i<n;++i){
    scanf ("%lld",&a[i]);
    }
    int count[10000000];
    for (int i=0;i<n;++i){
        for (int j=i+1;j<n;++j){
            if (a[j]==a[i]) count[i]++;
        }
    }
    int imax=findmax(count,n);
    printf ("%lld %d",a[imax],count[imax]);
    return 0;
}
