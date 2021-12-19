#include <stdio.h>
#include <math.h>

int fb(int n){
    int fn,f1=1,f0=0;
    for (int i=2;i<=20;++i){
        fn=f1+f0;
        if (n==fn) return 1;
        f0=f1;
        f1=fn;
    }
        return 0;
}

int ngt(int n){
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);++i)
    if (n%i==0) return 0;
    return 1;
}

int tach(int n){
    int r,s=0;
    while (n!=0){
        s+=n%10;
        n/=10;
    }
    if (fb(s)) return 1;
    return 0;
}

int main() {
    int a,b,count=0;
    scanf ("%d%d",&a,&b);
    for (int i=a;i<=b;++i)
    if (ngt(i) && tach(i)) {
        printf("%d ",i);
        count=1;
    }
    if (count == 0) printf("-1");
    return 0;
}