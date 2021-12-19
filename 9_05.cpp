#include <stdio.h>
#include <math.h>

int sum(int n){
    int count=0,i,s,tong=1;
    for (i=1;i<=sqrt(n);++i){
        if ((n%i==0)) {
           count+=i;
        if (i!=n/i) count+=n/i;
        }
        
    }
    return count;
}

int main() {
    int n,count,t,i;
    scanf("%d",&t);
    for (i=1;i<=t;++i){
        scanf ("%d",&n);
        count=sum(n);
        printf("%d\n",count);
    }
    return 0;
    
}
