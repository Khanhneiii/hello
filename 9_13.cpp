#include <stdio.h>
#include <math.h>

int tn(int n){
    int r,s=0,m=n;
    while (n!=0){
        s=s*10+n%10;
        n/=10;
    }
    if (s==m) return 1;
    return 0;
}

int uoc(int n){
    int count=0,a;
    for (int i=2;i<=sqrt(n);++i){
        if (n%i==0) {
            while (n%i==0) {
                n/=i;
            }
            count++;
        }
    }
    if (n!=1) count++;
    if (count >= 3) return 1;
    return 0;
}

int main() {
    int count=0,a,b;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;++i){
        if (tn(i) && uoc(i)) {
            count=1;
            printf("%d ",i);
        }
    }
    if (count == 0) printf("-1");
    return 0;
}