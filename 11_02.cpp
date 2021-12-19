#include <stdio.h>
#include <math.h>

int check(int n){
    if (n<=1) return 0;
    for (int i=2;i<=sqrt(n);++i)
    if (n%i==0) return 0;
    return 1;
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;++i){
    scanf("%d",&a[i]);
    if (check(a[i])) count++ ;
    }
    printf ("%d",count);
    return 0;
}