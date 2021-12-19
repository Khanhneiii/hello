#include <stdio.h>
#include <math.h>

int check(int n){
    int i=sqrt(n);
    if (i*i==n) return 1;
    return 0;
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (check(a[i])) {
            count+=a[i];
        }
    }
    printf("%d ",count);
    return 0;
}