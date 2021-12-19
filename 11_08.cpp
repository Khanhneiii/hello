#include <stdio.h>
#include <math.h> 

long long gcd(long long a,long long b){
    if (b==0) return a;
    return gcd(b,a%b);
} 

int main() {    
    int n;
    scanf ("%d",&n);
    long long a[n],b[n];
    for (int i=0;i<n;++i)
    scanf("%lld",&a[i]);
    int count=0,j=0;
    long long x;
    scanf ("%lld",&x);
    for (int i=0;i<n;++i){
        if (gcd(a[i],x)==1) {
            b[j]=a[i];
            j++;
        }
    }
    printf ("%d \n",j);
    for (int i=0;i<j;++i)
    printf ("%lld ",b[i]);
}