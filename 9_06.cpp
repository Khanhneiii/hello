#include <stdio.h>
#include <math.h>

int sum(int n){
    int j,count=0,s=1;
    for (int i=1;i<=sqrt(n);++i){
        if (n%i==0){
            count++;
            if (i!=n/i) count++;
        }
        
    }
    return count;
}

int main(){
    int n,t;
    scanf("%d",&t);
    for (int i=1;i<=t;++i) {
        scanf("%d",&n);
        printf ("%d\n",sum(n));
    }
    return 0;
}