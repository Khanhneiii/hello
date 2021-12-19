#include <stdio.h>

void sort(int a[],int n){
    int tmp;
    for (int i=0;i<n;++i){
        for (int j=i+1;j<n;++j)
        if (a[i]<a[j]){
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
    printf ("%d\n%d",a[0],a[1]);
}

int main() {
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf ("%d",&a[i]);
    long long max=-10e9-1,max2=max;
    for (int i=0;i<n;++i){
        if (a[i]>max){
            max2=max;
            max=a[i];
        }
        else if (a[i]>max2) max2=a[i];
    }
    printf ("%lld\n%lld",max,max2);
    return 0;
}