#include <stdio.h>
#define ll long long

ll gt(int n){
    if (n==1) return 1;
    return (ll)n*gt(n-1);
}

int main() {
    int n;
    scanf ("%d",&n);
    printf("%d",gt(n));
    return 0;
}