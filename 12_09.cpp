#include <stdio.h>

void find(int a[],int n){
    long long max=-10e9,min=-max;
    for(int i=0;i<n;++i){
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    } 
    printf ("%lld %lld",min,max); 
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf ("%d",&a[i]);
    find(a,n);
    return 0;
}