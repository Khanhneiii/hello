#include <stdio.h>

long long inv(long long n){
    long long sum=0,r;
    while (n!=0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;
}

    int main(){
        int time;
        long long n;
        scanf ("%d",&time);
        for (int i=1;i<=time;++i){
            scanf ("%lld",&n);
            if (n==inv(n)) printf("YES\n"); else printf ("NO\n");
        } 
        return 0;
    }