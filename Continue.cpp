#include <stdio.h>
#include <math.h>

int tohop(int n,int k){
    if (k==0 || k==n) return 1;
    return tohop(n-1,k-1) + tohop(n,k-1);
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d ",tohop(a,b));
    return 0;
}