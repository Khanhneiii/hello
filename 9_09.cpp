#include <stdio.h>

int sum(long long n){
    int r,i,s=0;
        while (n!=0){
            r=n%10;
            s+=r;
            n/=10;
        }
        return s;
}

int main(){
    int t;
    long long n;
    scanf("%d",&t);
    for (int i=1;i<=t;++i){
        scanf("%lld",&n);
        printf("%d\n",sum(n));
    }
    return 0;
}