#include <stdio.h>
int r,s=0;

int dao(int n) {
     
     if (n) {
         r=n%10;
        s=s*10+r;
        dao(n/10);
     }
     else return s;
     return s;
}

int main() {
    int n;
    scanf ("%d",&n);
    printf ("%d",dao(n));
    return 0;
}