#include  <stdio.h>

int main() {
    int n,k,n1;
    scanf("%d%d%d",&n,&k,&n1);
    int s=n1*n1*k;
    if (s/(n*n) >= 1) printf ("YES");
    else printf ("NO");
    return 0;
}