#include <stdio.h>

int main() {
    int n,cnt = 0,k;
    scanf ("%d",&n);
        int a[n];
        for (int i=0;i<n;++i){
        scanf ("%d",&a[i]);
        }
        long long max=-1e9-1,max2=max;
        for (int i=0;i<n;++i){
            if (a[i]>max) {
                max2=max;
                max = a[i];
            }
            else if (max2 < a[i]) max2=a[i];
        }
        printf ("%lld %lld",max,max2);
        return 0;
}