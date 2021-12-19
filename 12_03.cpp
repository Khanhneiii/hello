#include <stdio.h>

int main() {
    int n,count = 0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    long long min=10e9+1,min2=min,min3=min;
    for (int i=0;i<n;++i){
        if (a[i]<min){
            min3=min2;
            min2=min;
            min=a[i];
        }
        else if (a[i]<min2) {
            min3=min2;
            min2=a[i];
        }
        else if (a[i]<min3) min3=a[i];
    }
    printf("%lld %lld %lld",min3,min2,min);
    return 0;
}