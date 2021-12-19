#include <stdio.h>
#include <math.h>

int check(long long n){ 
    if (n<=1) return 0;  
    long long i=sqrt(n);
    if (i*i==n) return 1;
    return 0;
}

int main() {
    int n,j=0;
    scanf("%d",&n);
    long long a[n],b[n];
    for (int i=0;i<n;++i){
        scanf ("%lld",&a[i]);
        if (check(a[i])) {
            b[j]=a[i];
            j++;
        }
    }
    printf ("%d\n",j);
    for (int i=0;i<j;++i)
    printf ("%lld ",b[i]);
    return 0;
}