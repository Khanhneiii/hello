#include <stdio.h>

int gcd(int a,int b){
    int tmp;
    while (b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int main() {
    int n;
    scanf ("%d",&n);
    int a[n];
    for (int i=0;i<n;++i)
    scanf ("%d",&a[i]);
    int tmp=a[0],gcd1;
    for (int i=1;i<n;++i){
        gcd1=gcd(tmp,a[i]);
        tmp=gcd1;
    }
    printf("%d ",tmp);
    return 0;
}