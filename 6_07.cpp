#include <stdio.h>

int main() {
    int n,a,b,i,c;
    scanf ("%d%d",&a,&b);
    for (i=1;i<=a;++i){
        for (n=1;n<=b;++n)
        if (i%2==0) printf("0"); else printf("1");
    printf("\n");
    }
    return 0;

}