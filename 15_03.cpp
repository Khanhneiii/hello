#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    long long max =-1e9-1,index1,min = -max,index2;
    for (int i=0;i<n;++i){
            scanf("%d",&a[i]);
            if (a[i] > max) {
                max =a[i];
                index1 = i;
            }
            if (a[i] <= min ){
                min =a[i];
                index2 = i;
            }
    }
    printf ("%lld %lld\n%lld %lld",max,index1+1,min,index2+1);
    return 0;
}