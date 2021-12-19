#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    long long min=1e9+1,min2 = min;
    for (int i=0;i<n;++i){
            scanf("%d",&a[i]);
            if (a[i] < min) {
                min2=min;
                min =a[i];
            }
            else if (a[i] < min2){
                min2 =a[i];
            }
    }
    printf ("%lld %lld",min,min2);
    return 0;
}