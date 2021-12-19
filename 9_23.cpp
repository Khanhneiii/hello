#include <stdio.h>

int ngt(int a,int b) {
    int gcd;
    if (a%2==0 && b%2==0) return 0;
    while (a*b!=0){
        gcd=a%b;
        a=b;
        b=gcd;
    }
    if (a==1) return 1;
    return 0;
}

int main() {
    int a,b;
    scanf ("%d%d",&a,&b);
    if (ngt(a,b)) printf("YES"); else printf("NO");
    return 0;
}