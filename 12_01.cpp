#include <stdio.h>

int main() {
    int n,count = 0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf("%d",&a[i]);
    long long max=-10e9-1,max2=max,max3=max;
    for (int i=0;i<n;++i){
        if (a[i]>max){
            max3=max2;
            max2=max;
            max = a[i];
        }
        else if (a[i]>max2) {
            max3=max2;
            max2=a[i];
        }
        else if (a[i]>max3) max3=a[i];
    }
    printf("%d %d %d",max,max2,max3);
    return 0;
}