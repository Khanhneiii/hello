#include <stdio.h>
#include<math.h>

int gt(int n){
    long long j=1;
    if (n<=1) return 1;
    for (int i=2;i<=n;++i) j*=i;
    return j;
}

int gcd(int a, int b){
    int tmp;
    while (a*b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int main(){
    int a,b,ucln;
    scanf("%d%d",&a,&b);
    a=gt(a);
    b=gt(b);
    ucln=gcd(a,b);
    printf("%d ",ucln);
    return 0;
    

}