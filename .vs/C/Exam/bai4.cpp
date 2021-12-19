#include <stdio.h>

int main() {
    int n;
    long long f0=0,f1=1,fn;
    scanf("%d",&n);
    for (int i=1;i<=n;++i){
        for (int j=1;j<=i;++j){
                fn = f1 + f0;
                f0=f1;
                f1=fn;
                printf ("%lld ",fn);
        }
        printf("\n");
    }
    return 0;
}