#include <stdio.h>
#include <math.h>
int s=0;
int sum(int n){
    if (n==0) return s;
    else {
        s+=pow(-1,n)*n;
        sum(n-=1);
    }
}
    int main() {
        int n;
        scanf ("%d",&n);
        printf ("%d",sum(n));
        return 0;
    }
