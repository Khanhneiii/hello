#include <stdio.h>

int main() {
    int n;
    scanf ("%d",&n);
    int a[n],b[2];
    long long min=10e9+1;
    for (int i=0;i<n;++i){
    scanf ("%d",&a[i]);
    if (a[i]<min) {
        min=a[i];
        b[0]=i;
    }
    }
    min=10e9+1;
    for (int i=0;i<n;++i){
        if (a[i]<min && a[i]!=a[b[0]]){
            b[1]=i;
            min=a[i];
        }
    }
    printf ("%d %d\n%d %d",a[b[0]],b[0]+1,a[b[1]],b[1]+1);
    return 0;
}