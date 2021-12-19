#include <stdio.h>
#include <math.h>

int gcd(int a,int b){
    int tmp;
    while (a*b!=0) {
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}


long long lcm(int a,int b) {
    return (a*b)/gcd(a,b);
}

long long min(int x,int y,int z,long long n){
    long long start = 1ll*pow(10,n-1);
    long long end =1ll* pow(10,n)-1;
    long long boi=lcm(lcm(x,y),z);
    long long tich=1ll*x*y*z;
    if (boi>=start && boi <=end) return boi;
    if (boi>end) return -1;
    long long ans=(start+boi-1)/boi*boi;
    if (ans<=end) return ans;
return -1;
}

int main() {
    int x,y,z,n;
    scanf ("%d%d%d%d",&x,&y,&z,&n);
    printf ("%lld ",min(x,y,z,n));
    return 0;
}