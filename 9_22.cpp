#include <stdio.h>
#include <math.h>

int lon(int n) {
    int r=n%10;
    n/=10;
    while (n!=0){
        
        if (r<n%10) return 0;
        n/=10;
    }
    return 1;
}

int ngt(int n){
    if (n<=1) return 0;
    for (int i=2;i<=sqrt(n);++i){
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {
    int n,count=0;
    scanf("%d",&n);
    for (int i=2;i<n;++i) {
        if (ngt(i) && lon(i)) {
            printf ("%d ",i);
            count++;
        }
    }
    printf("\n%d",count);
    return 0;
}