#include <stdio.h>

int num(int n){
    if (n<10) return n;
    return num(n/10);
}

int main () {
    int n;
    scanf("%d",&n);
    printf ("%d",num(n));
    return 0;
}
