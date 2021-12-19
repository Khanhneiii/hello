#include <stdio.h>
#include <math.h>
int main() {
    int n,cnt=1;
    long long c;
    scanf("%d%lld",&n,&c);
    long long a[n];
    for (int i=0;i<n;++i){
        scanf ("%lld",&a[i]);
    }
    for (int i=1;i<n;++i)
    if (a[i]-a[i-1]<=c) cnt++;
    else cnt=1;
    printf("%d ",cnt);
         return 0;
}